// 这段 MFC 示例源代码演示如何使用 MFC Microsoft Office Fluent 用户界面 
// ("Fluent UI")，该示例仅作为参考资料提供， 
// 用以补充《Microsoft 基础类参考》和 
// MFC C++ 库软件随附的相关电子文档。
// 复制、使用或分发 Fluent UI 的许可条款是单独提供的。
// 若要了解有关 Fluent UI 许可计划的详细信息，请访问  
// http://msdn.microsoft.com/officeui。
//
// 版权所有 (C) Microsoft Corporation
// 保留所有权利。

#pragma once

class CPropertiesToolBar : public CMFCToolBar
{
public:
    virtual VOID OnUpdateCmdUI(CFrameWnd* /*pTarget*/, BOOL bDisableIfNoHndler)
    {
        CMFCToolBar::OnUpdateCmdUI((CFrameWnd*) GetOwner(), bDisableIfNoHndler);
    }

    virtual BOOL AllowShowOnList() CONST { return FALSE; }
};

class CPropertiesWnd : public CDockablePane
{
// 构造
public:
    CPropertiesWnd();

    VOID AdjustLayout();

// 属性
public:
    VOID SetVSDotNetLook(BOOL bSet)
    {
        m_wndPropList.SetVSDotNetLook(bSet);
        m_wndPropList.SetGroupNameFullWidth(bSet);
    }

protected:
    CFont m_fntPropList;
    CComboBox m_wndObjectCombo;
    CPropertiesToolBar m_wndToolBar;
    CMFCPropertyGridCtrl m_wndPropList;

// 实现
public:
    virtual ~CPropertiesWnd();

protected:
    afx_msg INT OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg VOID OnSize(UINT nType, INT cx, INT cy);
    afx_msg VOID OnExpandAllProperties();
    afx_msg VOID OnUpdateExpandAllProperties(CCmdUI* pCmdUI);
    afx_msg VOID OnSortProperties();
    afx_msg VOID OnUpdateSortProperties(CCmdUI* pCmdUI);
    afx_msg VOID OnProperties1();
    afx_msg VOID OnUpdateProperties1(CCmdUI* pCmdUI);
    afx_msg VOID OnProperties2();
    afx_msg VOID OnUpdateProperties2(CCmdUI* pCmdUI);
    afx_msg VOID OnSetFocus(CWnd* pOldWnd);
    afx_msg VOID OnSettingChange(UINT uFlags, LPCTSTR lpszSection);

    DECLARE_MESSAGE_MAP()

    VOID InitPropList();
    VOID SetPropListFont();
};

