#include "mainframe.h"

MainFrame::MainFrame( wxWindow* parent )
:
MainFrameBase( parent )
{
	InitView();
	InitData();
	InitMenus();
	m_dataPanel = new DatabasesPanel(m_panelCenter);
	bSizerCenter->Add(m_dataPanel, 5, wxALL | wxEXPAND, 1);
	WriteJson();
	ReadJson();
}

void MainFrame::InitView()
{
	/*wxDataViewTextRenderer* str;
	str = new wxDataViewTextRenderer("string", wxDATAVIEW_CELL_INERT);
	wxDataViewColumn* columnMarketID = new wxDataViewColumn(wxString("名字"), str, 0, 100, wxALIGN_LEFT, wxDATAVIEW_COL_SORTABLE | wxDATAVIEW_COL_REORDERABLE | wxDATAVIEW_COL_RESIZABLE);
	m_dataViewTest->AppendColumn(columnMarketID);

	str = new wxDataViewTextRenderer("string", wxDATAVIEW_CELL_INERT);
	wxDataViewColumn* columnMarketName = new wxDataViewColumn(wxString("ID"), str, 1, 100, wxALIGN_LEFT, wxDATAVIEW_COL_SORTABLE | wxDATAVIEW_COL_REORDERABLE | wxDATAVIEW_COL_RESIZABLE);
	m_dataViewTest->AppendColumn(columnMarketName);*/
}

void MainFrame::InitData()
{
	/*try
	{
	*/	//m_dataViewTest->AppendItem();
		/*wxSQLite3Database* db = new wxSQLite3Database();
		//wxSQLite3Cipher clipher;
		//clipher.InitializeFromCurrent(*db);
		//clipher.SetCipher(*db, WXSQLITE_CIPHER_AES256);
		wxSQLite3CipherSQLCipher clipher;
		clipher.InitializeVersionDefault(3);
		//auto ss="F:/vs/wxSqlite3App/Debug/test.db";
		wxStandardPathsBase& stdp = wxStandardPaths::Get();
		wxFileName exeFile(stdp.GetExecutablePath());
		//auto ss = "C://Users\Administrator\Desktop"//exeFile.GetPath(wxPATH_GET_VOLUME | wxPATH_GET_SEPARATOR);
		//ss.Replace( "\\", "/");
		wxString str = "C:/Users/Administrator/Desktop/test.db";
		db->Open(str, clipher,"123456");//"b*_04@v9A!2?_c"
		if (db->IsOpen())
		{
			std::cout << "***********";
		}
		else
		{
			std::cout << "999999999999999";

		}
		
		wxSQLite3ResultSet set = db->ExecuteQuery("select * from han;");
		//db->Commit();
		int count = 0; 
		m_dataViewTest->DeleteAllItems();
		while (set.NextRow())
		{
			
			wxVector<wxVariant> var;

		var.push_back(set.GetString(0));
		var.push_back(set.GetString(1));
		m_dataViewTest->AppendItem(var);

		}

	}
	catch (const wxSQLite3Exception& e)
	{
		auto ss=e.GetMessage();
	}
	
	*/
}

