#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// BoardManager
struct BoardManager_t3145750679;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GameManager
struct  GameManager_t2252321495  : public MonoBehaviour_t1158329972
{
public:
	// BoardManager GameManager::boardScript
	BoardManager_t3145750679 * ___boardScript_2;
	// System.Int32 GameManager::level
	int32_t ___level_3;

public:
	inline static int32_t get_offset_of_boardScript_2() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___boardScript_2)); }
	inline BoardManager_t3145750679 * get_boardScript_2() const { return ___boardScript_2; }
	inline BoardManager_t3145750679 ** get_address_of_boardScript_2() { return &___boardScript_2; }
	inline void set_boardScript_2(BoardManager_t3145750679 * value)
	{
		___boardScript_2 = value;
		Il2CppCodeGenWriteBarrier(&___boardScript_2, value);
	}

	inline static int32_t get_offset_of_level_3() { return static_cast<int32_t>(offsetof(GameManager_t2252321495, ___level_3)); }
	inline int32_t get_level_3() const { return ___level_3; }
	inline int32_t* get_address_of_level_3() { return &___level_3; }
	inline void set_level_3(int32_t value)
	{
		___level_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
