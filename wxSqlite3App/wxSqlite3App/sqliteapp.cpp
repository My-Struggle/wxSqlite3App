#include "sqliteapp.h"


bool SqliteApp::OnInit()
{
	frame = new MainFrame(nullptr);
	frame->Show();
	return true;
}

int SqliteApp::OnExit()
{
	return wxApp::OnExit();
}
//IMPLEMENT_APP(SqliteApp);

wxIMPLEMENT_APP(SqliteApp);
