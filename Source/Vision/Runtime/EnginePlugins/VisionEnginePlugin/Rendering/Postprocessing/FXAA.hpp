/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

/// \file FXAA.hpp

#ifndef FXAA_HPP_INCLUDED
#define FXAA_HPP_INCLUDED

#include <Vision/Runtime/EnginePlugins/VisionEnginePlugin/Rendering/Postprocessing/PostProcessBase.hpp>


/// \brief
///   FXAA postprocessor
/// 
class VPostProcessFXAA : public VPostProcessingBaseComponent
{
public:
  /// \brief
  ///   Quality level
  ///
  enum QualityLevel
  {
    QL_Off,
    QL_MediumDither_0,
    QL_MediumDither_1,
    QL_MediumDither_2,
    QL_MediumDither_3,
    QL_MediumDither_4,
    QL_MediumDither_5,
    QL_LowDither_0,
    QL_LowDither_1,
    QL_LowDither_2,
    QL_LowDither_3,
    QL_LowDither_4,
    QL_LowDither_5,
    QL_LowDither_6,
    QL_LowDither_7,
    QL_LowDither_8,
    QL_LowDither_9,
    QL_Extreme
  };

  /// \brief
  ///   Constructor of the FXAA postprocessor.
  EFFECTS_IMPEXP VPostProcessFXAA();

  /// \brief
  ///   Destructor of the FXAA postprocessor.
  EFFECTS_IMPEXP ~VPostProcessFXAA();

  /// \brief
  ///   Internal function to set up the required target render context
  EFFECTS_IMPEXP void SetupContext();

  /// \brief
  ///   Internal function to tear down the required target render context
  EFFECTS_IMPEXP void RemoveContext();

#ifndef _VISION_DOC
  V_DECLARE_SERIAL_DLLEXP( VPostProcessFXAA,  EFFECTS_IMPEXP );
  V_DECLARE_VARTABLE(VPostProcessFXAA, EFFECTS_IMPEXP);
  EFFECTS_IMPEXP virtual void Serialize( VArchive &ar ) HKV_OVERRIDE;
#endif

  QualityLevel Quality;

protected:
  EFFECTS_IMPEXP virtual void InitializePostProcessor() HKV_OVERRIDE;
  EFFECTS_IMPEXP virtual void DeInitializePostProcessor() HKV_OVERRIDE;
  EFFECTS_IMPEXP virtual void Execute() HKV_OVERRIDE;
  EFFECTS_IMPEXP bool IsLastComponent();

  int m_iWidth, m_iHeight;
  int m_iRegScreenSize;
  VCompiledTechniquePtr m_spCopyTechnique;
  VisScreenMaskPtr m_spMask;
  VisScreenMaskCollection_cl tempMasks;
  VTextureObjectPtr m_spFrameCopyTexture;
};



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