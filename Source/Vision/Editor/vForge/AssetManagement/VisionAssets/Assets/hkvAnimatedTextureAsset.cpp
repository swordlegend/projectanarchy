/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */
#include <Vision/Editor/vForge/AssetManagement/VisionAssets/VisionAssetsPCH.h>
#include <Vision/Editor/vForge/AssetManagement/VisionAssets/Assets/hkvAnimatedTextureAsset.hpp>
#include <Vision/Editor/vForge/AssetManagement/VisionAssets/hkvTextureDefinitions.hpp>
#include <Vision/Editor/vForge/AssetManagement/AssetFramework/hkvAssetManager.hpp>
#include <Vision/Editor/vForge/AssetManagement/AssetFramework/Assets/hkvAssetTypeManager.hpp>
#include <Vision/Editor/vForge/AssetManagement/AssetFramework/Profiles/hkvProfileManager.hpp>

#include <Vision/Runtime/Engine/System/Vision.hpp>
#include <Vision/Runtime/Engine/System/Resource/VisApiResource.hpp>

hkvAssetTypeInfo* hkvAnimatedTextureAsset::s_typeInfo = NULL;
const hkvAssetTypeInfoHandle* hkvAnimatedTextureAsset::s_typeInfoHandle = NULL;

/////////////////////////////////////////////////////////////////////////////
// hkvAnimatedTextureAsset static functions
/////////////////////////////////////////////////////////////////////////////

void hkvAnimatedTextureAsset::StaticInit()
{
  s_typeInfo = new hkvAssetTypeInfo();
  s_typeInfo->m_name = "Animated Texture";
  s_typeInfo->m_createFunc = &CreateAsset;
  s_typeInfo->m_supportedFileExtensions.pushBack("texanim");
  s_typeInfo->m_szTypeIconQt = ":/Icons/Icons/AnimatedTextureAsset.png";

  s_typeInfo->m_resourceManagerName = VIS_RESOURCEMANAGER_TEXTURES;
  s_typeInfo->m_useEngineForDependencies = true;
  s_typeInfo->m_useEngineForThumbnails = true;

  // register at the hkvAssetTypeManager and store the asset type handle in static variable.
  s_typeInfoHandle = hkvAssetTypeManager::getGlobalInstance()->addAssetType(*s_typeInfo);
}


void hkvAnimatedTextureAsset::StaticDeInit()
{
  // de-register at the hkvAssetTypeManager
  hkvAssetTypeManager::getGlobalInstance()->removeAssetType(*s_typeInfoHandle);
  s_typeInfoHandle = NULL;

  delete s_typeInfo;
  s_typeInfo = NULL;
}


hkvAsset* hkvAnimatedTextureAsset::CreateAsset()
{
  hkvAsset* pAsset = new hkvAnimatedTextureAsset;
  VASSERT(pAsset)

  return pAsset;
}



/////////////////////////////////////////////////////////////////////////////
// hkvTextureAssetType public functions
/////////////////////////////////////////////////////////////////////////////

hkvAnimatedTextureAsset::hkvAnimatedTextureAsset() : hkvAsset(s_typeInfo)
{

}


hkvAnimatedTextureAsset::~hkvAnimatedTextureAsset()
{

}


/////////////////////////////////////////////////////////////////////////////
// hkvTextureAssetType public override functions
/////////////////////////////////////////////////////////////////////////////

const hkvAssetTypeInfoHandle& hkvAnimatedTextureAsset::getTypeInfoHandle() const
{
  return *s_typeInfoHandle;
}


hkUint32 hkvAnimatedTextureAsset::getResourceSubtype() const
{
  return VTextureLoader::Texture2D;
}

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
