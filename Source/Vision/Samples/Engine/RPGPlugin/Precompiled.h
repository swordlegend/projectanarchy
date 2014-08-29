/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef RPG_PLUGIN_PRECOMPILED_H__
#define RPG_PLUGIN_PRECOMPILED_H__

// Vision
#include <Vision/Runtime/Engine/System/Vision.hpp>

#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Scene/VPrefab.hpp>
#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Rendering/Effects/VWallmarkManager.hpp>
#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Particles/ParticleGroupManager.hpp>

// Vision GUI
#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/GUI/VMenuIncludes.hpp>

// Havok AI
#include <Vision/Runtime/EnginePlugins/Havok/HavokAiEnginePlugin/vHavokAiModule.hpp>

// Havok Behavior
#include <Vision/Runtime/EnginePlugins/Havok/HavokBehaviorEnginePlugin/vHavokBehaviorModule.hpp>

// Havok Physics
#include <Vision/Runtime/EnginePlugins/Havok/HavokPhysicsEnginePlugin/vHavokPhysicsModule.hpp>

// Havok AI
#include <Ai/Pathfinding/World/hkaiWorld.h>
#include <Ai/Pathfinding/Character/hkaiCharacter.h>
#include <Ai/Pathfinding/Character/Behavior/hkaiPathFollowingBehavior.h>
#include <Ai/Physics2012Bridge/LocalSteering/hkaiPhysics2012BodyObstacleGenerator.h>

// Havok Behavior
#include <Behavior/Behavior/Character/hkbCharacter.h>
#include <Behavior/Behavior/Character/hkbCharacterData.h>

// RPG Plugin
#define RPG_SERIALIZATION_SCRIPT_PROPERTIES 1
#define RPG_USE_EXPLOSIONS 1
#define RPG_SCREENSHOT_NODEBUGTEXT 1
#define RPG_FMOD_SUPPRESS_NONNULL_ASSERTS 1

#if !defined (RPG_DUMP_CRT_OBJECTS_ON_EXIT)
# define RPG_DUMP_CRT_OBJECTS_ON_EXIT 0
#endif

#if !defined (RPG_UI_SCALEFORM)
# define RPG_UI_SCALEFORM 0
#endif

#if !defined (HAVOK_FORCE_SINGLETHREADED)
# define HAVOK_FORCE_SINGLETHREADED 0
#endif

#if !defined (HAVOK_VISION_RESTRUCTURING)
# define HAVOK_VISION_RESTRUCTURING 0
#endif

#include <Vision/Samples/Engine/RPGPlugin/Plugin.h>

#endif

/*
 * Havok SDK - Base file, BUILD(#20140618)
 * 
 * Confidential Information of Havok.  (C) Copyright 1999-2014
 * Telekinesys Research Limited t/a Havok. All Rights Reserved. The Havok
 * Logo, and the Havok buzzsaw logo are trademarks of Havok.  Title, ownership
 * rights, and intellectual property rights in the Havok software remain in
 * Havok and/or its suppliers.
 * 
 * Use of this software for evaluation purposes is subject to and indicates
 * acceptance of the End User licence Agreement for this product. A copy of
 * the license is included with this software and is also available from salesteam@havok.com.
 * 
 */
