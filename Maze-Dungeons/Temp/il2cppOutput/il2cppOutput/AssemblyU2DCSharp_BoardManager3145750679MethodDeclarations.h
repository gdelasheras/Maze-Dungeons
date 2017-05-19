#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// BoardManager
struct BoardManager_t3145750679;
// System.String
struct String_t;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void BoardManager::.ctor()
extern "C"  void BoardManager__ctor_m3403536070 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::ReplaceTags(System.String,System.String)
extern "C"  void BoardManager_ReplaceTags_m1509819467 (BoardManager_t3145750679 * __this, String_t* ___toBeReplaced0, String_t* ___toReplace1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::PrepareMazeMap()
extern "C"  void BoardManager_PrepareMazeMap_m1924782826 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::GeneratePaths()
extern "C"  void BoardManager_GeneratePaths_m1505832731 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::GenerateWallUp()
extern "C"  void BoardManager_GenerateWallUp_m3433280218 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::PrintMaze()
extern "C"  void BoardManager_PrintMaze_m3638670670 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::PrintMinimap()
extern "C"  void BoardManager_PrintMinimap_m2944533690 (BoardManager_t3145750679 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::SetUpScene(System.Int32)
extern "C"  void BoardManager_SetUpScene_m2736717354 (BoardManager_t3145750679 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::PlaceBeepers(System.Int32)
extern "C"  void BoardManager_PlaceBeepers_m3341548844 (BoardManager_t3145750679 * __this, int32_t ___level0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::placeBeepers(System.Int32)
extern "C"  void BoardManager_placeBeepers_m2193260364 (BoardManager_t3145750679 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BoardManager::placeTimeLessBeepers(System.Int32)
extern "C"  void BoardManager_placeTimeLessBeepers_m4113064768 (BoardManager_t3145750679 * __this, int32_t ___number0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
