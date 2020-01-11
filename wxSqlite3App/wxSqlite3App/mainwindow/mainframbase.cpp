///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Feb 17 2019)
// http://www.wxformbuilder.org/
//
// PLEASE DO *NOT* EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#include "mainframbase.h"

///////////////////////////////////////////////////////////////////////////

MainFrameBase::MainFrameBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxFrame( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	m_pMenuBar = new wxMenuBar( 0 );
	this->SetMenuBar( m_pMenuBar );

	wxBoxSizer* bSizer1;
	bSizer1 = new wxBoxSizer( wxHORIZONTAL );

	m_panelCenter = new wxPanel( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	bSizerCenter = new wxBoxSizer( wxVERTICAL );


	m_panelCenter->SetSizer( bSizerCenter );
	m_panelCenter->Layout();
	bSizerCenter->Fit( m_panelCenter );
	bSizer1->Add( m_panelCenter, 1, wxEXPAND, 1 );


	this->SetSizer( bSizer1 );
	this->Layout();
	pStatusBar = this->CreateStatusBar( 1, wxSTB_SIZEGRIP, wxID_ANY );

	this->Centre( wxBOTH );
}

MainFrameBase::~MainFrameBase()
{
}

LoginDatabaseDialogBase::LoginDatabaseDialogBase( wxWindow* parent, wxWindowID id, const wxString& title, const wxPoint& pos, const wxSize& size, long style ) : wxDialog( parent, id, title, pos, size, style )
{
	this->SetSizeHints( wxDefaultSize, wxDefaultSize );

	wxBoxSizer* bSizer3;
	bSizer3 = new wxBoxSizer( wxVERTICAL );

	wxStaticBoxSizer* sbSizer2;
	sbSizer2 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxVERTICAL );

	m_comboBox1 = new wxComboBox( sbSizer2->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, wxCB_READONLY );
	sbSizer2->Add( m_comboBox1, 0, wxALL|wxEXPAND, 5 );


	bSizer3->Add( sbSizer2, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer3;
	sbSizer3 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxHORIZONTAL );

	m_textCtrl1 = new wxTextCtrl( sbSizer3->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer3->Add( m_textCtrl1, 1, wxALL|wxEXPAND, 5 );

	m_button1 = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxSize( -1,25 ), 0 );
	sbSizer3->Add( m_button1, 0, wxALL, 5 );

	m_button2 = new wxButton( sbSizer3->GetStaticBox(), wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxSize( -1,25 ), 0 );
	sbSizer3->Add( m_button2, 0, wxALL, 5 );


	bSizer3->Add( sbSizer3, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer4;
	sbSizer4 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxVERTICAL );

	m_textCtrl2 = new wxTextCtrl( sbSizer4->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer4->Add( m_textCtrl2, 0, wxALL|wxEXPAND, 5 );


	bSizer3->Add( sbSizer4, 0, wxEXPAND, 5 );

	wxStaticBoxSizer* sbSizer5;
	sbSizer5 = new wxStaticBoxSizer( new wxStaticBox( this, wxID_ANY, wxT("label") ), wxVERTICAL );

	m_checkBox1 = new wxCheckBox( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	sbSizer5->Add( m_checkBox1, 0, wxALL, 5 );

	wxFlexGridSizer* fgSizer1;
	fgSizer1 = new wxFlexGridSizer( 0, 2, 0, 0 );
	fgSizer1->AddGrowableCol( 1 );
	fgSizer1->AddGrowableCol( 2 );
	fgSizer1->SetFlexibleDirection( wxBOTH );
	fgSizer1->SetNonFlexibleGrowMode( wxFLEX_GROWMODE_SPECIFIED );

	m_staticText1 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText1->Wrap( -1 );
	fgSizer1->Add( m_staticText1, 0, wxALL, 5 );

	m_textCtrl3 = new wxTextCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_textCtrl3, 1, wxALL|wxEXPAND, 5 );

	m_staticText2 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText2->Wrap( -1 );
	fgSizer1->Add( m_staticText2, 0, wxALL, 5 );

	m_comboBox2 = new wxComboBox( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0 );
	fgSizer1->Add( m_comboBox2, 0, wxALL|wxEXPAND, 5 );

	m_staticText3 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText3->Wrap( -1 );
	fgSizer1->Add( m_staticText3, 0, wxALL, 5 );

	m_spinCtrl1 = new wxSpinCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizer1->Add( m_spinCtrl1, 0, wxALL|wxEXPAND, 5 );

	m_staticText4 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText4->Wrap( -1 );
	fgSizer1->Add( m_staticText4, 0, wxALL, 5 );

	m_spinCtrl2 = new wxSpinCtrl( sbSizer5->GetStaticBox(), wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, wxSP_ARROW_KEYS, 0, 10, 0 );
	fgSizer1->Add( m_spinCtrl2, 0, wxALL|wxEXPAND, 5 );

	m_staticText5 = new wxStaticText( sbSizer5->GetStaticBox(), wxID_ANY, wxT("MyLabel"), wxDefaultPosition, wxDefaultSize, 0 );
	m_staticText5->Wrap( -1 );
	fgSizer1->Add( m_staticText5, 0, wxALL, 5 );

	m_checkBox2 = new wxCheckBox( sbSizer5->GetStaticBox(), wxID_ANY, wxT("Check Me!"), wxDefaultPosition, wxDefaultSize, 0 );
	fgSizer1->Add( m_checkBox2, 0, wxALL, 5 );


	sbSizer5->Add( fgSizer1, 1, wxEXPAND, 5 );


	bSizer3->Add( sbSizer5, 0, wxEXPAND, 5 );

	wxBoxSizer* bSizer4;
	bSizer4 = new wxBoxSizer( wxHORIZONTAL );

	m_button3 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxSize( -1,25 ), 0 );
	bSizer4->Add( m_button3, 0, wxALL, 5 );


	bSizer4->Add( 0, 0, 1, wxEXPAND, 5 );

	m_button4 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxSize( -1,25 ), 0 );
	bSizer4->Add( m_button4, 0, wxALL, 5 );

	m_button5 = new wxButton( this, wxID_ANY, wxT("MyButton"), wxDefaultPosition, wxSize( -1,25 ), 0 );
	bSizer4->Add( m_button5, 0, wxALL, 5 );


	bSizer3->Add( bSizer4, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer3 );
	this->Layout();

	this->Centre( wxBOTH );
}

