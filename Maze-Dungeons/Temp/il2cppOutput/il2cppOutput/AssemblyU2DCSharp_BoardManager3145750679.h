#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t1756533147;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t3057952154;
// UnityEngine.UI.Text
struct Text_t356221433;
// System.Collections.Generic.List`1<System.Collections.Generic.List`1<BoardManager/Box>>
struct List_1_t2184423117;
// System.Collections.Generic.List`1<BoardManager/Box>
struct List_1_t2815301985;
// UnityEngine.Transform
struct Transform_t3275118058;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardManager
struct  BoardManager_t3145750679  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.GameObject BoardManager::exit
	GameObject_t1756533147 * ___exit_2;
	// UnityEngine.GameObject BoardManager::timeLess
	GameObject_t1756533147 * ___timeLess_3;
	// UnityEngine.GameObject BoardManager::horizontal
	GameObject_t1756533147 * ___horizontal_4;
	// UnityEngine.GameObject[] BoardManager::floorTiles
	GameObjectU5BU5D_t3057952154* ___floorTiles_5;
	// UnityEngine.GameObject[] BoardManager::outerWallsTiles
	GameObjectU5BU5D_t3057952154* ___outerWallsTiles_6;
	// UnityEngine.GameObject[] BoardManager::insideHorizontalWallsTiles
	GameObjectU5BU5D_t3057952154* ___insideHorizontalWallsTiles_7;
	// UnityEngine.GameObject[] BoardManager::upWallsTiles
	GameObjectU5BU5D_t3057952154* ___upWallsTiles_8;
	// UnityEngine.GameObject[] BoardManager::minimapWallsTiles
	GameObjectU5BU5D_t3057952154* ___minimapWallsTiles_9;
	// System.Int32 BoardManager::level
	int32_t ___level_10;
	// UnityEngine.UI.Text BoardManager::TextoPuntos
	Text_t356221433 * ___TextoPuntos_11;
	// System.Double BoardManager::columns
	double ___columns_12;
	// System.Double BoardManager::rows
	double ___rows_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.List`1<BoardManager/Box>> BoardManager::mazeMap
	List_1_t2184423117 * ___mazeMap_14;
	// System.Collections.Generic.List`1<BoardManager/Box> BoardManager::beepers
	List_1_t2815301985 * ___beepers_15;
	// System.Collections.Generic.List`1<BoardManager/Box> BoardManager::walls
	List_1_t2815301985 * ___walls_16;
	// UnityEngine.Transform BoardManager::boardHolder
	Transform_t3275118058 * ___boardHolder_17;
	// System.Int32 BoardManager::remainingBeepers
	int32_t ___remainingBeepers_18;

