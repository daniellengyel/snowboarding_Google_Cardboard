using UnityEngine;
using System.Collections;
using System;

/// <summary>
/// The players control class. It takes care of all the forces which go into makeing the snowboarder behave properly. On the computer, use control (Mac) to tilt 
/// the view so you can move. Pressing option will let you look around.
/// </summary>
public class PlayerControls : MonoBehaviour
{


    //bools
    public bool grounded; //A bool which states wether the player is touching the ground or not.
    public bool turned; ///< A bool which indicates wether the player is turning/has already turned so that the player does not align itself.

    //Objects
    public Rigidbody playerRB;
    public Transform cameraChild;

    //variables
    public float RadiusOfTurn = 3; ///< In meters. This is constant for now since usually there is only really one radius at which carving occurs. However, the plan is to make a function which calculates the radius of the turn given the angle of the player's velocity to the equipotential.

	//Vectors
	private Vector3 lastForward;

    void Start()
    {
        playerRB = GetComponent<Rigidbody>();
        cameraChild = transform.Find("Main Camera");
    }

	/// <summary>
	/// Central loop of the game. Applies all the forces and makes the player move appropriately. 
	/// </summary>
    void Update()
    {

	

        if (grounded)
        {
            if (Input.touchCount != 0 || Input.GetMouseButton(0))
            {
				var b = 100;
                var mass = 70;
                var localVectorForce = playerRB.velocity.normalized * (-b * playerRB.velocity.magnitude / mass); // new Vector3(0, 0, -(b * playerRB.velocity.magnitude)/mass);
                if (playerRB.velocity.magnitude < 0.5)
                {
                    playerRB.velocity = new Vector3(0, 0, 0);
                }
                else
                {
                    playerRB.AddForce(localVectorForce);

                }
            }

            else
            {
                AlignPlayer();
                TurnPlayer(CurrentRateOfTurn());
                ApplyForces();

            }

        }

    }


    /// <summary>
    /// Phi is the angle between the normal vector and equipotential line
    /// 
    /// 
    /// </summary>
    void ApplyForces()
    {
        var normalAcceleration = GetNormalForceAcclarationInSlopePlane();
        var angleEquipotential = GetAngleToEuqipotential();
        var radiansEquipotential = angleEquipotential * Mathf.Deg2Rad;
        var phiAngle = Mathf.Abs((90 - Mathf.Abs(angleEquipotential)) % 90); //smallest angle the normal makes with equipotential. always positive
        var RadiansPhi = phiAngle * Mathf.Deg2Rad;
        var xDirection = (angleEquipotential > 270) || (angleEquipotential < 180 && angleEquipotential > 90) ? -1 : 1; //assuming a normal force which points up the hill. when it points up the direction of the xForce will change since normalAcceleration will be -1.
        var normalX = (float)(Mathf.Cos(RadiansPhi) * normalAcceleration) * (xDirection);
        var normalZ = (float)(Mathf.Sin(RadiansPhi) * normalAcceleration);
        var localVector = new Vector3(normalX, 0f, -normalZ); //even when i go upwards i should have the edge such that the normal force points up the hill
        var worldVector = phiAngle != 0 ? TransformLocalSlopeVectorToWorld(localVector) : new Vector3(0, 0, 0);

        playerRB.AddForce(worldVector);
    }

    /// <summary>
    /// Calculates the magnitude of the normal forces acceleration. Trick is to realize that the force is in the direction of the velocity and that that means 
    /// that the downward force and the sideways force are related by tan(angleEquipotential)
    /// </summary>
    /// <returns></returns>
    double GetNormalForceAcclarationInSlopePlane()
    {
        var gravity = GetGravityInSlopePlane();
        var angleToEquipotential = Mathf.Abs(GetAngleToEuqipotential());
        var radiansEquipotential = angleToEquipotential * Mathf.Deg2Rad;
        var phi = Mathf.Abs((90 - Mathf.Abs(angleToEquipotential)) % 90); //smalles angle the normal makes with equipotential. always positive
        var radiansPhi = phi * Mathf.Deg2Rad;
        var normalForce = gravity / (Mathf.Abs(Mathf.Tan(radiansEquipotential)) * Mathf.Cos(radiansPhi) + Math.Sin(radiansPhi));
        var directionOfNormal = angleToEquipotential > 180 || angleToEquipotential < 0 ? 1 : -1; //Positive points down the hill and negative up.
        var normalForceMagDir = Mathf.Abs((float)normalForce);
        return normalForceMagDir;
    }


    float CurrentRateOfTurn()
    {
        var angleUnmodified = cameraChild.localEulerAngles.z;
        var angle = angleUnmodified > 180 ? Mathf.Abs(angleUnmodified - 360) : angleUnmodified;
        angle = angle > 90 ? 90 : angle;
        angle = angleUnmodified > 180 ? angle : angle * -1;
        var slope = 0.1f / 5;
        var y = slope * angle;
        return y;
    }

