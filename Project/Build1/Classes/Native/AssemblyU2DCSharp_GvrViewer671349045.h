﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// GvrViewer
struct GvrViewer_t671349045;
// UnityEngine.Camera
struct Camera_t3533968274;
// StereoController
struct StereoController_t1637909972;
// Gvr.Internal.BaseVRDevice
struct BaseVRDevice_t864282971;
// UnityEngine.RenderTexture
struct RenderTexture_t12905170;
// System.Uri
struct Uri_t2776692961;
// GvrViewer/StereoScreenChangeDelegate
struct StereoScreenChangeDelegate_t4234461465;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"
#include "AssemblyU2DCSharp_GvrViewer_DistortionCorrectionMe3847017660.h"
#include "UnityEngine_UnityEngine_Vector23525329788.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GvrViewer
struct  GvrViewer_t671349045  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean GvrViewer::vrModeEnabled
	bool ___vrModeEnabled_6;
	// GvrViewer/DistortionCorrectionMethod GvrViewer::distortionCorrection
	int32_t ___distortionCorrection_7;
	// System.Single GvrViewer::neckModelScale
	float ___neckModelScale_8;
	// System.Single GvrViewer::stereoScreenScale
	float ___stereoScreenScale_10;
	// UnityEngine.Vector2 GvrViewer::defaultComfortableViewingRange
	Vector2_t3525329788  ___defaultComfortableViewingRange_12;
	// System.Uri GvrViewer::DefaultDeviceProfile
	Uri_t2776692961 * ___DefaultDeviceProfile_13;
	// System.Int32 GvrViewer::updatedToFrame
	int32_t ___updatedToFrame_14;
	// GvrViewer/StereoScreenChangeDelegate GvrViewer::OnStereoScreenChanged
	StereoScreenChangeDelegate_t4234461465 * ___OnStereoScreenChanged_15;
	// System.Boolean GvrViewer::<NativeDistortionCorrectionSupported>k__BackingField
	bool ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16;
	// System.Boolean GvrViewer::<NativeUILayerSupported>k__BackingField
	bool ___U3CNativeUILayerSupportedU3Ek__BackingField_17;
	// System.Boolean GvrViewer::<Triggered>k__BackingField
	bool ___U3CTriggeredU3Ek__BackingField_18;
	// System.Boolean GvrViewer::<Tilted>k__BackingField
	bool ___U3CTiltedU3Ek__BackingField_19;
	// System.Boolean GvrViewer::<ProfileChanged>k__BackingField
	bool ___U3CProfileChangedU3Ek__BackingField_20;
	// System.Boolean GvrViewer::<BackButtonPressed>k__BackingField
	bool ___U3CBackButtonPressedU3Ek__BackingField_21;

