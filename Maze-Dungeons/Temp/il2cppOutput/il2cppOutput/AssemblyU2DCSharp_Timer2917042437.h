#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.UI.Text
struct Text_t356221433;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Timer
struct  Timer_t2917042437  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.UI.Text Timer::textoCronometro
	Text_t356221433 * ___textoCronometro_2;
	// System.Single Timer::tiempoInicio
	float ___tiempoInicio_3;
	// System.Boolean Timer::fin
	bool ___fin_4;
	// System.Int32 Timer::restar
	int32_t ___restar_5;

public:
	inline static int32_t get_offset_of_textoCronometro_2() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___textoCronometro_2)); }
	inline Text_t356221433 * get_textoCronometro_2() const { return ___textoCronometro_2; }
	inline Text_t356221433 ** get_address_of_textoCronometro_2() { return &___textoCronometro_2; }
	inline void set_textoCronometro_2(Text_t356221433 * value)
	{
		___textoCronometro_2 = value;
		Il2CppCodeGenWriteBarrier(&___textoCronometro_2, value);
	}

	inline static int32_t get_offset_of_tiempoInicio_3() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___tiempoInicio_3)); }
	inline float get_tiempoInicio_3() const { return ___tiempoInicio_3; }
	inline float* get_address_of_tiempoInicio_3() { return &___tiempoInicio_3; }
	inline void set_tiempoInicio_3(float value)
	{
		___tiempoInicio_3 = value;
	}

	inline static int32_t get_offset_of_fin_4() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___fin_4)); }
	inline bool get_fin_4() const { return ___fin_4; }
	inline bool* get_address_of_fin_4() { return &___fin_4; }
	inline void set_fin_4(bool value)
	{
		___fin_4 = value;
	}

	inline static int32_t get_offset_of_restar_5() { return static_cast<int32_t>(offsetof(Timer_t2917042437, ___restar_5)); }
	inline int32_t get_restar_5() const { return ___restar_5; }
	inline int32_t* get_address_of_restar_5() { return &___restar_5; }
	inline void set_restar_5(int32_t value)
	{
		___restar_5 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
