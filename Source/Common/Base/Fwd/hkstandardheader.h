/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#ifndef HK_STANDARD_HEADER
	// Some compiler vendors do not ship the c++ standard headers
	// but do ship the c ones. We cannot use the c versions in
	// all cases however since they are not all compatible with c++.
#	if (defined(__GNUC__) && (__GNUC__ == 2) && (__GNUC_MINOR__ == 95)) || (defined(__MWERKS__) && (__MWERKS__ > 0x4200)) || defined(NN_COMPILER_RVCT)
		#ifdef NN_COMPILER_RVCT
			#pragma diag_suppress 2795
		#endif
#		define HK_STANDARD_HEADER(_i) <_i##.h>
#	else
#		define HK_STANDARD_HEADER(_i) <c##_i>
#	endif
	namespace std { }
#endif // HK_STANDARD_HEADER

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
