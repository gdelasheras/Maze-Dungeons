#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// PlayerMovement
struct PlayerMovement_t3166138480;
// UnityEngine.GameObject
struct GameObject_t1756533147;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// TouchController
struct  TouchController_t3051944939  : public MonoBehaviour_t1158329972
{
public:
	// PlayerMovement TouchController::moviPlayer
	PlayerMovement_t3166138480 * ___moviPlayer_2;
	// UnityEngine.Vector2 TouchController::v
	Vector2_t2243707579  ___v_3;
	// UnityEngine.GameObject TouchController::mobileControls
	GameObject_t1756533147 * ___mobileControls_4;

public:
	inline static int32_t get_offset_of_moviPlayer_2() { return static_cast<int32_t>(offsetof(TouchController_t3051944939, ___moviPlayer_2)); }
	inline PlayerMovement_t3166138480 * get_moviPlayer_2() const { return ___moviPlayer_2; }
	inline PlayerMovement_t3166138480 ** get_address_of_moviPlayer_2() { return &___moviPlayer_2; }
	inline void set_moviPlayer_2(PlayerMovement_t3166138480 * value)
	{
		___moviPlayer_2 = value;
		Il2CppCodeGenWriteBarrier(&___moviPlayer_2, value);
	}

	inline static int32_t get_offset_of_v_3() { return static_cast<int32_t>(offsetof(TouchController_t3051944939, ___v_3)); }
	inline Vector2_t2243707579  get_v_3() const { return ___v_3; }
	inline Vector2_t2243707579 * get_address_of_v_3() { return &___v_3; }
	inline void set_v_3(Vector2_t2243707579  value)
	{
		___v_3 = value;
	}

	inline static int32_t get_offset_of_mobileControls_4() { return static_cast<int32_t>(offsetof(TouchController_t3051944939, ___mobileControls_4)); }
	inline GameObject_t1756533147 * get_mobileControls_4() const { return ___mobileControls_4; }
	inline GameObject_t1756533147 ** get_address_of_mobileControls_4() { return &___mobileControls_4; }
	inline void set_mobileControls_4(GameObject_t1756533147 * value)
	{
		___mobileControls_4 = value;
		Il2CppCodeGenWriteBarrier(&___mobileControls_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
