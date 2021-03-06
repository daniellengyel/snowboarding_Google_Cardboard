﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// Gvr.Internal.EmulatorManager
struct EmulatorManager_t556192240;
// Gvr.Internal.EmulatorManager/OnGyroEvent
struct OnGyroEvent_t1920898540;
// Gvr.Internal.EmulatorManager/OnAccelEvent
struct OnAccelEvent_t2121014769;
// Gvr.Internal.EmulatorManager/OnTouchEvent
struct OnTouchEvent_t1883899386;
// Gvr.Internal.EmulatorManager/OnOrientationEvent
struct OnOrientationEvent_t2132287177;
// Gvr.Internal.EmulatorManager/OnButtonEvent
struct OnButtonEvent_t3789669129;
// System.Collections.IEnumerator
struct IEnumerator_t287207039;
// proto.PhoneEvent
struct PhoneEvent_t2801000292;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnG1920898540.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnA2121014769.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnT1883899386.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnO2132287177.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorManager_OnB3789669129.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorGyroEvent536468654.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorAccelEvent73037535.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorTouchEvent4130889448.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorOrientation3633305399.h"
#include "AssemblyU2DCSharp_Gvr_Internal_EmulatorButtonEvent2646560587.h"
#include "AssemblyU2DCSharp_proto_PhoneEvent2801000292.h"

