#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t1972007546;

#include "UnityEngine_UnityEngine_MonoBehaviour3012272455.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerControls
struct  PlayerControls_t3363872983  : public MonoBehaviour_t3012272455
{
public:
	// System.Boolean PlayerControls::grounded
	bool ___grounded_2;
	// System.Boolean PlayerControls::turned
	bool ___turned_3;
	// UnityEngine.Rigidbody PlayerControls::playerRB
	Rigidbody_t1972007546 * ___playerRB_4;
	// System.Single PlayerControls::RadiusOfTurn
	float ___RadiusOfTurn_5;

public:
	inline static int32_t get_offset_of_grounded_2() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___grounded_2)); }
	inline bool get_grounded_2() const { return ___grounded_2; }
	inline bool* get_address_of_grounded_2() { return &___grounded_2; }
	inline void set_grounded_2(bool value)
	{
		___grounded_2 = value;
	}

	inline static int32_t get_offset_of_turned_3() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___turned_3)); }
	inline bool get_turned_3() const { return ___turned_3; }
	inline bool* get_address_of_turned_3() { return &___turned_3; }
	inline void set_turned_3(bool value)
	{
		___turned_3 = value;
	}

	inline static int32_t get_offset_of_playerRB_4() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___playerRB_4)); }
	inline Rigidbody_t1972007546 * get_playerRB_4() const { return ___playerRB_4; }
	inline Rigidbody_t1972007546 ** get_address_of_playerRB_4() { return &___playerRB_4; }
	inline void set_playerRB_4(Rigidbody_t1972007546 * value)
	{
		___playerRB_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerRB_4, value);
	}

	inline static int32_t get_offset_of_RadiusOfTurn_5() { return static_cast<int32_t>(offsetof(PlayerControls_t3363872983, ___RadiusOfTurn_5)); }
	inline float get_RadiusOfTurn_5() const { return ___RadiusOfTurn_5; }
	inline float* get_address_of_RadiusOfTurn_5() { return &___RadiusOfTurn_5; }
	inline void set_RadiusOfTurn_5(float value)
	{
		___RadiusOfTurn_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
