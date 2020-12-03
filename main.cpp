//#pragma once
#include "DoHoa.h"
using namespace std;

int main()
{
	system("color f1");
	remove_scrollbar();
	DeleteMenu(GetSystemMenu(GetConsoleWindow(), FALSE), SC_MAXIMIZE, MF_BYCOMMAND);
	DrawMenuBar(GetConsoleWindow());
	LIST_DAUSACH list_DS;
	TT_TREE TT_Tree;
	LIST_MUONTRA list_MTra;
	TREE_DSDocGia list_DG;
	// KHOI TAO
	KhoiTaoCay(list_DG);
	KhoiTaoDanhSachTT_Tree(TT_Tree, list_DG);
	// GIA TRI = FALSE
	KhoiTaoMangRandom();
	// doc file
	DocFileDocGia(list_DG);
	DocFileDauSach(list_DS);
	DocFileMuonTra(list_DG,list_DS);
	KiemTra_TrangThai_TheDocGia(list_DG);
	mainMenu(list_DS,list_DG,list_MTra);
	
	GhiFileDauSach(list_DS);
	GhiFileDocGia(list_DG);
	GhiFileMuonTra(list_DG);
	// DON RAM
	GiaiPhongDuLieu(list_DG,list_DS);
	return 0;
}