    /// <summary>
    /// Takes a vector which is local to the reference frame of the slope (forward is down the slope, up is along the normal and x is to the right when looking down) and transforms it to
    /// to a world vector.
    /// </summary>
    /// <param name="vector"></param>
    /// <returns></returns>
    Vector3 TransformLocalSlopeVectorToWorld(Vector3 vector)
    {
        var normal = GetNormal();
        var angleToForwad = GetAngleOfVectorToForward(normal);
        var angleToUp = GetAngleOfVectorToUp(normal);
        var vectorForwardAdjusted = Quaternion.AngleAxis(angleToForwad, Vector3.up) * vector;
        var xLocalVector = (Quaternion.AngleAxis(angleToForwad, Vector3.up) * Vector3.right);
        var vectorAdjusted = Quaternion.AngleAxis(angleToUp, xLocalVector) * vectorForwardAdjusted;
        return vectorAdjusted;
    }


    /// <summary>
    /// Alignes the players up vector with the players velocity is now the forward direction of the player. 
    /// 
    /// issue later on: Works until skidding is introduced. doesn't work when i stop while going sideways and then restart. immidiately reset view. 
    /// 
    /// 
    /// </summary>
    void AlignPlayer()
    {
        if (playerRB.velocity.magnitude != 0)
        {
			lastForward = playerRB.velocity.normalized;
			transform.forward = lastForward;
		} else {
			transform.forward = lastForward;
		}

    }

    /// <summary>
    /// Finds the angle between the equipotential line of the slop and the orientation of the player. Taken from the xPos Direction side of the equipotential line.
    /// 
    /// Issue: For now i am making the assumption that
    /// the player always looks in the direction of its velocity. It is an assumptin because once skidding is introduced it is not true anymore. 
    /// </summary>
    /// <returns></returns>
    float GetAngleToEuqipotential()
    {

        var normal = GetNormal();
        var yAngleNormal = GetAngleOfVectorToForward(normal);
		var yAnglePlayer = GetAngleOfVectorToForward(lastForward);
        var angleTo = (yAnglePlayer - yAngleNormal);
        return 90 - angleTo;

    }

	/// <summary>
	/// Gets the normal of the slope. 
	/// </summary>
	/// <returns>The normal.</returns>
    Vector3 GetNormal()
    {
        RaycastHit hit;
        if (Physics.Raycast(transform.position, -Vector3.up, out hit))
        {
            return hit.normal.normalized;
        }
        return new Vector3(0, 0, 0);
    }

    /// <summary>
    /// Gets the gravity magnitude component along the plane of the slope. 
    /// </summary>
    /// <returns></returns>
    float GetGravityInSlopePlane()
    {
        var normal = GetNormal();
        var xzNormal = new Vector3(normal.x, 0f, normal.z).normalized;
        var cosAngle = Vector3.Dot(normal, xzNormal);
        return Mathf.Abs(Physics.gravity.magnitude * cosAngle);
    }




    /// <summary>
    /// Turns the players velocity around the normal axis by degrees angle.
    /// </summary>
    /// <param name="angle"></param>
    void TurnPlayer(float angle)
    {
        var normal = GetNormal();
        var newVelocityVector = Quaternion.AngleAxis(angle, normal) * playerRB.velocity;
        playerRB.velocity = newVelocityVector;
    }

    /// <summary>
    /// Find if grounded when the player collider enters or exits the ground collider.
    /// </summary>
    /// <param name="collision"></param>
    void OnCollisionEnter(Collision collision)
    {
        if (collision.transform.tag == "Ground")
        {
            grounded = true;
        }
    }

    void OnCollisionExit(Collision collision)
    {
        if (collision.transform.tag == "Ground")
        {
            grounded = false;
        }
    }

    /// <summary>
    /// Gets the angle of a given vector with the Vector (0,0,1) which is also called the forward vector. Tested and working.
    /// Angle is given in LHC system. 
    /// Basically the y EulerAngle of a gameObject in a Scene. 
    /// Angle is given always abs(angle) <= 180 but with negative indicating direction.
    /// Angle is positive in clockwise direction from Vector3.forward and negative counterClockwise
    /// </summary>
    /// <param name="vectorToUse"></param>
    /// <returns></returns>
    float GetAngleOfVectorToForward(Vector3 vectorToUse)
    {
        var cosTheta = (Vector3.Dot(Vector3.forward, new Vector3(vectorToUse.x, 0, vectorToUse.z).normalized));
        var thetaAngle = Mathf.Abs(Mathf.Acos(cosTheta) * Mathf.Rad2Deg);
        var crossVector = Vector3.Cross(new Vector3(vectorToUse.x, 0f, vectorToUse.z), Vector3.forward).normalized;
        var directionCross = -crossVector.y;
        return thetaAngle * directionCross;
    }

    /// <summary>
    /// unlike GetAngleOfVectorToForward this should be fine since the angle will/should always be angle >= 0 angle <= 90;
    /// </summary>
    /// <param name="vectorToUse"></param>
    /// <returns></returns>
    float GetAngleOfVectorToUp(Vector3 vectorToUse)
    {
        return Mathf.Abs(Mathf.Rad2Deg * (Mathf.Acos(Vector3.Dot(vectorToUse.normalized, Vector3.up))));

    }
}
