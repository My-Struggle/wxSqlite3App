///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 17 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#pragma once

#include <wx/artprov.h>
#include <wx/xrc/xmlres.h>
#include <wx/string.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/statusbr.h>
#include <wx/frame.h>
#include <wx/combobox.h>
#include <wx/statbox.h>
#include <wx/textctrl.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/button.h>
#include <wx/checkbox.h>
#include <wx/stattext.h>
#include <wx/spinctrl.h>
#include <wx/dialog.h>
#include <wx/treectrl.h>
#include <wx/aui/auibook.h>
#include <wx/splitter.h>

///////////////////////////////////////////////////////////////////////////


///////////////////////////////////////////////////////////////////////////////
/// Class MainFrameBase
///////////////////////////////////////////////////////////////////////////////
class MainFrameBase : public wxFrame
{
	private:

	protected:
		wxMenuBar* m_pMenuBar;
		wxPanel* m_panelCenter;
		wxBoxSizer* bSizerCenter;
		wxStatusBar* pStatusBar;

	public:

		MainFrameBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 660,380 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );

		~MainFrameBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class LoginDatabaseDialogBase
///////////////////////////////////////////////////////////////////////////////
class LoginDatabaseDialogBase : public wxDialog
{
	private:

	protected:
		wxComboBox* m_comboBox1;
		wxTextCtrl* m_textCtrl1;
		wxButton* m_button1;
		wxButton* m_button2;
		wxTextCtrl* m_textCtrl2;
		wxCheckBox* m_checkBox1;
		wxStaticText* m_staticText1;
		wxTextCtrl* m_textCtrl3;
		wxStaticText* m_staticText2;
		wxComboBox* m_comboBox2;
		wxStaticText* m_staticText3;
		wxSpinCtrl* m_spinCtrl1;
		wxStaticText* m_staticText4;
		wxSpinCtrl* m_spinCtrl2;
		wxStaticText* m_staticText5;
		wxCheckBox* m_checkBox2;
		wxButton* m_button3;
		wxButton* m_button4;
		wxButton* m_button5;

	public:

		LoginDatabaseDialogBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxEmptyString, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 451,480 ), long style = wxDEFAULT_DIALOG_STYLE );
		~LoginDatabaseDialogBase();

};

///////////////////////////////////////////////////////////////////////////////
/// Class DatabasesPanelBase
///////////////////////////////////////////////////////////////////////////////
class DatabasesPanelBase : public wxPanel
{
	private:

	protected:
		wxSplitterWindow* m_splitter1;
		wxPanel* m_panelList;
		wxTreeCtrl* m_pTreeNavicat;
		wxPanel* m_panel3;
		wxAuiNotebook* m_auinotebook;

	public:

		DatabasesPanelBase( wxWindow* parent, wxWindowID id = wxID_ANY, const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 741,300 ), long style = wxTAB_TRAVERSAL, const wxString& name = wxEmptyString );
		~DatabasesPanelBase();

		void m_splitter1OnIdle( wxIdleEvent& )
		{
			m_splitter1->SetSashPosition( 250 );
			m_splitter1->Disconnect( wxEVT_IDLE, wxIdleEventHandler( DatabasesPanelBase::m_splitter1OnIdle ), NULL, this );
		}

};