public:
	inline static int32_t get_offset_of_vrModeEnabled_6() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___vrModeEnabled_6)); }
	inline bool get_vrModeEnabled_6() const { return ___vrModeEnabled_6; }
	inline bool* get_address_of_vrModeEnabled_6() { return &___vrModeEnabled_6; }
	inline void set_vrModeEnabled_6(bool value)
	{
		___vrModeEnabled_6 = value;
	}

	inline static int32_t get_offset_of_distortionCorrection_7() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___distortionCorrection_7)); }
	inline int32_t get_distortionCorrection_7() const { return ___distortionCorrection_7; }
	inline int32_t* get_address_of_distortionCorrection_7() { return &___distortionCorrection_7; }
	inline void set_distortionCorrection_7(int32_t value)
	{
		___distortionCorrection_7 = value;
	}

	inline static int32_t get_offset_of_neckModelScale_8() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___neckModelScale_8)); }
	inline float get_neckModelScale_8() const { return ___neckModelScale_8; }
	inline float* get_address_of_neckModelScale_8() { return &___neckModelScale_8; }
	inline void set_neckModelScale_8(float value)
	{
		___neckModelScale_8 = value;
	}

	inline static int32_t get_offset_of_stereoScreenScale_10() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___stereoScreenScale_10)); }
	inline float get_stereoScreenScale_10() const { return ___stereoScreenScale_10; }
	inline float* get_address_of_stereoScreenScale_10() { return &___stereoScreenScale_10; }
	inline void set_stereoScreenScale_10(float value)
	{
		___stereoScreenScale_10 = value;
	}

	inline static int32_t get_offset_of_defaultComfortableViewingRange_12() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___defaultComfortableViewingRange_12)); }
	inline Vector2_t3525329788  get_defaultComfortableViewingRange_12() const { return ___defaultComfortableViewingRange_12; }
	inline Vector2_t3525329788 * get_address_of_defaultComfortableViewingRange_12() { return &___defaultComfortableViewingRange_12; }
	inline void set_defaultComfortableViewingRange_12(Vector2_t3525329788  value)
	{
		___defaultComfortableViewingRange_12 = value;
	}

	inline static int32_t get_offset_of_DefaultDeviceProfile_13() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___DefaultDeviceProfile_13)); }
	inline Uri_t2776692961 * get_DefaultDeviceProfile_13() const { return ___DefaultDeviceProfile_13; }
	inline Uri_t2776692961 ** get_address_of_DefaultDeviceProfile_13() { return &___DefaultDeviceProfile_13; }
	inline void set_DefaultDeviceProfile_13(Uri_t2776692961 * value)
	{
		___DefaultDeviceProfile_13 = value;
		Il2CppCodeGenWriteBarrier(&___DefaultDeviceProfile_13, value);
	}

	inline static int32_t get_offset_of_updatedToFrame_14() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___updatedToFrame_14)); }
	inline int32_t get_updatedToFrame_14() const { return ___updatedToFrame_14; }
	inline int32_t* get_address_of_updatedToFrame_14() { return &___updatedToFrame_14; }
	inline void set_updatedToFrame_14(int32_t value)
	{
		___updatedToFrame_14 = value;
	}

	inline static int32_t get_offset_of_OnStereoScreenChanged_15() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___OnStereoScreenChanged_15)); }
	inline StereoScreenChangeDelegate_t4234461465 * get_OnStereoScreenChanged_15() const { return ___OnStereoScreenChanged_15; }
	inline StereoScreenChangeDelegate_t4234461465 ** get_address_of_OnStereoScreenChanged_15() { return &___OnStereoScreenChanged_15; }
	inline void set_OnStereoScreenChanged_15(StereoScreenChangeDelegate_t4234461465 * value)
	{
		___OnStereoScreenChanged_15 = value;
		Il2CppCodeGenWriteBarrier(&___OnStereoScreenChanged_15, value);
	}

	inline static int32_t get_offset_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16)); }
	inline bool get_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16() const { return ___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16() { return &___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16; }
	inline void set_U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16(bool value)
	{
		___U3CNativeDistortionCorrectionSupportedU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CNativeUILayerSupportedU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CNativeUILayerSupportedU3Ek__BackingField_17)); }
	inline bool get_U3CNativeUILayerSupportedU3Ek__BackingField_17() const { return ___U3CNativeUILayerSupportedU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CNativeUILayerSupportedU3Ek__BackingField_17() { return &___U3CNativeUILayerSupportedU3Ek__BackingField_17; }
	inline void set_U3CNativeUILayerSupportedU3Ek__BackingField_17(bool value)
	{
		___U3CNativeUILayerSupportedU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3CTriggeredU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CTriggeredU3Ek__BackingField_18)); }
	inline bool get_U3CTriggeredU3Ek__BackingField_18() const { return ___U3CTriggeredU3Ek__BackingField_18; }
	inline bool* get_address_of_U3CTriggeredU3Ek__BackingField_18() { return &___U3CTriggeredU3Ek__BackingField_18; }
	inline void set_U3CTriggeredU3Ek__BackingField_18(bool value)
	{
		___U3CTriggeredU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_U3CTiltedU3Ek__BackingField_19() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CTiltedU3Ek__BackingField_19)); }
	inline bool get_U3CTiltedU3Ek__BackingField_19() const { return ___U3CTiltedU3Ek__BackingField_19; }
	inline bool* get_address_of_U3CTiltedU3Ek__BackingField_19() { return &___U3CTiltedU3Ek__BackingField_19; }
	inline void set_U3CTiltedU3Ek__BackingField_19(bool value)
	{
		___U3CTiltedU3Ek__BackingField_19 = value;
	}

	inline static int32_t get_offset_of_U3CProfileChangedU3Ek__BackingField_20() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CProfileChangedU3Ek__BackingField_20)); }
	inline bool get_U3CProfileChangedU3Ek__BackingField_20() const { return ___U3CProfileChangedU3Ek__BackingField_20; }
	inline bool* get_address_of_U3CProfileChangedU3Ek__BackingField_20() { return &___U3CProfileChangedU3Ek__BackingField_20; }
	inline void set_U3CProfileChangedU3Ek__BackingField_20(bool value)
	{
		___U3CProfileChangedU3Ek__BackingField_20 = value;
	}

	inline static int32_t get_offset_of_U3CBackButtonPressedU3Ek__BackingField_21() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045, ___U3CBackButtonPressedU3Ek__BackingField_21)); }
	inline bool get_U3CBackButtonPressedU3Ek__BackingField_21() const { return ___U3CBackButtonPressedU3Ek__BackingField_21; }
	inline bool* get_address_of_U3CBackButtonPressedU3Ek__BackingField_21() { return &___U3CBackButtonPressedU3Ek__BackingField_21; }
	inline void set_U3CBackButtonPressedU3Ek__BackingField_21(bool value)
	{
		___U3CBackButtonPressedU3Ek__BackingField_21 = value;
	}
};

