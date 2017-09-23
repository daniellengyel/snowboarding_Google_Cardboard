#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// PlayerControls
struct PlayerControls_t3363872983;
// UnityEngine.Collision
struct Collision_t1119538015;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector33525329789.h"
#include "UnityEngine_UnityEngine_Collision1119538015.h"

// System.Void PlayerControls::.ctor()
extern "C"  void PlayerControls__ctor_m1039609252 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::Start()
extern "C"  void PlayerControls_Start_m4281714340 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::Update()
extern "C"  void PlayerControls_Update_m3889977833 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerControls::TransformLocalSlopeVectorToWorld(UnityEngine.Vector3)
extern "C"  Vector3_t3525329789  PlayerControls_TransformLocalSlopeVectorToWorld_m2371544087 (PlayerControls_t3363872983 * __this, Vector3_t3525329789  ___vector0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::AlignPlayerWithVelocity()
extern "C"  void PlayerControls_AlignPlayerWithVelocity_m1260497771 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerControls::GetAngleToEuqipotential()
extern "C"  float PlayerControls_GetAngleToEuqipotential_m102225012 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 PlayerControls::GetNormal()
extern "C"  Vector3_t3525329789  PlayerControls_GetNormal_m3884422437 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerControls::GetGravityInSlopePlane()
extern "C"  float PlayerControls_GetGravityInSlopePlane_m406848346 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Double PlayerControls::GetNormalAcclarationInSlopePlane()
extern "C"  double PlayerControls_GetNormalAcclarationInSlopePlane_m2761318709 (PlayerControls_t3363872983 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::TurnPlayer(System.Single)
extern "C"  void PlayerControls_TurnPlayer_m1073413197 (PlayerControls_t3363872983 * __this, float ___angle0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::OnCollisionEnter(UnityEngine.Collision)
extern "C"  void PlayerControls_OnCollisionEnter_m4028653426 (PlayerControls_t3363872983 * __this, Collision_t1119538015 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerControls::OnCollisionExit(UnityEngine.Collision)
extern "C"  void PlayerControls_OnCollisionExit_m236327172 (PlayerControls_t3363872983 * __this, Collision_t1119538015 * ___collision0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerControls::GetAngleOfVectorToForward(UnityEngine.Vector3)
extern "C"  float PlayerControls_GetAngleOfVectorToForward_m1643677872 (PlayerControls_t3363872983 * __this, Vector3_t3525329789  ___vectorToUse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single PlayerControls::GetAngleOfVectorToUp(UnityEngine.Vector3)
extern "C"  float PlayerControls_GetAngleOfVectorToUp_m3016865344 (PlayerControls_t3363872983 * __this, Vector3_t3525329789  ___vectorToUse0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