void MainFrame::InitMenus()
{
	wxMenu* pMenuFile = new wxMenu();

	pMenuFile->Append(Databses_Menu_ID_Connect_Databases, wxT("链接数据库"), wxT("添加链接数据"));
	pMenuFile->Append(Databses_Menu_ID_Disconnect_Databases, wxT("断开链接数据库"), wxT("断开已链接数据"));
	pMenuFile->Append(Databses_Menu_ID_Add_Databases, wxT("添加数据库"), wxT("添加链接数据"));
	pMenuFile->Append(Databses_Menu_ID_Edit_Databases, wxT("编辑数据库"), wxT("修改数据库"));
	pMenuFile->Append(Databses_Menu_ID_Remove_Databases, wxT("移除数据库"), wxT("将数据库移除列表"));
	pMenuFile->Append(Databses_Menu_ID_Del_Databases, wxT("删除数据库"), wxT("将数据库彻底从磁盘删除"));
	pMenuFile->Append(Databses_Menu_ID_Export_Databases, wxT("导出数据库"), wxT("将数据库导出到文件"));
	pMenuFile->Append(Databses_Menu_ID_Refresh_Select_Databases, wxT("刷新数据库"), wxT("刷新选择的数据库"));
	pMenuFile->Append(Databses_Menu_ID_Refresh_All_Databases, wxT("刷新所有数据库"), wxT("刷新所有已链接数据库"));

	wxMenu* pMenuTable = new wxMenu();
	pMenuTable->Append(Table_Menu_ID_Create_Table, wxT("创建表"), wxT("添加数据库表"));
	pMenuTable->Append(Table_Menu_ID_Edit_Table, wxT("编辑表"), wxT("编辑数据库表"));
	pMenuTable->Append(Table_Menu_ID_Del_Table, wxT("删除表"), wxT("删除数据库表"));

	m_pMenuBar->Freeze();
	m_pMenuBar->Append(pMenuFile, wxT("文件(&S)"));
	m_pMenuBar->Append(pMenuTable, wxT("表(&T)"));
	/*m_pMenuBar->Append(pMenuPrice, wxT("行情(&P)"));
	m_pMenuBar->Append(menuTrade, wxT("交易(&T)"));
	m_pMenuBar->Append(menuHelp, wxT("关于(&A)"))*/;
	m_pMenuBar->Thaw();

	SetMenuBar(m_pMenuBar);

}

void MainFrame::WriteJson()
{
	try
	{
		wxJSONWriter wjson;
		wxJSONValue vjson;
		for (auto i = 0; i < 5; i++)
		{
			vjson["object"][i]["id"] = 98+i;
			vjson["object"][i]["file"] = wxString("c://")<<i;
			vjson["object"][i]["expent"] = 1;
			for (auto j = 0; j < 5; j++)
			{
				vjson["object"][i]["expent"][j] =j*i ;
				vjson["object"][i]["name"][j] = wxString("test")<<(i*j+i);

			}
		}
		wxString str ;
		wxOutputStream ostr;
		wxFile f; //= "test.json";
		if (!f.Exists("test.json"))
			f.Create("test.json", wxFile::read_write);
		else
			f.Open("test.json", wxFile::read_write);
		wjson.Write(vjson, str);
		
		f.Write(str);
		f.Close();
	}
	catch (const std::exception& e)
	{

	}
	
}
void MainFrame::ReadJson()
{
	try
	{
		wxJSONReader rjson;
		wxJSONValue vjson;
		wxString str;
		wxFile f;
		f.Open("test.json", wxFile::read_write);
		f.ReadAll(&str);
		f.Close();
		rjson.Parse(str,&vjson);
		auto smap=vjson.AsMap();

		auto arr = vjson.AsArray();
		auto arrstr = vjson.GetMemberNames();
		auto arrstr1 = vjson.GetCommentArray();
		wxJSONValue kjson;
		auto jsonstr = vjson.Get(wxString("object"),kjson);
		int cnt= jsonstr.Size();
		for (int i = 0; i < cnt; i++)
		{
			auto sjson= jsonstr.Item(i);
			wxJSONValue njson;
			auto ssjson = sjson.Get(wxString("name"), njson);
			auto sarr=ssjson.AsArray();
			for (auto j = 0; j < sarr->size(); j++)
			{
				auto ss=sarr->Item(j).AsString();
			}
			ssjson=sjson.Get(wxString("expent"), njson);
			auto  earr=ssjson.AsArray();
			for (auto j = 0; j < earr->size(); j++)
			{
				auto eid=earr->Item(j).AsInt();
			}
			auto idjson=sjson.Get(wxString("id"),njson);
			auto id=idjson.AsInt();
			auto fjson=sjson.Get(wxString("file"), njson);
			auto s1=fjson.AsString();
		}
	}
	catch (const std::exception&)
	{

	}
}