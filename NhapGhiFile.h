#include "XuLyDuLieu.h"
// ============================ GHI FILE MUON TRA ==================================
void GhiFile_1_DocGia_MuonTra(TREE_DSDocGia& docGia, ofstream& fileOut) {
	if (docGia == NULL) return;
	else {
		for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
		{
			fileOut << docGia->data.MaThe << "," << k->data.MaSach << ","
				<< k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/"
				<< k->data.NgayMuon.year << "," << k->data.NgayTra.day << "/"
				<< k->data.NgayTra.month << "/" << k->data.NgayTra.year << ","
				<< k->data.TrangThai << endl;

		}
		GhiFile_1_DocGia_MuonTra(docGia->pLeft, fileOut);
		GhiFile_1_DocGia_MuonTra(docGia->pRight, fileOut);
	}
}

void GhiFileMuonTra(TREE_DSDocGia listDG) {
	ofstream outFile("FileMuonTraCopy.IN");
	GhiFile_1_DocGia_MuonTra(listDG, outFile);
	outFile.close();
}

// ============================ DOC FILE MUON TRA ==================================

int DocFileMuonTra(TREE_DSDocGia& root, LIST_DAUSACH& listDS)
{
	ifstream inputFile("FileMuonTraCopy.IN");
	if (inputFile.fail())
	{
		cout << "That bai";
		return 0;
	}
	int MaDocGia = 0;
	while (!inputFile.eof())
	{
		inputFile >> MaDocGia;
		inputFile.ignore(1);
		//TIM RA DOC GIA
		NODE_TREE* dg = TimNodedocGiaTrongTree(root, MaDocGia);
		if (dg != NULL)
		{
			if (dg->data.List_MuonTra.pHead == NULL)
			{
				KhoiTaoListMTra(dg->data.List_MuonTra);
			}
			MUONTRA mt;
			getline(inputFile, mt.MaSach, ',');
			if (mt.MaSach == "")
			{
				break;
			}
			inputFile >> mt.NgayMuon.day;
			inputFile.ignore(1);
			inputFile >> mt.NgayMuon.month;
			inputFile.ignore(1);
			inputFile >> mt.NgayMuon.year;
			inputFile.ignore(1);
			inputFile >> mt.NgayTra.day;
			inputFile.ignore(1);
			inputFile >> mt.NgayTra.month;
			inputFile.ignore(1);
			inputFile >> mt.NgayTra.year;
			inputFile.ignore(1);
			inputFile >> mt.TrangThai;
			inputFile.ignore(1);
			if (mt.TrangThai == 0)
			{
				dg->data.SoLuongSachDangMuon++;
			}

			NODE_MUONTRA* p = KhoiTaoNode_MuonTra(mt);
			ThemVaoCuoi_MuonTra(dg->data.List_MuonTra, p);
		}
	}
	inputFile.close();
	return 1;
}

// ============================ DOC FILE DOC GIA ==================================
int DocFileDocGia(TREE_DSDocGia& root)
{
	int sL = 0;
	ifstream inputFile("FileDocGiaCopy.IN");
	if (inputFile.fail())
	{
		cout << "That bai";
		return 0;
	}
	THE_DOCGIA docGia;
	int MaDocGia = 0;
	while (!inputFile.eof())
	{
		inputFile >> MaDocGia;
		// vi tri ma doc gia da co san
		MaDGRandom[MaDocGia] = true;
		docGia.MaThe = MaDocGia;
		inputFile.ignore(1);
		if (docGia.MaThe == 0)
		{
			break;
		}
		getline(inputFile, docGia.Ho, ',');
		getline(inputFile, docGia.Ten, ',');
		getline(inputFile, docGia.Phai, ',');
		inputFile >> docGia.TrangThai;
		inputFile.ignore(1);
		docGia.SoLuongSachDangMuon = 0;
		KhoiTaoListMTra(docGia.List_MuonTra);
		NODE_TREE* node_DG = KhoiTaoNodeTree(docGia);
		ThemDocGiaVaoCay(root, node_DG);
		sL++;
	}
	inputFile.close();
	return sL;
}

