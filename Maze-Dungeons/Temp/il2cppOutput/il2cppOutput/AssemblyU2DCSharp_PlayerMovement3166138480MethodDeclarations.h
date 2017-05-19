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

// PlayerMovement
struct PlayerMovement_t3166138480;
// UnityEngine.Collision2D
struct Collision2D_t1539500754;
// UnityEngine.Collider2D
struct Collider2D_t646061738;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Collision2D1539500754.h"
#include "UnityEngine_UnityEngine_Collider2D646061738.h"

// System.Void PlayerMovement::.ctor()
extern "C"  void PlayerMovement__ctor_m767722651 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::Start()
extern "C"  void PlayerMovement_Start_m727481071 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::Move(UnityEngine.Vector2)
extern "C"  void PlayerMovement_Move_m2168821238 (PlayerMovement_t3166138480 * __this, Vector2_t2243707579  ___v0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::Update()
extern "C"  void PlayerMovement_Update_m524456402 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::OnCollisionEnter2D(UnityEngine.Collision2D)
extern "C"  void PlayerMovement_OnCollisionEnter2D_m1262355273 (PlayerMovement_t3166138480 * __this, Collision2D_t1539500754 * ___collisionInfo0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::OnTriggerEnter2D(UnityEngine.Collider2D)
extern "C"  void PlayerMovement_OnTriggerEnter2D_m309761527 (PlayerMovement_t3166138480 * __this, Collider2D_t646061738 * ___collider0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::checkAttack()
extern "C"  void PlayerMovement_checkAttack_m3834611645 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::setAttackAnimation(System.Boolean)
extern "C"  void PlayerMovement_setAttackAnimation_m1958227696 (PlayerMovement_t3166138480 * __this, bool ___isAttacking0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PlayerMovement::PerformOneAttack()
extern "C"  void PlayerMovement_PerformOneAttack_m605966644 (PlayerMovement_t3166138480 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
