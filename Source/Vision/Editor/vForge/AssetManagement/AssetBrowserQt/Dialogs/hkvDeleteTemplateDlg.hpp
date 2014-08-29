/*
 *
 * Confidential Information of Telekinesys Research Limited (t/a Havok). Not for disclosure or distribution without Havok's
 * prior written consent. This software contains code, techniques and know-how which is confidential and proprietary to Havok.
 * Product and Trade Secret source code contains trade secrets of Havok. Havok Software (C) Copyright 1999-2014 Telekinesys Research Limited t/a Havok. All Rights Reserved. Use of this software is subject to the terms of an end user license agreement.
 *
 */

/// \file hkvDeleteTemplateDlg.hpp

#ifndef HKVDELETETEMPLATEDLG_HPP_INCLUDED
#define HKVDELETETEMPLATEDLG_HPP_INCLUDED

#include <Vision/Editor/vForge/AssetManagement/AssetBrowserQt/AssetBrowserQtPCH.h> 

ANALYSIS_IGNORE_ALL_START
#include <QDialog>
#include <QDialogButtonBox>
#include <Vision/Editor/vForge/AssetManagement/AssetBrowserQt/GeneratedFiles/ui_hkvDeleteTemplateDlg.h>
ANALYSIS_IGNORE_ALL_END

/// \brief
///   Dialog to select which transformation template should replace the deleted one.
class hkvDeleteTemplateDlg : public QWidget, public Ui_hkvDeleteTemplateDlg
{
  Q_OBJECT
public:
  ASSETBROWSER_IMPEXP hkvDeleteTemplateDlg (QWidget* pParent, const char* szAssetType, hkUint32 iToBeDeletedTemplateIndex);

  ASSETBROWSER_IMPEXP hkUint32 GetReplacementTemplate() const { return m_uiReplacementTemplate; }

public slots:
  void OnDialogButtonClicked(QDialogButtonBox::StandardButton button);
  void OnWidgetEmbedded(QWidget* widget);

signals:
  void AvailableButtonsChanged(QDialogButtonBox::StandardButtons buttons);
  void ButtonStateChanged(QDialogButtonBox::StandardButton button, bool enabled, QString text);
  void RequestDialogClose(int returnCode);

private:
  void SetupUI();
  void UpdateReplacementTemplateComboBox(const char* szAssetType, hkUint32 iToBeDeletedTemplateIndex);

private:
  hkUint32 m_uiReplacementTemplate;
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
