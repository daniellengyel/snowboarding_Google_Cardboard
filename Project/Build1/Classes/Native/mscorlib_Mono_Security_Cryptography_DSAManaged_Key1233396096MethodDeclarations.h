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

// Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler
struct KeyGeneratedEventHandler_t1233396096;
// System.Object
struct Il2CppObject;
// System.EventArgs
struct EventArgs_t516466188;
// System.IAsyncResult
struct IAsyncResult_t537683269;
// System.AsyncCallback
struct AsyncCallback_t1363551830;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object837106420.h"
#include "mscorlib_System_IntPtr676692020.h"
#include "mscorlib_System_EventArgs516466188.h"
#include "mscorlib_System_AsyncCallback1363551830.h"

// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::.ctor(System.Object,System.IntPtr)
extern "C"  void KeyGeneratedEventHandler__ctor_m3640396755 (KeyGeneratedEventHandler_t1233396096 * __this, Il2CppObject * ___object0, IntPtr_t ___method1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::Invoke(System.Object,System.EventArgs)
extern "C"  void KeyGeneratedEventHandler_Invoke_m257300999 (KeyGeneratedEventHandler_t1233396096 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
extern "C" void pinvoke_delegate_wrapper_KeyGeneratedEventHandler_t1233396096(Il2CppObject* delegate, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1);
// System.IAsyncResult Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::BeginInvoke(System.Object,System.EventArgs,System.AsyncCallback,System.Object)
extern "C"  Il2CppObject * KeyGeneratedEventHandler_BeginInvoke_m3899350926 (KeyGeneratedEventHandler_t1233396096 * __this, Il2CppObject * ___sender0, EventArgs_t516466188 * ___e1, AsyncCallback_t1363551830 * ___callback2, Il2CppObject * ___object3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Mono.Security.Cryptography.DSAManaged/KeyGeneratedEventHandler::EndInvoke(System.IAsyncResult)
extern "C"  void KeyGeneratedEventHandler_EndInvoke_m1157390179 (KeyGeneratedEventHandler_t1233396096 * __this, Il2CppObject * ___result0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
