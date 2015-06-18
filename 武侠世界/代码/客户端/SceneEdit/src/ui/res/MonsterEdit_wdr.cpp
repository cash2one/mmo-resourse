//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: MonsterEdit.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "MonsterEdit_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "MonsterEdit_wdr.h"

#include <wx/intl.h>

// Euro sign hack of the year
#if wxUSE_UNICODE
    #define __WDR_EURO__ wxT("\u20ac")
#else
    #if defined(__WXMAC__)
        #define __WDR_EURO__ wxT("\xdb")
    #elif defined(__WXMSW__)
        #define __WDR_EURO__ wxT("\x80")
    #else
        #define __WDR_EURO__ wxT("\xa4")
    #endif
#endif

// Implement window functions

wxSizer *MonsterEditDlg( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxBoxSizer *item0 = new wxBoxSizer( wxVERTICAL );

    wxListCtrl *item1 = new wxListCtrl( parent, ID_LISTCTRL_MOSTER_EDIT, wxDefaultPosition, wxSize(280,120), wxLC_REPORT|wxLC_SINGLE_SEL|wxSUNKEN_BORDER );
    item0->Add( item1, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxLEFT|wxRIGHT, 0 );

    wxFlexGridSizer *item2 = new wxFlexGridSizer( 2, 0, 0 );

    wxStaticBox *item4 = new wxStaticBox( parent, -1, /*_("Monster-info")*/_("怪物信息") );
    wxStaticBoxSizer *item3 = new wxStaticBoxSizer( item4, wxVERTICAL );

    wxBoxSizer *item5 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item6 = new wxStaticText( parent, ID_TEXT, /*_("typename ")*/_("类型名 "), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item5->Add( item6, 0, wxALIGN_CENTER_HORIZONTAL|wxALL, 5 );

    wxTextCtrl *item7 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_NAME, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    item5->Add( item7, 0, wxALIGN_CENTER|wxALL, 0 );

    wxStaticText *item8 = new wxStaticText( parent, ID_TEXT, /*_("grade ")*/_("等级 "), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item5->Add( item8, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item9 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_LEVEL, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
    item5->Add( item9, 0, wxALIGN_CENTER|wxLEFT, 0 );

    item3->Add( item5, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item10 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item11 = new wxStaticText( parent, ID_TEXT, /*_("move_speed ")*/_("移动速度 "), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item10->Add( item11, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item12 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_MOVE_SPEED, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    item10->Add( item12, 0, wxALIGN_CENTER|wxALL, 0 );

    wxStaticText *item13 = new wxStaticText( parent, ID_TEXT, /*_("experience ")*/_("经验 "), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item10->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item14 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_EXP, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    item10->Add( item14, 0, wxALIGN_CENTER|wxLEFT, 0 );

    item3->Add( item10, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item15 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item16 = new wxStaticText( parent, ID_TEXT, _("复活时间"), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item15->Add( item16, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item17 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_REFRESH_TIME, wxT(""), wxDefaultPosition, wxDefaultSize, 0 );
    item15->Add( item17, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item18 = new wxStaticText( parent, ID_TEXT, /*_("radius ")*/_("范围 "), wxDefaultPosition, wxDefaultSize, wxALIGN_RIGHT );
    item15->Add( item18, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item19 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_MVOE_RADIUS, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_READONLY );
    item15->Add( item19, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item15, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 0 );

    wxBoxSizer *item20 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item21 = new wxStaticText( parent, ID_TEXT, /*_("camp_ID ")*/_("阵营ID "), wxDefaultPosition, wxSize(-1,20), wxALIGN_RIGHT );
    item20->Add( item21, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item22 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_CAMP_ID, wxT(""), wxDefaultPosition, wxDefaultSize, wxTE_PROCESS_ENTER );
    item20->Add( item22, 0, wxALIGN_CENTER|wxALL, 0 );

    wxStaticText *item23 = new wxStaticText( parent, ID_TEXT, /*_("ReputationID")*/_("名誉ID"), wxDefaultPosition, wxDefaultSize, 0 );
    item20->Add( item23, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item24 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_REPUTATION_ID, _("-1"), wxDefaultPosition, wxSize(80,-1), wxTE_PROCESS_ENTER );
    item20->Add( item24, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item20, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxFlexGridSizer *item25 = new wxFlexGridSizer( 2, 0, 0 );

    wxStaticLine *item26 = new wxStaticLine( parent, ID_LINE, wxDefaultPosition, wxSize(340,-1), wxLI_HORIZONTAL );
    item25->Add( item26, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxTOP|wxBOTTOM, 5 );

    item3->Add( item25, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 30 );

    wxBoxSizer *item27 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item28 = new wxStaticText( parent, ID_TEXT, /*_("baseAI_ID ")*/_("基础AI类型"), wxDefaultPosition, wxDefaultSize, 0 );
    item27->Add( item28, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs29 = (wxString*) NULL;
    wxChoice *item29 = new wxChoice( parent, ID_CHOICE_BASE_AI, wxDefaultPosition, wxSize(500,-1), 0, strs29, 0 );
    item27->Add( item29, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item30 = new wxTextCtrl( parent, ID_TEXTCTRL_MONSTER_BASE_AI_ID, wxT(""), wxDefaultPosition, wxSize(10,-1), wxTE_READONLY );
    item27->Add( item30, 0, wxALIGN_CENTER, 15 );

    item3->Add( item27, 0, wxALIGN_CENTER_VERTICAL|wxALL, 0 );

    wxBoxSizer *item31 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item32 = new wxStaticText( parent, ID_TEXT, /*_("AI_file")*/_("AI文件"), wxDefaultPosition, wxDefaultSize, 0 );
    item31->Add( item32, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs33 = (wxString*) NULL;
    wxChoice *item33 = new wxChoice( parent, ID_CHOICE_AI_FILE, wxDefaultPosition, wxSize(270,-1), 0, strs33, 0 );
    item31->Add( item33, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item34 = new wxTextCtrl( parent, ID_TEXTCTRL_AI_FILE, wxT(""), wxDefaultPosition, wxSize(10,-1), 0 );
    item31->Add( item34, 0, wxALIGN_CENTER|wxLEFT, 5 );

    item3->Add( item31, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 5 );

    wxBoxSizer *item35 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item36 = new wxStaticText( parent, ID_TEXT, /*_("even_file")*/_("脚本文件"), wxDefaultPosition, wxDefaultSize, 0 );
    item35->Add( item36, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs37 = (wxString*) NULL;
    wxComboBox *item37 = new wxComboBox( parent, ID_COMBO_EVEN_FILE, wxT(""), wxDefaultPosition, wxSize(500,-1), 0, strs37, wxCB_DROPDOWN );
    item35->Add( item37, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item38 = new wxTextCtrl( parent, ID_TEXTCTRL_EVEN_FILE, wxT(""), wxDefaultPosition, wxSize(10,-1), 0 );
    item35->Add( item38, 0, wxALIGN_CENTER|wxLEFT, 5 );

    item3->Add( item35, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 5 );

    wxBoxSizer *item39 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item40 = new wxStaticText( parent, ID_TEXT, /*_("group_ID")*/_("群ID"), wxDefaultPosition, wxDefaultSize, 0 );
    item39->Add( item40, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item41 = new wxTextCtrl( parent, ID_TEXTCTRL_GROUP_ID, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item39->Add( item41, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item42 = new wxStaticText( parent, ID_TEXT, /*_("team_ID  ")*/_("队伍ID"), wxDefaultPosition, wxDefaultSize, 0 );
    item39->Add( item42, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item43 = new wxTextCtrl( parent, ID_TEXTCTRL_TEAM_ID, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item39->Add( item43, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item39, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 5 );

    wxBoxSizer *item44 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item45 = new wxStaticText( parent, ID_TEXT_INSTANCE_NAME, _("instance_name"), wxDefaultPosition, wxDefaultSize, 0 );
    item44->Add( item45, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item46 = new wxTextCtrl( parent, ID_TEXTCTRL_INSTANCE_NAME, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item44->Add( item46, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item47 = new wxStaticText( parent, ID_TEXT_GUID, _("GUID"), wxDefaultPosition, wxDefaultSize, 0 );
    item44->Add( item47, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item48 = new wxTextCtrl( parent, ID_TEXTCTRL_GUID, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item44->Add( item48, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item44, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxBOTTOM, 0 );

    wxBoxSizer *item49 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item50 = new wxButton( parent, ID_BUTTON_DIR_DEC, _("<-"), wxDefaultPosition, wxSize(40,20), 0 );
    item49->Add( item50, 0, wxALIGN_CENTER|wxALL, 0 );

    wxButton *item51 = new wxButton( parent, ID_BUTTON_DIR_INC, _("->"), wxDefaultPosition, wxSize(40,20), 0 );
    item49->Add( item51, 0, wxALIGN_CENTER, 5 );

    wxStaticText *item52 = new wxStaticText( parent, ID_TEXT, _("direction"), wxDefaultPosition, wxDefaultSize, 0 );
    item49->Add( item52, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item53 = new wxTextCtrl( parent, ID_TEXTCTRL_DIRECT, wxT(""), wxDefaultPosition, wxSize(80,-1), wxTE_READONLY );
    item49->Add( item53, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item49, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 5 );

    wxBoxSizer *item54 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item55 = new wxStaticText( parent, ID_TEXT_PATROL, /*_("PATROL")*/_("巡逻"), wxDefaultPosition, wxDefaultSize, 0 );
    item54->Add( item55, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item56 = new wxTextCtrl( parent, ID_TEXTCTRL_PATROL, wxT(""), wxDefaultPosition, wxSize(80,-1), 0 );
    item54->Add( item56, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item54, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 0 );

    wxBoxSizer *item57 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item58 = new wxStaticText( parent, ID_TEXT_MONSTER_EDIT_TITLE, /*_("TITLE")*/_("头衔"), wxDefaultPosition, wxDefaultSize, 0 );
    item57->Add( item58, 0, wxALIGN_CENTER|wxALL, 5 );

    wxTextCtrl *item59 = new wxTextCtrl( parent, ID_TEXTCTRL_TITLE, wxT(""), wxDefaultPosition, wxSize(210,-1), 0 );
    item57->Add( item59, 0, wxALIGN_CENTER|wxALL, 5 );

	item3->Add( item57, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 0 );

	wxBoxSizer *item80 = new wxBoxSizer( wxHORIZONTAL );

	wxStaticText *item81 = new wxStaticText( parent, ID_TEXT, _("选择类型"), wxDefaultPosition, wxDefaultSize, 0 );
	item80->Add( item81, 0, wxALIGN_CENTER|wxALL, 5 );

	wxString *strs80 = (wxString*) NULL;
	wxChoice *item82 = new wxChoice( parent, ID_CHOICE_TYPE, wxDefaultPosition, wxSize(150,-1), 0, strs80, 0 );
	item80->Add( item82, 0, wxALIGN_CENTER|wxALL, 5 );

	item3->Add( item80, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 0 );

    wxBoxSizer *item61 = new wxBoxSizer( wxVERTICAL );

    wxTreeCtrl *item62 = new wxTreeCtrl( parent, ID_TREECTRL_ADDED_MONSTER, wxDefaultPosition, wxSize(280,110), wxTR_HAS_BUTTONS|wxTR_LINES_AT_ROOT|wxSUNKEN_BORDER );
    item61->Add( item62, 0, wxGROW|wxALIGN_CENTER_VERTICAL, 5 );

    item3->Add( item61, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 0 );

    //wxBoxSizer *item63 = new wxBoxSizer( wxVERTICAL );

    //wxStaticLine *item64 = new wxStaticLine( parent, ID_LINE, wxDefaultPosition, wxSize(230,-1), wxLI_HORIZONTAL );
    //item63->Add( item64, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    //item3->Add( item63, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item65 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item66 = new wxStaticText( parent, ID_TEXT_SHOP1, /*_("SHOP1:")*/_("店铺1:"), wxDefaultPosition, wxDefaultSize, 0 );
    item65->Add( item66, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs67 = (wxString*) NULL;
    wxChoice *item67 = new wxChoice( parent, ID_CHOICE_SHOP1, wxDefaultPosition, wxSize(100,-1), 0, strs67, 0 );
    item65->Add( item67, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item68 = new wxStaticText( parent, ID_TEXT_SHOP2, /*_("SHOP2:")*/_("店铺2:"), wxDefaultPosition, wxDefaultSize, 0 );
    item65->Add( item68, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs69 = (wxString*) NULL;
    wxChoice *item69 = new wxChoice( parent, ID_CHOICE_SHOP2, wxDefaultPosition, wxSize(100,-1), 0, strs69, 0 );
    item65->Add( item69, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item65, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item70 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item71 = new wxStaticText( parent, ID_TEXT_SHOP3, /*_("SHOP3:")*/_("店铺3:"), wxDefaultPosition, wxDefaultSize, 0 );
    item70->Add( item71, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs72 = (wxString*) NULL;
    wxChoice *item72 = new wxChoice( parent, ID_CHOICE_SHOP3, wxDefaultPosition, wxSize(100,-1), 0, strs72, 0 );
    item70->Add( item72, 0, wxALIGN_CENTER|wxALL, 5 );

    wxStaticText *item73 = new wxStaticText( parent, ID_TEXT_SHOP4, /*_("SHOP4:")*/_("店铺4:"), wxDefaultPosition, wxDefaultSize, 0 );
    item70->Add( item73, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString *strs74 = (wxString*) NULL;
    wxChoice *item74 = new wxChoice( parent, ID_CHOICE_SHOP4, wxDefaultPosition, wxSize(100,-1), 0, strs74, 0 );
    item70->Add( item74, 0, wxALIGN_CENTER|wxALL, 5 );

    item3->Add( item70, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxBoxSizer *item90 = new wxBoxSizer( wxHORIZONTAL );
	wxButton *item60 = new wxButton( parent, ID_BUTTON_MODIFY_MONSTER_INFO, /*_("modify")*/_("修改完成"), wxDefaultPosition, wxDefaultSize, 0 );
	item90->Add( item60, 0, wxALIGN_CENTER|wxALL, 5 );

	item3->Add( item90, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	item2->Add( item3, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxRIGHT, 10 );

	item0->Add( item2, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 0 );

	if (set_sizer)
    {
        parent->SetSizer( item0 );
        if (call_fit)
            item0->SetSizeHints( parent );
    }
    
    return item0;
}

// Implement menubar functions

// Implement toolbar functions

// Implement bitmap functions


// End of generated file
