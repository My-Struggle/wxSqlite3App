#include "databasespanel.h"
#include "wxincludes.h"

DatabasesPanel::DatabasesPanel( wxWindow* parent )
:
DatabasesPanelBase( parent )
{
	//wxTrackerNode* pNode = new wxTrackerNode();
	//m_pTreeNavicat->AddNode(new wxTrackerNode(),"123");
	wxTreeItemId;

	InitTreeList();
}

void DatabasesPanel::InitTreeList()
{
	auto root = m_pTreeNavicat->AddRoot("Êý¾Ý¿â");

	try
	{
		wxJSONReader rjson;
		wxJSONValue vjson;
		wxString str;
		wxFile f;
		f.Open("test.json", wxFile::read_write);
		f.ReadAll(&str);
		f.Close();
		rjson.Parse(str, &vjson);
		auto smap = vjson.AsMap();

		auto arr = vjson.AsArray();
		auto arrstr = vjson.GetMemberNames();
		auto arrstr1 = vjson.GetCommentArray();
		wxJSONValue kjson;
		auto jsonstr = vjson.Get(wxString("object"), kjson);
		int cnt = jsonstr.Size();
		for (int i = 0; i < cnt; i++)
		{
			auto sjson = jsonstr.Item(i);
			wxJSONValue njson;
		
			auto idjson = sjson.Get(wxString("id"), njson);
			auto id = idjson.AsInt();
			auto fjson = sjson.Get(wxString("file"), njson);
			auto s1 = fjson.AsString();
			auto item1 = m_pTreeNavicat->AppendItem(root, "123");
			 m_pTreeNavicat->AppendItem(item1, wxString("")<<id);
			 m_pTreeNavicat->AppendItem(item1, s1);

			auto item2 = m_pTreeNavicat->AppendItem(item1, "name");
			auto ssjson = sjson.Get(wxString("name"), njson);
			auto sarr = ssjson.AsArray();
			for (auto j = 0; j < sarr->size(); j++)
			{
				auto ss = sarr->Item(j).AsString();
			 m_pTreeNavicat->AppendItem(item2, ss);
			}
			ssjson = sjson.Get(wxString("expent"), njson);
			auto  earr = ssjson.AsArray();
			for (auto j = 0; j < earr->size(); j++)
			{
				auto eid = earr->Item(j).AsInt();
			}
			
		}
	}
	catch (const std::exception&)
	{
	}

}
