/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef V_CHARACTER_STATE_CLIMBING_H
#define V_CHARACTER_STATE_CLIMBING_H

#include <Physics2012/Utilities/CharacterControl/StateMachine/Climbing/hkpCharacterStateClimbing.h>

/// \brief
///   A state to represent a character climbing. 
class vCharacterStateClimbing : public hkpCharacterStateClimbing
{
  public:
  HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    vCharacterStateClimbing();

  virtual void change(hkpCharacterContext& context, const hkpCharacterInput& input, hkpCharacterOutput& output);
};

#endif // V_CHARACTER_STATE_CLIMBING_H

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
