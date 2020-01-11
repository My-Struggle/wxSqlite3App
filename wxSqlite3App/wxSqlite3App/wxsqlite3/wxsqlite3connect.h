#pragma once
#include "wxincludes.h"

class wxSqlite3Connect
{
	public:
		wxSqlite3Connect();
		~wxSqlite3Connect();
		wxSQLite3Database *GetCurrentSqlite3Connet();
		void ChangedSqlite3Connect(const wxString& path);
		void AddSqlite3Connect(const wxString& path, const wxString& key);
		void DelSqlite3Connect(const wxString& path);
	private:
		wxSQLite3Database* m_connetSqlite;
		std::map<wxString, wxSQLite3Database*> m_connetSqliteMap;
};