struct GvrViewer_t671349045_StaticFields
{
public:
	// GvrViewer GvrViewer::instance
	GvrViewer_t671349045 * ___instance_3;
	// UnityEngine.Camera GvrViewer::currentMainCamera
	Camera_t3533968274 * ___currentMainCamera_4;
	// StereoController GvrViewer::currentController
	StereoController_t1637909972 * ___currentController_5;
	// Gvr.Internal.BaseVRDevice GvrViewer::device
	BaseVRDevice_t864282971 * ___device_9;
	// UnityEngine.RenderTexture GvrViewer::stereoScreen
	RenderTexture_t12905170 * ___stereoScreen_11;

public:
	inline static int32_t get_offset_of_instance_3() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___instance_3)); }
	inline GvrViewer_t671349045 * get_instance_3() const { return ___instance_3; }
	inline GvrViewer_t671349045 ** get_address_of_instance_3() { return &___instance_3; }
	inline void set_instance_3(GvrViewer_t671349045 * value)
	{
		___instance_3 = value;
		Il2CppCodeGenWriteBarrier(&___instance_3, value);
	}

	inline static int32_t get_offset_of_currentMainCamera_4() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___currentMainCamera_4)); }
	inline Camera_t3533968274 * get_currentMainCamera_4() const { return ___currentMainCamera_4; }
	inline Camera_t3533968274 ** get_address_of_currentMainCamera_4() { return &___currentMainCamera_4; }
	inline void set_currentMainCamera_4(Camera_t3533968274 * value)
	{
		___currentMainCamera_4 = value;
		Il2CppCodeGenWriteBarrier(&___currentMainCamera_4, value);
	}

	inline static int32_t get_offset_of_currentController_5() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___currentController_5)); }
	inline StereoController_t1637909972 * get_currentController_5() const { return ___currentController_5; }
	inline StereoController_t1637909972 ** get_address_of_currentController_5() { return &___currentController_5; }
	inline void set_currentController_5(StereoController_t1637909972 * value)
	{
		___currentController_5 = value;
		Il2CppCodeGenWriteBarrier(&___currentController_5, value);
	}

	inline static int32_t get_offset_of_device_9() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___device_9)); }
	inline BaseVRDevice_t864282971 * get_device_9() const { return ___device_9; }
	inline BaseVRDevice_t864282971 ** get_address_of_device_9() { return &___device_9; }
	inline void set_device_9(BaseVRDevice_t864282971 * value)
	{
		___device_9 = value;
		Il2CppCodeGenWriteBarrier(&___device_9, value);
	}

	inline static int32_t get_offset_of_stereoScreen_11() { return static_cast<int32_t>(offsetof(GvrViewer_t671349045_StaticFields, ___stereoScreen_11)); }
	inline RenderTexture_t12905170 * get_stereoScreen_11() const { return ___stereoScreen_11; }
	inline RenderTexture_t12905170 ** get_address_of_stereoScreen_11() { return &___stereoScreen_11; }
	inline void set_stereoScreen_11(RenderTexture_t12905170 * value)
	{
		___stereoScreen_11 = value;
		Il2CppCodeGenWriteBarrier(&___stereoScreen_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
