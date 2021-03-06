/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

#ifndef HKV_TAGFILE_TRANSFORMATION_RULE_HPP_INCLUDED
#define HKV_TAGFILE_TRANSFORMATION_RULE_HPP_INCLUDED

#include <Vision/Editor/vForge/AssetManagement/AssetFramework/Base/hkvBase.hpp>
#include <Vision/Editor/vForge/AssetManagement/VisionAssets/TransformationRules/hkvFilterManagerTransformationRule.hpp>
#include <Vision/Editor/vForge/AssetManagement/VisionAssets/Assets/hkvFilterManagerTransformableAsset.hpp>
#include <Vision/Editor/vForge/AssetManagement/AssetFramework/Transformation/hkvFileTransformationStep.hpp>

class hkvProcessRunner;
struct hkvTransformationInput;
struct hkvTransformationOutput;

class hkvTagfileTransformationRule : public hkvFilterManagerTransformationRule
{
public:
  HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_TOOLS);

public: // static functions
  static void staticInit();
  static void staticDeInit();
  static hkvTransformationRule* createTransformationRule(hkvTargetPlatform targetPlatform);

public:
  hkvTagfileTransformationRule (hkvTargetPlatform platform);
  ~hkvTagfileTransformationRule();

public: // Interface
  virtual void getProperties(hkvPropertyList& properties, hkvProperty::Purpose purpose) const HKV_OVERRIDE;
  virtual void setProperty(const hkvProperty& prop, const hkArray<hkStringPtr>& path, unsigned int iStackIndex, hkvProperty::Purpose purpose) HKV_OVERRIDE;

  virtual hkUint32 getTypeIndex() const HKV_OVERRIDE;
  virtual const char* getTypeName() const HKV_OVERRIDE;

  virtual bool assetNeedsTransformation(const hkvAsset& asset) const HKV_OVERRIDE;
  virtual bool executeTransformation(const hkvTransformationInput& input, hkvTransformationOutput& output) const HKV_OVERRIDE;

private:
  static hkUint32 s_ruleTypeIndex;
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
