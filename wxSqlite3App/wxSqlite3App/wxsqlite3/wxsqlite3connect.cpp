#include "wxsqlite3connect.h"

wxSqlite3Connect::wxSqlite3Connect()
{
	m_connetSqlite = nullptr;
}

wxSqlite3Connect::~wxSqlite3Connect()
{
}

wxSQLite3Database* wxSqlite3Connect::GetCurrentSqlite3Connet()
{
	return m_connetSqlite;
}

void wxSqlite3Connect::ChangedSqlite3Connect(const wxString& path)
{
	auto it = m_connetSqliteMap.find(path);
	if (it != m_connetSqliteMap.end())
	{
		m_connetSqlite = it->second;
	}
	else
	{
		m_connetSqlite = nullptr;
	}
}

void wxSqlite3Connect::AddSqlite3Connect(const wxString& path, const wxString& key) 
{
		wxSQLite3Database* db = new wxSQLite3Database();
		wxSQLite3CipherSQLCipher clipher;
		clipher.InitializeVersionDefault(3);
		db->Open(path,key);
		bool force = db->IsOpen();
		if (force)
		{
			m_connetSqliteMap.insert(std::pair<wxString, wxSQLite3Database*>(path,db));
		}
}

void wxSqlite3Connect::DelSqlite3Connect(const wxString& path)
{
	auto it = m_connetSqliteMap.find(path);
	if (it != m_connetSqliteMap.end())
	{
		m_connetSqliteMap.erase(it);
	}

}
