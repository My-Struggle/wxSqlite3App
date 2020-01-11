#pragma once
#include "mainwindow/mainframe.h"


class SqliteApp : public wxApp
{
public:
	virtual bool OnInit();
	virtual int OnExit();
	MainFrame* frame;
};

//wxIMPLEMENT_APP(SqliteApp);


//class MyFrame : public wxFrame
//{
//public:
//	MyFrame(const wxString& title);
//};
//class MyApp : public wxApp
//{
//
//public:
//	virtual bool OnInit();
//};
//wxIMPLEMENT_APP(MyApp);
//
//IMPLEMENT_APP(MyApp);
//MyFrame::MyFrame(const wxString& title)
//	:wxFrame(NULL, wxID_ANY, title, wxDefaultPosition, wxSize(250, 150))
//{
//	Centre();//将窗口放置在显示屏正中心
//	wxBoxSizer* bSizer1;
//	bSizer1 = new wxBoxSizer(wxVERTICAL);
//
//	wxComboBox* m_comboBox1 = new wxComboBox(this, wxID_ANY, wxT("Combo!"), wxDefaultPosition, wxDefaultSize, 0, NULL, 0);
//	bSizer1->Add(m_comboBox1, 0, wxALL | wxEXPAND, 5);
//
//	m_comboBox1->SetColumns(2);
//	m_comboBox1->Append("123");
//	m_comboBox1->Append("123");
//	m_comboBox1->Append("123");
//	m_comboBox1->Append("123");
//
//	this->SetSizer(bSizer1);
//	this->Layout();
//
//	this->Centre(wxBOTH);
//}
//
//bool MyApp::OnInit()
//{
//	MyFrame* frame = new MyFrame(wxT("MyApp"));
//	frame->Show(true);
//	return true;
//}
//
//
//// 核心代码