LoginDatabaseDialogBase::~LoginDatabaseDialogBase()
{
}

DatabasesPanelBase::DatabasesPanelBase( wxWindow* parent, wxWindowID id, const wxPoint& pos, const wxSize& size, long style, const wxString& name ) : wxPanel( parent, id, pos, size, style, name )
{
	wxBoxSizer* bSizer9;
	bSizer9 = new wxBoxSizer( wxHORIZONTAL );

	m_splitter1 = new wxSplitterWindow( this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_NO_XP_THEME|wxSP_PERMIT_UNSPLIT );
	m_splitter1->SetSashGravity( 0 );
	m_splitter1->Connect( wxEVT_IDLE, wxIdleEventHandler( DatabasesPanelBase::m_splitter1OnIdle ), NULL, this );
	m_splitter1->SetMinimumPaneSize( 250 );

	m_panelList = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxSize( -1,-1 ), wxTAB_TRAVERSAL );
	wxBoxSizer* bSizerList;
	bSizerList = new wxBoxSizer( wxHORIZONTAL );


	bSizerList->Add( 5, 0, 0, wxEXPAND, 5 );

	m_pTreeNavicat = new wxTreeCtrl( m_panelList, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTR_DEFAULT_STYLE );
	bSizerList->Add( m_pTreeNavicat, 1, wxALL|wxEXPAND, 0 );


	m_panelList->SetSizer( bSizerList );
	m_panelList->Layout();
	bSizerList->Fit( m_panelList );
	m_panel3 = new wxPanel( m_splitter1, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxTAB_TRAVERSAL );
	wxBoxSizer* bSizer6;
	bSizer6 = new wxBoxSizer( wxVERTICAL );

	m_auinotebook = new wxAuiNotebook( m_panel3, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxAUI_NB_DEFAULT_STYLE );

	bSizer6->Add( m_auinotebook, 1, wxEXPAND | wxALL, 1 );


	m_panel3->SetSizer( bSizer6 );
	m_panel3->Layout();
	bSizer6->Fit( m_panel3 );
	m_splitter1->SplitVertically( m_panelList, m_panel3, 250 );
	bSizer9->Add( m_splitter1, 1, wxEXPAND, 5 );


	bSizer9->Add( 5, 0, 0, wxEXPAND, 5 );


	this->SetSizer( bSizer9 );
	this->Layout();
}

DatabasesPanelBase::~DatabasesPanelBase()
{
}