public:
	inline static int32_t get_offset_of_exit_2() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___exit_2)); }
	inline GameObject_t1756533147 * get_exit_2() const { return ___exit_2; }
	inline GameObject_t1756533147 ** get_address_of_exit_2() { return &___exit_2; }
	inline void set_exit_2(GameObject_t1756533147 * value)
	{
		___exit_2 = value;
		Il2CppCodeGenWriteBarrier(&___exit_2, value);
	}

	inline static int32_t get_offset_of_timeLess_3() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___timeLess_3)); }
	inline GameObject_t1756533147 * get_timeLess_3() const { return ___timeLess_3; }
	inline GameObject_t1756533147 ** get_address_of_timeLess_3() { return &___timeLess_3; }
	inline void set_timeLess_3(GameObject_t1756533147 * value)
	{
		___timeLess_3 = value;
		Il2CppCodeGenWriteBarrier(&___timeLess_3, value);
	}

	inline static int32_t get_offset_of_horizontal_4() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___horizontal_4)); }
	inline GameObject_t1756533147 * get_horizontal_4() const { return ___horizontal_4; }
	inline GameObject_t1756533147 ** get_address_of_horizontal_4() { return &___horizontal_4; }
	inline void set_horizontal_4(GameObject_t1756533147 * value)
	{
		___horizontal_4 = value;
		Il2CppCodeGenWriteBarrier(&___horizontal_4, value);
	}

	inline static int32_t get_offset_of_floorTiles_5() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___floorTiles_5)); }
	inline GameObjectU5BU5D_t3057952154* get_floorTiles_5() const { return ___floorTiles_5; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_floorTiles_5() { return &___floorTiles_5; }
	inline void set_floorTiles_5(GameObjectU5BU5D_t3057952154* value)
	{
		___floorTiles_5 = value;
		Il2CppCodeGenWriteBarrier(&___floorTiles_5, value);
	}

	inline static int32_t get_offset_of_outerWallsTiles_6() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___outerWallsTiles_6)); }
	inline GameObjectU5BU5D_t3057952154* get_outerWallsTiles_6() const { return ___outerWallsTiles_6; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_outerWallsTiles_6() { return &___outerWallsTiles_6; }
	inline void set_outerWallsTiles_6(GameObjectU5BU5D_t3057952154* value)
	{
		___outerWallsTiles_6 = value;
		Il2CppCodeGenWriteBarrier(&___outerWallsTiles_6, value);
	}

	inline static int32_t get_offset_of_insideHorizontalWallsTiles_7() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___insideHorizontalWallsTiles_7)); }
	inline GameObjectU5BU5D_t3057952154* get_insideHorizontalWallsTiles_7() const { return ___insideHorizontalWallsTiles_7; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_insideHorizontalWallsTiles_7() { return &___insideHorizontalWallsTiles_7; }
	inline void set_insideHorizontalWallsTiles_7(GameObjectU5BU5D_t3057952154* value)
	{
		___insideHorizontalWallsTiles_7 = value;
		Il2CppCodeGenWriteBarrier(&___insideHorizontalWallsTiles_7, value);
	}

	inline static int32_t get_offset_of_upWallsTiles_8() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___upWallsTiles_8)); }
	inline GameObjectU5BU5D_t3057952154* get_upWallsTiles_8() const { return ___upWallsTiles_8; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_upWallsTiles_8() { return &___upWallsTiles_8; }
	inline void set_upWallsTiles_8(GameObjectU5BU5D_t3057952154* value)
	{
		___upWallsTiles_8 = value;
		Il2CppCodeGenWriteBarrier(&___upWallsTiles_8, value);
	}

	inline static int32_t get_offset_of_minimapWallsTiles_9() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___minimapWallsTiles_9)); }
	inline GameObjectU5BU5D_t3057952154* get_minimapWallsTiles_9() const { return ___minimapWallsTiles_9; }
	inline GameObjectU5BU5D_t3057952154** get_address_of_minimapWallsTiles_9() { return &___minimapWallsTiles_9; }
	inline void set_minimapWallsTiles_9(GameObjectU5BU5D_t3057952154* value)
	{
		___minimapWallsTiles_9 = value;
		Il2CppCodeGenWriteBarrier(&___minimapWallsTiles_9, value);
	}

	inline static int32_t get_offset_of_level_10() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___level_10)); }
	inline int32_t get_level_10() const { return ___level_10; }
	inline int32_t* get_address_of_level_10() { return &___level_10; }
	inline void set_level_10(int32_t value)
	{
		___level_10 = value;
	}

	inline static int32_t get_offset_of_TextoPuntos_11() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___TextoPuntos_11)); }
	inline Text_t356221433 * get_TextoPuntos_11() const { return ___TextoPuntos_11; }
	inline Text_t356221433 ** get_address_of_TextoPuntos_11() { return &___TextoPuntos_11; }
	inline void set_TextoPuntos_11(Text_t356221433 * value)
	{
		___TextoPuntos_11 = value;
		Il2CppCodeGenWriteBarrier(&___TextoPuntos_11, value);
	}

	inline static int32_t get_offset_of_columns_12() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___columns_12)); }
	inline double get_columns_12() const { return ___columns_12; }
	inline double* get_address_of_columns_12() { return &___columns_12; }
	inline void set_columns_12(double value)
	{
		___columns_12 = value;
	}

	inline static int32_t get_offset_of_rows_13() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___rows_13)); }
	inline double get_rows_13() const { return ___rows_13; }
	inline double* get_address_of_rows_13() { return &___rows_13; }
	inline void set_rows_13(double value)
	{
		___rows_13 = value;
	}

	inline static int32_t get_offset_of_mazeMap_14() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___mazeMap_14)); }
	inline List_1_t2184423117 * get_mazeMap_14() const { return ___mazeMap_14; }
	inline List_1_t2184423117 ** get_address_of_mazeMap_14() { return &___mazeMap_14; }
	inline void set_mazeMap_14(List_1_t2184423117 * value)
	{
		___mazeMap_14 = value;
		Il2CppCodeGenWriteBarrier(&___mazeMap_14, value);
	}

	inline static int32_t get_offset_of_beepers_15() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___beepers_15)); }
	inline List_1_t2815301985 * get_beepers_15() const { return ___beepers_15; }
	inline List_1_t2815301985 ** get_address_of_beepers_15() { return &___beepers_15; }
	inline void set_beepers_15(List_1_t2815301985 * value)
	{
		___beepers_15 = value;
		Il2CppCodeGenWriteBarrier(&___beepers_15, value);
	}

	inline static int32_t get_offset_of_walls_16() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___walls_16)); }
	inline List_1_t2815301985 * get_walls_16() const { return ___walls_16; }
	inline List_1_t2815301985 ** get_address_of_walls_16() { return &___walls_16; }
	inline void set_walls_16(List_1_t2815301985 * value)
	{
		___walls_16 = value;
		Il2CppCodeGenWriteBarrier(&___walls_16, value);
	}

	inline static int32_t get_offset_of_boardHolder_17() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___boardHolder_17)); }
	inline Transform_t3275118058 * get_boardHolder_17() const { return ___boardHolder_17; }
	inline Transform_t3275118058 ** get_address_of_boardHolder_17() { return &___boardHolder_17; }
	inline void set_boardHolder_17(Transform_t3275118058 * value)
	{
		___boardHolder_17 = value;
		Il2CppCodeGenWriteBarrier(&___boardHolder_17, value);
	}

	inline static int32_t get_offset_of_remainingBeepers_18() { return static_cast<int32_t>(offsetof(BoardManager_t3145750679, ___remainingBeepers_18)); }
	inline int32_t get_remainingBeepers_18() const { return ___remainingBeepers_18; }
	inline int32_t* get_address_of_remainingBeepers_18() { return &___remainingBeepers_18; }
	inline void set_remainingBeepers_18(int32_t value)
	{
		___remainingBeepers_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
