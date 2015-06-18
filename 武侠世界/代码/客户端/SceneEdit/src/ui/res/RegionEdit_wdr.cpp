//------------------------------------------------------------------------------
// Source code generated by wxDesigner from file: RegionEdit.wdr
// Do not modify this file, all changes will be lost!
//------------------------------------------------------------------------------

#if defined(__GNUG__) && !defined(NO_GCC_PRAGMA)
    #pragma implementation "RegionEdit_wdr.h"
#endif

// For compilers that support precompilation
#include "wx/wxprec.h"

#ifdef __BORLANDC__
    #pragma hdrstop
#endif

// Include private header
#include "RegionEdit_wdr.h"

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

wxSizer *EditRegion( wxWindow *parent, bool call_fit, bool set_sizer )
{
    wxBoxSizer *item0 = new wxBoxSizer( wxVERTICAL );

    wxStaticText *item1 = new wxStaticText( parent, ID_TEXT, /*_("Region")*/_("区域"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item1, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxString strs2[] = 
    {
        _("ListItem")
    };
    wxListBox *item2 = new wxListBox( parent, ID_LISTBOX_REGION, wxDefaultPosition, wxSize(220,100), 1, strs2, wxLB_SINGLE );
    item0->Add( item2, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxStaticText *item3 = new wxStaticText( parent, ID_TEXT, /*_("point")*/_("点"), wxDefaultPosition, wxDefaultSize, 0 );
    item0->Add( item3, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxString *strs4 = (wxString*) NULL;
    wxListBox *item4 = new wxListBox( parent, ID_LISTBOX_POINT, wxDefaultPosition, wxSize(220,100), 0, strs4, wxLB_SINGLE );
    item0->Add( item4, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item5 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item6 = new wxButton( parent, ID_BN_ADD_NEW_REGION, /*_("AddNewRegion")*/_("添加新的区域"), wxDefaultPosition, wxDefaultSize, 0 );
    item5->Add( item6, 0, wxALIGN_CENTER|wxALL, 0 );

    wxButton *item7 = new wxButton( parent, ID_BUTTON_DEL_REGION, /*_("DelRegion")*/_("删除区域"), wxDefaultPosition, wxDefaultSize, 0 );
    item5->Add( item7, 0, wxALIGN_CENTER|wxALL, 0 );

    item0->Add( item5, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxBoxSizer *item8 = new wxBoxSizer( wxHORIZONTAL );

    wxButton *item9 = new wxButton( parent, ID_BUTTON_REGION_OK, /*_("RegionOk")*/_("创建区域"), wxDefaultPosition, wxDefaultSize, 0 );
    item8->Add( item9, 0, wxALIGN_CENTER|wxALL, 0 );

    wxButton *item10 = new wxButton( parent, ID_BUTTON_DEL_POINT, /*_("DelPoint")*/_("删除点"), wxDefaultPosition, wxDefaultSize, 0 );
    item8->Add( item10, 0, wxALIGN_CENTER|wxALL, 0 );

    item0->Add( item8, 0, wxGROW|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

	wxStaticText *item12 = new wxStaticText( parent, ID_TEXT, _("通过区域飞行等级"), wxDefaultPosition, wxDefaultSize, 0 );
	item0->Add( item12, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxTextCtrl *item11 = new wxTextCtrl( parent, ID_CHK_FLYABLE, wxT("10"), wxDefaultPosition, wxSize(40,-1), wxTE_PROCESS_ENTER );
	
    item0->Add( item11, 0, wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    wxString *strs13 = (wxString*) NULL;
    wxListBox *item13 = new wxListBox( parent, ID_LISTBOX_Line, wxDefaultPosition, wxSize(220,100), 0, strs13, wxLB_SINGLE );
    item0->Add( item13, 0, wxALIGN_CENTER|wxALL, 5 );

    wxBoxSizer *item14 = new wxBoxSizer( wxHORIZONTAL );

    wxStaticText *item15 = new wxStaticText( parent, ID_TEXT, _("等级为\"1-10\""), wxDefaultPosition, wxDefaultSize, 0 );
    item14->Add( item15, 0, wxALIGN_CENTER|wxALL, 5 );

    wxString strs16[] = 
    {
        _("ChoiceItem")
    };
    wxChoice *item16 = new wxChoice( parent, ID_CHOICE_LINE_PROPERTY, wxDefaultPosition, wxSize(110,-1), 1, strs16, 0 );
    item14->Add( item16, 0, wxALIGN_RIGHT|wxALIGN_CENTER_VERTICAL|wxALL, 5 );

    item0->Add( item14, 0, wxALIGN_CENTER|wxALL, 5 );

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
