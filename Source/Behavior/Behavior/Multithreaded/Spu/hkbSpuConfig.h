/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKB_SPU_CONFIG_H
#define HKB_SPU_CONFIG_H

// You need to define at least one of the animation types.
#define HK_USE_INTERLEAVED_ANIMATION
//#define HK_USE_QUANTIZED_COMPRESSED_ANIMATION
//#define HK_USE_PREDICTIVE_COMPRESSED_ANIMATION
#define HK_USE_SPLINE_COMPRESSED_ANIMATION

// You can optionally comment out these lines to disable functionality that is not being used in the game
#define HK_USE_MIRRORED_ANIMATION
#define HK_USE_REFERENCE_POSE_ANIMATION
#define HK_USE_MIRROR_MODIFIER
#define HK_USE_LAYER_GENERATOR
#define HK_USE_ANIMATION_RETARGETING
//#define HK_USE_DEPRECATED_MODIFIERS

#if defined(HK_USE_INTERLEAVED_ANIMATION)
	
	#define HK_INTERLEAVED_ANIMATION_BUFFER_SIZE 2
#else
	#define HK_INTERLEAVED_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_QUANTIZED_COMPRESSED_ANIMATION)
	
	#define HK_QUANTIZED_COMPRESSED_ANIMATION_BUFFER_SIZE 14
#else
	#define HK_QUANTIZED_COMPRESSED_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_PREDICTIVE_COMPRESSED_ANIMATION)
	
	#define HK_PREDICTIVE_COMPRESSED_ANIMATION_BUFFER_SIZE 18
#else
	#define HK_PREDICTIVE_COMPRESSED_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_SPLINE_COMPRESSED_ANIMATION)
	
	#define HK_SPLINE_COMPRESSED_ANIMATION_BUFFER_SIZE 10
#else
	#define HK_SPLINE_COMPRESSED_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_MIRRORED_ANIMATION)
	
	#define HK_MIRRORED_ANIMATION_BUFFER_SIZE 3
#else
	#define HK_MIRRORED_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_REFERENCE_POSE_ANIMATION)
	
	#define HK_REFERENCE_POSE_ANIMATION_BUFFER_SIZE 1
#else
	#define HK_REFERENCE_POSE_ANIMATION_BUFFER_SIZE 0
#endif

#if defined(HK_USE_MIRROR_MODIFIER)
	
	#define HK_MIRROR_MODIFIER_BUFFER_SIZE 6
#else 
	#define HK_MIRROR_MODIFIER_BUFFER_SIZE 0
#endif

#if defined(HK_USE_LAYER_GENERATOR)
	
	#define HK_LAYER_GENERATOR_BUFFER_SIZE 14
#else 
	#define HK_LAYER_GENERATOR_BUFFER_SIZE 0
#endif

#if defined(HK_USE_ANIMATION_RETARGETING)
	
	#define HK_ANIMATION_RETARGETING_BUFFER_SIZE 15
#else
	#define HK_ANIMATION_RETARGETING_BUFFER_SIZE 0
#endif

#if defined(HK_USE_DEPRECATED_MODIFIERS)
	
	#define HK_DEPRECATED_MODIFIERS_BUFFER_SIZE 5
#else 
	#define HK_DEPRECATED_MODIFIERS_BUFFER_SIZE 0
#endif

// This is the largest value such that .text_init will start at an address nearest to 257024 or 0x3EC00 w/o going over
// when *no* features are being used (see HK_SPU_TOTAL_BEHAVIOR_BUFFER_SIZE comments below).  Because we always round up
// in our calculations for individual features, this will mean that when all features are enabled, .text_init will likely
// be noticeably lower than 0x3EC00. This can cause more work to be pushed to the PPU in some cases.

#define HKB_NO_FEATURES_BUFFER_SIZE 110

/// The Havok SPU stack is initialized with this amount of memory, and the partitioning algorithm knows that
/// this is how much memory is available.  Behavior currently requires a program stack of about 4K.  For good
/// measure we give it 5K.  So we need to set HK_SPU_TOTAL_BEHAVIOR_BUFFER_SIZE such that the .text_init
/// section of the elf starts at no more than 256k - 5k = 257024.  This uses up as much memory as possible while
/// allowing 5K for the program stack (the allowance for the program stack is whatever memory is not
/// explicitly laid out in the elf).
/// Note: Elfs are compiled with -O3 which allows inlining. As such the differences between release and debug are minimal and
///       not captured in these calculations. Some clients *may* see improvements in overall performance by adjusting these
///       numbers in release with -O2 or -Os, to put more work on the SPUs. Advanced use only!
#define HK_SPU_TOTAL_BEHAVIOR_BUFFER_SIZE ( HKB_NO_FEATURES_BUFFER_SIZE - HK_INTERLEAVED_ANIMATION_BUFFER_SIZE - HK_QUANTIZED_COMPRESSED_ANIMATION_BUFFER_SIZE - HK_PREDICTIVE_COMPRESSED_ANIMATION_BUFFER_SIZE - HK_SPLINE_COMPRESSED_ANIMATION_BUFFER_SIZE - HK_MIRRORED_ANIMATION_BUFFER_SIZE - HK_REFERENCE_POSE_ANIMATION_BUFFER_SIZE - HK_MIRROR_MODIFIER_BUFFER_SIZE - HK_LAYER_GENERATOR_BUFFER_SIZE - HK_ANIMATION_RETARGETING_BUFFER_SIZE - HK_DEPRECATED_MODIFIERS_BUFFER_SIZE ) * 1024







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