// System.Void Gvr.Internal.EmulatorManager::.ctor()
extern "C"  void EmulatorManager__ctor_m2245544681 (EmulatorManager_t556192240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::.cctor()
extern "C"  void EmulatorManager__cctor_m410312164 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_gyroEventListeners(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_add_gyroEventListeners_m251844190 (EmulatorManager_t556192240 * __this, OnGyroEvent_t1920898540 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_gyroEventListeners(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_remove_gyroEventListeners_m4237515751 (EmulatorManager_t556192240 * __this, OnGyroEvent_t1920898540 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_accelEventListeners(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_add_accelEventListeners_m2893408686 (EmulatorManager_t556192240 * __this, OnAccelEvent_t2121014769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_accelEventListeners(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_remove_accelEventListeners_m2012950775 (EmulatorManager_t556192240 * __this, OnAccelEvent_t2121014769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_touchEventListeners(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_add_touchEventListeners_m3416205390 (EmulatorManager_t556192240 * __this, OnTouchEvent_t1883899386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_touchEventListeners(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_remove_touchEventListeners_m2535747479 (EmulatorManager_t556192240 * __this, OnTouchEvent_t1883899386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_orientationEventListeners(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_add_orientationEventListeners_m971827054 (EmulatorManager_t556192240 * __this, OnOrientationEvent_t2132287177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_orientationEventListeners(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_remove_orientationEventListeners_m1075611959 (EmulatorManager_t556192240 * __this, OnOrientationEvent_t2132287177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_buttonEventListeners(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_add_buttonEventListeners_m3279761764 (EmulatorManager_t556192240 * __this, OnButtonEvent_t3789669129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_buttonEventListeners(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_remove_buttonEventListeners_m3268266605 (EmulatorManager_t556192240 * __this, OnButtonEvent_t3789669129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_gyroEventListenersInternal(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_add_gyroEventListenersInternal_m3727659259 (EmulatorManager_t556192240 * __this, OnGyroEvent_t1920898540 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_gyroEventListenersInternal(Gvr.Internal.EmulatorManager/OnGyroEvent)
extern "C"  void EmulatorManager_remove_gyroEventListenersInternal_m571112836 (EmulatorManager_t556192240 * __this, OnGyroEvent_t1920898540 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_accelEventListenersInternal(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_add_accelEventListenersInternal_m2089204657 (EmulatorManager_t556192240 * __this, OnAccelEvent_t2121014769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_accelEventListenersInternal(Gvr.Internal.EmulatorManager/OnAccelEvent)
extern "C"  void EmulatorManager_remove_accelEventListenersInternal_m895003130 (EmulatorManager_t556192240 * __this, OnAccelEvent_t2121014769 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_touchEventListenersInternal(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_add_touchEventListenersInternal_m3998900561 (EmulatorManager_t556192240 * __this, OnTouchEvent_t1883899386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_touchEventListenersInternal(Gvr.Internal.EmulatorManager/OnTouchEvent)
extern "C"  void EmulatorManager_remove_touchEventListenersInternal_m2804699034 (EmulatorManager_t556192240 * __this, OnTouchEvent_t1883899386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_orientationEventListenersInternal(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_add_orientationEventListenersInternal_m2889438001 (EmulatorManager_t556192240 * __this, OnOrientationEvent_t2132287177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_orientationEventListenersInternal(Gvr.Internal.EmulatorManager/OnOrientationEvent)
extern "C"  void EmulatorManager_remove_orientationEventListenersInternal_m2264079354 (EmulatorManager_t556192240 * __this, OnOrientationEvent_t2132287177 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::add_buttonEventListenersInternal(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_add_buttonEventListenersInternal_m352208321 (EmulatorManager_t556192240 * __this, OnButtonEvent_t3789669129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::remove_buttonEventListenersInternal(Gvr.Internal.EmulatorManager/OnButtonEvent)
extern "C"  void EmulatorManager_remove_buttonEventListenersInternal_m3775776202 (EmulatorManager_t556192240 * __this, OnButtonEvent_t3789669129 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Gvr.Internal.EmulatorManager Gvr.Internal.EmulatorManager::get_Instance()
extern "C"  EmulatorManager_t556192240 * EmulatorManager_get_Instance_m2761414948 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onGyroEvent(Gvr.Internal.EmulatorGyroEvent)
extern "C"  void EmulatorManager_onGyroEvent_m2678475523 (EmulatorManager_t556192240 * __this, EmulatorGyroEvent_t536468654  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onAccelEvent(Gvr.Internal.EmulatorAccelEvent)
extern "C"  void EmulatorManager_onAccelEvent_m1232654521 (EmulatorManager_t556192240 * __this, EmulatorAccelEvent_t73037535  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onTouchEvent(Gvr.Internal.EmulatorTouchEvent)
extern "C"  void EmulatorManager_onTouchEvent_m16049895 (EmulatorManager_t556192240 * __this, EmulatorTouchEvent_t4130889448  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onOrientationEvent(Gvr.Internal.EmulatorOrientationEvent)
extern "C"  void EmulatorManager_onOrientationEvent_m896093641 (EmulatorManager_t556192240 * __this, EmulatorOrientationEvent_t3633305399  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::onButtonEvent(Gvr.Internal.EmulatorButtonEvent)
extern "C"  void EmulatorManager_onButtonEvent_m3161986147 (EmulatorManager_t556192240 * __this, EmulatorButtonEvent_t2646560587  ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Gvr.Internal.EmulatorManager::get_Connected()
extern "C"  bool EmulatorManager_get_Connected_m2454163763 (EmulatorManager_t556192240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::Awake()
extern "C"  void EmulatorManager_Awake_m2483149900 (EmulatorManager_t556192240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::Start()
extern "C"  void EmulatorManager_Start_m1192682473 (EmulatorManager_t556192240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Gvr.Internal.EmulatorManager::EndOfFrame()
extern "C"  Il2CppObject * EmulatorManager_EndOfFrame_m58878910 (EmulatorManager_t556192240 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::OnPhoneEvent(proto.PhoneEvent)
extern "C"  void EmulatorManager_OnPhoneEvent_m612416532 (EmulatorManager_t556192240 * __this, PhoneEvent_t2801000292 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Gvr.Internal.EmulatorManager::ProcessEventAtEndOfFrame(proto.PhoneEvent)
extern "C"  void EmulatorManager_ProcessEventAtEndOfFrame_m3189031586 (EmulatorManager_t556192240 * __this, PhoneEvent_t2801000292 * ___e0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
