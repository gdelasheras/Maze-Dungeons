#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t356221433;
// UnityEngine.UI.Button
struct Button_t2872111280;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// ScoreController
struct  ScoreController_t1938732650  : public MonoBehaviour_t1158329972
{
public:
	// System.String ScoreController::insertScore
	String_t* ___insertScore_2;
	// System.String ScoreController::getScores
	String_t* ___getScores_3;
	// UnityEngine.UI.Text ScoreController::titulo
	Text_t356221433 * ___titulo_4;
	// UnityEngine.UI.Text ScoreController::puntuaciones
	Text_t356221433 * ___puntuaciones_5;
	// UnityEngine.UI.Button ScoreController::btnEmpezar
	Button_t2872111280 * ___btnEmpezar_6;
	// UnityEngine.UI.Button ScoreController::btnScores
	Button_t2872111280 * ___btnScores_7;
	// UnityEngine.UI.Button ScoreController::btnVolver
	Button_t2872111280 * ___btnVolver_8;
	// System.String ScoreController::result
	String_t* ___result_9;

public:
	inline static int32_t get_offset_of_insertScore_2() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___insertScore_2)); }
	inline String_t* get_insertScore_2() const { return ___insertScore_2; }
	inline String_t** get_address_of_insertScore_2() { return &___insertScore_2; }
	inline void set_insertScore_2(String_t* value)
	{
		___insertScore_2 = value;
		Il2CppCodeGenWriteBarrier(&___insertScore_2, value);
	}

	inline static int32_t get_offset_of_getScores_3() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___getScores_3)); }
	inline String_t* get_getScores_3() const { return ___getScores_3; }
	inline String_t** get_address_of_getScores_3() { return &___getScores_3; }
	inline void set_getScores_3(String_t* value)
	{
		___getScores_3 = value;
		Il2CppCodeGenWriteBarrier(&___getScores_3, value);
	}

	inline static int32_t get_offset_of_titulo_4() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___titulo_4)); }
	inline Text_t356221433 * get_titulo_4() const { return ___titulo_4; }
	inline Text_t356221433 ** get_address_of_titulo_4() { return &___titulo_4; }
	inline void set_titulo_4(Text_t356221433 * value)
	{
		___titulo_4 = value;
		Il2CppCodeGenWriteBarrier(&___titulo_4, value);
	}

	inline static int32_t get_offset_of_puntuaciones_5() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___puntuaciones_5)); }
	inline Text_t356221433 * get_puntuaciones_5() const { return ___puntuaciones_5; }
	inline Text_t356221433 ** get_address_of_puntuaciones_5() { return &___puntuaciones_5; }
	inline void set_puntuaciones_5(Text_t356221433 * value)
	{
		___puntuaciones_5 = value;
		Il2CppCodeGenWriteBarrier(&___puntuaciones_5, value);
	}

	inline static int32_t get_offset_of_btnEmpezar_6() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___btnEmpezar_6)); }
	inline Button_t2872111280 * get_btnEmpezar_6() const { return ___btnEmpezar_6; }
	inline Button_t2872111280 ** get_address_of_btnEmpezar_6() { return &___btnEmpezar_6; }
	inline void set_btnEmpezar_6(Button_t2872111280 * value)
	{
		___btnEmpezar_6 = value;
		Il2CppCodeGenWriteBarrier(&___btnEmpezar_6, value);
	}

	inline static int32_t get_offset_of_btnScores_7() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___btnScores_7)); }
	inline Button_t2872111280 * get_btnScores_7() const { return ___btnScores_7; }
	inline Button_t2872111280 ** get_address_of_btnScores_7() { return &___btnScores_7; }
	inline void set_btnScores_7(Button_t2872111280 * value)
	{
		___btnScores_7 = value;
		Il2CppCodeGenWriteBarrier(&___btnScores_7, value);
	}

	inline static int32_t get_offset_of_btnVolver_8() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___btnVolver_8)); }
	inline Button_t2872111280 * get_btnVolver_8() const { return ___btnVolver_8; }
	inline Button_t2872111280 ** get_address_of_btnVolver_8() { return &___btnVolver_8; }
	inline void set_btnVolver_8(Button_t2872111280 * value)
	{
		___btnVolver_8 = value;
		Il2CppCodeGenWriteBarrier(&___btnVolver_8, value);
	}

	inline static int32_t get_offset_of_result_9() { return static_cast<int32_t>(offsetof(ScoreController_t1938732650, ___result_9)); }
	inline String_t* get_result_9() const { return ___result_9; }
	inline String_t** get_address_of_result_9() { return &___result_9; }
	inline void set_result_9(String_t* value)
	{
		___result_9 = value;
		Il2CppCodeGenWriteBarrier(&___result_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
