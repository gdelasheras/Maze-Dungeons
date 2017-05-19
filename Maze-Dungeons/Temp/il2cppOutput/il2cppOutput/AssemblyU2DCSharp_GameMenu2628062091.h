#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GameMenu
struct GameMenu_t2628062091;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.UI.InputField
struct InputField_t1631627530;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameMenu
struct  GameMenu_t2628062091  : public MonoBehaviour_t1158329972
{
public:
	// System.String GameMenu::addScoreURL
	String_t* ___addScoreURL_4;
	// UnityEngine.GameObject GameMenu::scoreTree
	GameObject_t1756533147 * ___scoreTree_5;
	// UnityEngine.GameObject GameMenu::pauseTree
	GameObject_t1756533147 * ___pauseTree_6;
	// UnityEngine.UI.InputField GameMenu::inputText
	InputField_t1631627530 * ___inputText_7;
	// System.String GameMenu::time
	String_t* ___time_8;
	// UnityEngine.GameObject GameMenu::PausePanel
	GameObject_t1756533147 * ___PausePanel_9;

public:
	inline static int32_t get_offset_of_addScoreURL_4() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___addScoreURL_4)); }
	inline String_t* get_addScoreURL_4() const { return ___addScoreURL_4; }
	inline String_t** get_address_of_addScoreURL_4() { return &___addScoreURL_4; }
	inline void set_addScoreURL_4(String_t* value)
	{
		___addScoreURL_4 = value;
		Il2CppCodeGenWriteBarrier(&___addScoreURL_4, value);
	}

	inline static int32_t get_offset_of_scoreTree_5() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___scoreTree_5)); }
	inline GameObject_t1756533147 * get_scoreTree_5() const { return ___scoreTree_5; }
	inline GameObject_t1756533147 ** get_address_of_scoreTree_5() { return &___scoreTree_5; }
	inline void set_scoreTree_5(GameObject_t1756533147 * value)
	{
		___scoreTree_5 = value;
		Il2CppCodeGenWriteBarrier(&___scoreTree_5, value);
	}

	inline static int32_t get_offset_of_pauseTree_6() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___pauseTree_6)); }
	inline GameObject_t1756533147 * get_pauseTree_6() const { return ___pauseTree_6; }
	inline GameObject_t1756533147 ** get_address_of_pauseTree_6() { return &___pauseTree_6; }
	inline void set_pauseTree_6(GameObject_t1756533147 * value)
	{
		___pauseTree_6 = value;
		Il2CppCodeGenWriteBarrier(&___pauseTree_6, value);
	}

	inline static int32_t get_offset_of_inputText_7() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___inputText_7)); }
	inline InputField_t1631627530 * get_inputText_7() const { return ___inputText_7; }
	inline InputField_t1631627530 ** get_address_of_inputText_7() { return &___inputText_7; }
	inline void set_inputText_7(InputField_t1631627530 * value)
	{
		___inputText_7 = value;
		Il2CppCodeGenWriteBarrier(&___inputText_7, value);
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___time_8)); }
	inline String_t* get_time_8() const { return ___time_8; }
	inline String_t** get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(String_t* value)
	{
		___time_8 = value;
		Il2CppCodeGenWriteBarrier(&___time_8, value);
	}

	inline static int32_t get_offset_of_PausePanel_9() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091, ___PausePanel_9)); }
	inline GameObject_t1756533147 * get_PausePanel_9() const { return ___PausePanel_9; }
	inline GameObject_t1756533147 ** get_address_of_PausePanel_9() { return &___PausePanel_9; }
	inline void set_PausePanel_9(GameObject_t1756533147 * value)
	{
		___PausePanel_9 = value;
		Il2CppCodeGenWriteBarrier(&___PausePanel_9, value);
	}
};

struct GameMenu_t2628062091_StaticFields
{
public:
	// GameMenu GameMenu::instance
	GameMenu_t2628062091 * ___instance_2;
	// System.Boolean GameMenu::setPause
	bool ___setPause_3;

public:
	inline static int32_t get_offset_of_instance_2() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091_StaticFields, ___instance_2)); }
	inline GameMenu_t2628062091 * get_instance_2() const { return ___instance_2; }
	inline GameMenu_t2628062091 ** get_address_of_instance_2() { return &___instance_2; }
	inline void set_instance_2(GameMenu_t2628062091 * value)
	{
		___instance_2 = value;
		Il2CppCodeGenWriteBarrier(&___instance_2, value);
	}

	inline static int32_t get_offset_of_setPause_3() { return static_cast<int32_t>(offsetof(GameMenu_t2628062091_StaticFields, ___setPause_3)); }
	inline bool get_setPause_3() const { return ___setPause_3; }
	inline bool* get_address_of_setPause_3() { return &___setPause_3; }
	inline void set_setPause_3(bool value)
	{
		___setPause_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
