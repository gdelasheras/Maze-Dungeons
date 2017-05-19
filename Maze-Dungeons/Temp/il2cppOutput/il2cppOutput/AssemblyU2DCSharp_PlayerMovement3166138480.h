#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// Timer
struct Timer_t2917042437;
// UnityEngine.UI.Text
struct Text_t356221433;
// BoardManager
struct BoardManager_t3145750679;
// GameMenu
struct GameMenu_t2628062091;
// UnityEngine.Animator
struct Animator_t69676727;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_t502193897;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// PlayerMovement
struct  PlayerMovement_t3166138480  : public MonoBehaviour_t1158329972
{
public:
	// System.Single PlayerMovement::playerMov
	float ___playerMov_2;
	// Timer PlayerMovement::timer
	Timer_t2917042437 * ___timer_3;
	// UnityEngine.UI.Text PlayerMovement::TextoPuntos
	Text_t356221433 * ___TextoPuntos_4;
	// BoardManager PlayerMovement::boardmanager
	BoardManager_t3145750679 * ___boardmanager_5;
	// GameMenu PlayerMovement::menu
	GameMenu_t2628062091 * ___menu_6;
	// UnityEngine.Animator PlayerMovement::anim
	Animator_t69676727 * ___anim_7;
	// UnityEngine.Rigidbody2D PlayerMovement::rb
	Rigidbody2D_t502193897 * ___rb_8;
	// System.Boolean PlayerMovement::walking
	bool ___walking_9;
	// System.Int32 PlayerMovement::remainingBeepers
	int32_t ___remainingBeepers_10;

public:
	inline static int32_t get_offset_of_playerMov_2() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___playerMov_2)); }
	inline float get_playerMov_2() const { return ___playerMov_2; }
	inline float* get_address_of_playerMov_2() { return &___playerMov_2; }
	inline void set_playerMov_2(float value)
	{
		___playerMov_2 = value;
	}

	inline static int32_t get_offset_of_timer_3() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___timer_3)); }
	inline Timer_t2917042437 * get_timer_3() const { return ___timer_3; }
	inline Timer_t2917042437 ** get_address_of_timer_3() { return &___timer_3; }
	inline void set_timer_3(Timer_t2917042437 * value)
	{
		___timer_3 = value;
		Il2CppCodeGenWriteBarrier(&___timer_3, value);
	}

	inline static int32_t get_offset_of_TextoPuntos_4() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___TextoPuntos_4)); }
	inline Text_t356221433 * get_TextoPuntos_4() const { return ___TextoPuntos_4; }
	inline Text_t356221433 ** get_address_of_TextoPuntos_4() { return &___TextoPuntos_4; }
	inline void set_TextoPuntos_4(Text_t356221433 * value)
	{
		___TextoPuntos_4 = value;
		Il2CppCodeGenWriteBarrier(&___TextoPuntos_4, value);
	}

	inline static int32_t get_offset_of_boardmanager_5() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___boardmanager_5)); }
	inline BoardManager_t3145750679 * get_boardmanager_5() const { return ___boardmanager_5; }
	inline BoardManager_t3145750679 ** get_address_of_boardmanager_5() { return &___boardmanager_5; }
	inline void set_boardmanager_5(BoardManager_t3145750679 * value)
	{
		___boardmanager_5 = value;
		Il2CppCodeGenWriteBarrier(&___boardmanager_5, value);
	}

	inline static int32_t get_offset_of_menu_6() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___menu_6)); }
	inline GameMenu_t2628062091 * get_menu_6() const { return ___menu_6; }
	inline GameMenu_t2628062091 ** get_address_of_menu_6() { return &___menu_6; }
	inline void set_menu_6(GameMenu_t2628062091 * value)
	{
		___menu_6 = value;
		Il2CppCodeGenWriteBarrier(&___menu_6, value);
	}

	inline static int32_t get_offset_of_anim_7() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___anim_7)); }
	inline Animator_t69676727 * get_anim_7() const { return ___anim_7; }
	inline Animator_t69676727 ** get_address_of_anim_7() { return &___anim_7; }
	inline void set_anim_7(Animator_t69676727 * value)
	{
		___anim_7 = value;
		Il2CppCodeGenWriteBarrier(&___anim_7, value);
	}

	inline static int32_t get_offset_of_rb_8() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___rb_8)); }
	inline Rigidbody2D_t502193897 * get_rb_8() const { return ___rb_8; }
	inline Rigidbody2D_t502193897 ** get_address_of_rb_8() { return &___rb_8; }
	inline void set_rb_8(Rigidbody2D_t502193897 * value)
	{
		___rb_8 = value;
		Il2CppCodeGenWriteBarrier(&___rb_8, value);
	}

	inline static int32_t get_offset_of_walking_9() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___walking_9)); }
	inline bool get_walking_9() const { return ___walking_9; }
	inline bool* get_address_of_walking_9() { return &___walking_9; }
	inline void set_walking_9(bool value)
	{
		___walking_9 = value;
	}

	inline static int32_t get_offset_of_remainingBeepers_10() { return static_cast<int32_t>(offsetof(PlayerMovement_t3166138480, ___remainingBeepers_10)); }
	inline int32_t get_remainingBeepers_10() const { return ___remainingBeepers_10; }
	inline int32_t* get_address_of_remainingBeepers_10() { return &___remainingBeepers_10; }
	inline void set_remainingBeepers_10(int32_t value)
	{
		___remainingBeepers_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
