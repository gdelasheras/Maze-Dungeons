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

#include "mscorlib_System_Object2689449295.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BoardManager/Box
struct  Box_t3446180853  : public Il2CppObject
{
public:
	// System.Boolean BoardManager/Box::isWall
	bool ___isWall_0;
	// System.Boolean BoardManager/Box::isWall2
	bool ___isWall2_1;
	// System.Boolean BoardManager/Box::isPath
	bool ___isPath_2;
	// System.Boolean BoardManager/Box::isRightPath
	bool ___isRightPath_3;
	// System.Boolean BoardManager/Box::isEnd
	bool ___isEnd_4;
	// System.Boolean BoardManager/Box::isBegin
	bool ___isBegin_5;
	// System.String BoardManager/Box::tag
	String_t* ___tag_6;
	// System.Double BoardManager/Box::x
	double ___x_7;
	// System.Double BoardManager/Box::y
	double ___y_8;

public:
	inline static int32_t get_offset_of_isWall_0() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isWall_0)); }
	inline bool get_isWall_0() const { return ___isWall_0; }
	inline bool* get_address_of_isWall_0() { return &___isWall_0; }
	inline void set_isWall_0(bool value)
	{
		___isWall_0 = value;
	}

	inline static int32_t get_offset_of_isWall2_1() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isWall2_1)); }
	inline bool get_isWall2_1() const { return ___isWall2_1; }
	inline bool* get_address_of_isWall2_1() { return &___isWall2_1; }
	inline void set_isWall2_1(bool value)
	{
		___isWall2_1 = value;
	}

	inline static int32_t get_offset_of_isPath_2() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isPath_2)); }
	inline bool get_isPath_2() const { return ___isPath_2; }
	inline bool* get_address_of_isPath_2() { return &___isPath_2; }
	inline void set_isPath_2(bool value)
	{
		___isPath_2 = value;
	}

	inline static int32_t get_offset_of_isRightPath_3() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isRightPath_3)); }
	inline bool get_isRightPath_3() const { return ___isRightPath_3; }
	inline bool* get_address_of_isRightPath_3() { return &___isRightPath_3; }
	inline void set_isRightPath_3(bool value)
	{
		___isRightPath_3 = value;
	}

	inline static int32_t get_offset_of_isEnd_4() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isEnd_4)); }
	inline bool get_isEnd_4() const { return ___isEnd_4; }
	inline bool* get_address_of_isEnd_4() { return &___isEnd_4; }
	inline void set_isEnd_4(bool value)
	{
		___isEnd_4 = value;
	}

	inline static int32_t get_offset_of_isBegin_5() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___isBegin_5)); }
	inline bool get_isBegin_5() const { return ___isBegin_5; }
	inline bool* get_address_of_isBegin_5() { return &___isBegin_5; }
	inline void set_isBegin_5(bool value)
	{
		___isBegin_5 = value;
	}

	inline static int32_t get_offset_of_tag_6() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___tag_6)); }
	inline String_t* get_tag_6() const { return ___tag_6; }
	inline String_t** get_address_of_tag_6() { return &___tag_6; }
	inline void set_tag_6(String_t* value)
	{
		___tag_6 = value;
		Il2CppCodeGenWriteBarrier(&___tag_6, value);
	}

	inline static int32_t get_offset_of_x_7() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___x_7)); }
	inline double get_x_7() const { return ___x_7; }
	inline double* get_address_of_x_7() { return &___x_7; }
	inline void set_x_7(double value)
	{
		___x_7 = value;
	}

	inline static int32_t get_offset_of_y_8() { return static_cast<int32_t>(offsetof(Box_t3446180853, ___y_8)); }
	inline double get_y_8() const { return ___y_8; }
	inline double* get_address_of_y_8() { return &___y_8; }
	inline void set_y_8(double value)
	{
		___y_8 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
