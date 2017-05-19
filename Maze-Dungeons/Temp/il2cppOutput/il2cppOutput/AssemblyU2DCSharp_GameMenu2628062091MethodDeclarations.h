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

// GameMenu
struct GameMenu_t2628062091;
// System.String
struct String_t;
// System.Collections.IEnumerator
struct IEnumerator_t1466026749;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String2029220233.h"

// System.Void GameMenu::.ctor()
extern "C"  void GameMenu__ctor_m2447242784 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// GameMenu GameMenu::GetInstance()
extern "C"  GameMenu_t2628062091 * GameMenu_GetInstance_m3147122755 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Pause()
extern "C"  void GameMenu_Pause_m3325419342 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Continue()
extern "C"  void GameMenu_Continue_m420714767 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Salir()
extern "C"  void GameMenu_Salir_m3459994231 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Restart()
extern "C"  void GameMenu_Restart_m3709942637 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Start()
extern "C"  void GameMenu_Start_m3202364972 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::Update()
extern "C"  void GameMenu_Update_m3495099087 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::menuFinPartida(System.String)
extern "C"  void GameMenu_menuFinPartida_m2517323537 (GameMenu_t2628062091 * __this, String_t* ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameMenu::guardar()
extern "C"  void GameMenu_guardar_m121425402 (GameMenu_t2628062091 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator GameMenu::PostScores(System.String,System.String)
extern "C"  Il2CppObject * GameMenu_PostScores_m2095415139 (GameMenu_t2628062091 * __this, String_t* ___name0, String_t* ___time1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