// ============================ GHI FILE DOC GIA ==================================
void DuyetGhiFileDocGia(TREE_DSDocGia& docGia, ofstream& fileOut)
{
	if (docGia == NULL) return;
	else {
		fileOut << docGia->data.MaThe << "," << docGia->data.Ho << "," << docGia->data.Ten
			<< "," << docGia->data.Phai << "," << docGia->data.TrangThai << endl;
		DuyetGhiFileDocGia(docGia->pLeft, fileOut);
		DuyetGhiFileDocGia(docGia->pRight, fileOut);
	}
}

void GhiFileDocGia(TREE_DSDocGia docGia)
{
	ofstream outFile("FileDocGiaCopy.IN");
	DuyetGhiFileDocGia(docGia, outFile);
	outFile.close();
}

// ============================ GHI FILE DAU SACH ==================================

void GhiFileDauSach(LIST_DAUSACH listDS)
{
	ofstream outFile("FileDauSachCopy.IN");
	outFile << listDS.SL_DauSach << endl;
	for (int i = 0; i < listDS.SL_DauSach; i++)
	{
		if (listDS.nodesDauSach[i] == NULL) break;

		outFile << listDS.nodesDauSach[i]->MaDauSach << "," << listDS.nodesDauSach[i]->TenSach
			<< "," << listDS.nodesDauSach[i]->SoTrang << "," << listDS.nodesDauSach[i]->TacGia
			<< "," << listDS.nodesDauSach[i]->NamXuatBan << "," << listDS.nodesDauSach[i]->TheLoai
			<< "," << listDS.nodesDauSach[i]->SoLanMuon << "," << listDS.nodesDauSach[i]->SoLuongSach << endl;
		if (i == listDS.SL_DauSach - 1) {
			if (listDS.nodesDauSach[i]->List_DMS.pHead == NULL)
			{
				break;
			}
			for (NODE_DMS* k = listDS.nodesDauSach[i]->List_DMS.pHead; k != NULL; k = k->pNext) {
				if (k->pNext == NULL)
				{
					outFile << k->data.MaSach << "," << k->data.TrangThai
						<< "," << k->data.ViTri << ",";
					return;
				}
				outFile << k->data.MaSach << "," << k->data.TrangThai
					<< "," << k->data.ViTri << "," << endl;
			}
		}
		for (NODE_DMS* k = listDS.nodesDauSach[i]->List_DMS.pHead; k != NULL; k = k->pNext) {
			outFile << k->data.MaSach << "," << k->data.TrangThai
				<< "," << k->data.ViTri << "," << endl;
		}
		outFile << endl;
	}
	outFile.close();
}
// ============================ DOC FILE DAU SACH ==================================

void Doc_1_Dau_Sach(ifstream& filein, DAUSACH*&ds)
{
	getline(filein, ds->MaDauSach, ',');
	getline(filein, ds->TenSach, ',');
	filein >> ds->SoTrang;
	filein.ignore(1);
	getline(filein, ds->TacGia, ',');
	filein >> ds->NamXuatBan;
	filein.ignore(1);
	getline(filein, ds->TheLoai, ',');
	filein >> ds->SoLanMuon;
	filein.ignore(1);
	int SLSach;
	filein >> SLSach;
	filein.ignore(1);
	LIST_DMS listDMS;
	KhoiTaoListDMS(listDMS);
	DMS dms;
	ds->SoLuongSach = SLSach;
	for (int i = 0; i < SLSach; i++)
	{
		getline(filein, dms.MaSach, ',');
		filein >> dms.TrangThai;
		filein.ignore(1);
		getline(filein, dms.ViTri, ',');
		filein.ignore(1);
		NODE_DMS* Node_dms = KhoiTaoNode_DMS(dms);
		// them vao cuoi danh sach lien ket don
		ThemVaoCuoi_DMS(listDMS, Node_dms);
	}
	ds->List_DMS = listDMS;
	filein.ignore(1);
}

void DocFileDauSach(LIST_DAUSACH& listDS)
{
	ifstream inFile("FileDauSachCopy.IN", ios::in);
	if (inFile.fail())
	{
		cout << "Fail";
		return;
	}
	int SLDauSach = 0;
	inFile >> listDS.SL_DauSach;
	inFile.ignore(1);
	SLDauSach = listDS.SL_DauSach;
	
	for(int i = 0; i< SLDauSach; i++){
		listDS.nodesDauSach[i] = new DAUSACH;
		Doc_1_Dau_Sach(inFile, listDS.nodesDauSach[i]);
		ThemDauSachMoi(listDS, listDS.nodesDauSach[i]);
	}
}



