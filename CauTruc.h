#include <iostream>
#include <stdlib.h>
#include <iomanip>
#include <string>
#include <string.h>
#include <fstream>
#include <iostream>
#include <conio.h>
#include <ctime>
#include <cmath>
#include "mylib.h"
#include <tchar.h>

using namespace std;
#define MAX_RANDOM 5000
#define MAX_DAUSACH 5000
#define MAX_DMS 5000
#define MAX_DOCGIA 5000
#define MAX_MUONTRA 5000
#define MAX_THELOAI 1000
#define MAX_NGAYMUON 7 //SO NGAY TOI DA DUOC MUON SACH
//MANG RANDOM MA DOC GIA NGAU NHIEN == FALSE
bool* MaDGRandom = new bool[MAX_RANDOM];
struct date
{
	int year;
	int month;
	int day;
};
typedef struct date Date;
//====================================== DANH MUC SACH DSLK DON ==========================================
struct DanhMucSach
{
	string MaSach= "";
	int TrangThai = 0;// 0: CHO MUON DC, 1: CO NGUOI MUON, 2: DA THANH LI 
	string ViTri = "";
};
typedef struct DanhMucSach DMS;

struct node_dms
{
	DMS data;
	struct node_dms* pNext;
};
typedef struct node_dms NODE_DMS;

struct list_dms
{
	NODE_DMS* pHead;
	NODE_DMS* pTail;
};
typedef struct list_dms LIST_DMS;

// CAU TRUC TAM XU LY XUAT NHAP DANH MUC SACH
struct tt_dms {
	int n = 0;
	NODE_DMS* arr[MAX_DMS] = { NULL };
};
typedef struct tt_dms TT_DMS;

//====================================== DAU SACH MANG CON TRO ==========================================
struct DauSach
{
	string MaDauSach = "";
	string TenSach = "";
	int SoTrang = 0;
	string TacGia = "";
	int NamXuatBan;
	string TheLoai = "";
	int SoLuongSach = 0;	// SO LUONG SACH TRONG DMS
	int SoLanMuon = 0;	// XU LY CAU 10 DAU SACH MUON NHIEU NHAT
	LIST_DMS List_DMS;
};
typedef struct DauSach DAUSACH;

struct list_DauSach
{
	int SL_DauSach = 0;
	DAUSACH* nodesDauSach[MAX_DAUSACH] = { NULL };
};
typedef struct list_DauSach LIST_DAUSACH;

//====================================== MUON TRA DSLK KEP ==========================================
struct MuonTra
{
	string MaSach = "";
	Date NgayMuon;
	Date NgayTra;
	int TrangThai = 0; // TRANG THAI =0 LA SACH DANG MUON (CHUA TRA), = 1 LA DA TRA, = 2 : LAM MAT SACH
};
typedef struct MuonTra MUONTRA;

struct Node_muontra
{
	MUONTRA data;
	struct Node_muontra* pNext;
	struct Node_muontra* pPrev;
};
typedef struct Node_muontra NODE_MUONTRA;

struct list_muontra
{
	NODE_MUONTRA* pHead;
	NODE_MUONTRA* pTail;
};
typedef struct list_muontra LIST_MUONTRA;

// CAU TRUC TAM XU LY XUAT LICH SU PHAN TRANG
struct tt_muontra {
	int n = 0;
	NODE_MUONTRA* arr[MAX_MUONTRA] = { NULL };
};
typedef struct tt_muontra TT_MUONTRA;

//====================================== THE DOC GIA CAY NHI PHAN TIM KIEM ==========================================

struct TheDocGia
{
	int MaThe;
	string Ho = "";
	string Ten = "";
	string Phai = "";
	int TrangThai = 0; //1 : LA DANG HOAT DONG , 0: LA BI KHOA
	int SoLuongSachDangMuon = 0;
	LIST_MUONTRA List_MuonTra;// dslk Kep
};
typedef struct TheDocGia THE_DOCGIA;

struct NODE_TREE
{
	THE_DOCGIA data;
	NODE_TREE* pLeft;
	NODE_TREE* pRight;
};
typedef struct NODE_TREE* TREE_DSDocGia;

// CAU TRUC TAM DE XU LY XUAT NHAP DOC GIA PHAN TRANG THEO MA THEO TEN
struct tt_Tree {
	int n = 0;
	NODE_TREE* arr[MAX_DOCGIA] = { NULL };
};
typedef struct tt_Tree TT_TREE;
// CAU TRUC TAM XU LY IN DANH SACH DOC GIA QUA HAN

struct docgiaquahan {
	int MaThe;
	string TenDocGia;
	int NgayQH = 0;
	string TenSach;
	MUONTRA *muonTra;
};
typedef struct docgiaquahan DOCGIA_QUAHAN;

struct listDGQH {
	int n = 0;// SO LUONG DOC GIA QUA HAN
	DOCGIA_QUAHAN arr[MAX_DOCGIA];
};
typedef struct listDGQH LIST_DGQUAHAN;

// DAU SACH THEO THE LOAI 

struct theloai {
	string TenTheLoai = "";
	int slSach = 0;
	DAUSACH *arr[MAX_DAUSACH] = { NULL };
};
typedef struct theloai THELOAI;

struct listTheLoai {
	int n = 0;
	THELOAI* arr[MAX_THELOAI];
};
typedef struct listTheLoai LIST_THELOAI;

//========================================  KHOI TAO DU LIEU ============================

void KhoiTaoCay(TREE_DSDocGia& t)
{
	t = NULL;
}

void KhoiTaoListDMS(LIST_DMS& listDMS)
{
	listDMS.pHead = NULL;
	listDMS.pTail = NULL;
}

void KhoiTaoListMTra(LIST_MUONTRA& listMT)
{
	listMT.pHead = NULL;
	listMT.pTail = NULL;
}

NODE_TREE* KhoiTaoNodeTree(THE_DOCGIA n)
{
	NODE_TREE* g = new NODE_TREE;
	g->data = n;
	g->pLeft = NULL;
	g->pRight = NULL;
	return g;
}

void KhoiTaoDanhSachTT_Tree(TT_TREE& TT_Tree, TREE_DSDocGia &root)
{
	if (root == NULL) return;
	else {
		TT_Tree.arr[TT_Tree.n++] = root;
		KhoiTaoDanhSachTT_Tree(TT_Tree, root->pLeft);
		KhoiTaoDanhSachTT_Tree(TT_Tree, root->pRight);
	}
}

void KhoiTaoMangRandom() {
	for (int i = 0; i < MAX_RANDOM; i++)
	{
		MaDGRandom[i] = false;
	}
}

NODE_DMS* KhoiTaoNode_DMS(DMS dms)
{
	NODE_DMS* tam = new NODE_DMS;
	tam->data = dms;
	tam->pNext = NULL;
	return tam;
}

NODE_MUONTRA* KhoiTaoNode_MuonTra(MUONTRA mt)
{
	NODE_MUONTRA* tam = new NODE_MUONTRA;
	tam->data = mt;
	tam->pNext = NULL;
	tam->pPrev = NULL;
	return tam;
}

//======================================== DON RAM =====================================
void XoaMuonSach_DSLKDoi(LIST_MUONTRA& l)
{
	while (l.pHead != NULL)
	{
		NODE_MUONTRA* h = l.pHead;
		l.pHead = l.pHead->pNext;
		delete h;
	}
}

void XoaCayDocGia(TREE_DSDocGia& root)
{
	if (root == NULL) return;
	else {
		XoaCayDocGia(root->pLeft);
		XoaCayDocGia(root->pRight);
		// xoa lich su muon tra
		XoaMuonSach_DSLKDoi(root->data.List_MuonTra);
		delete root;
		root = NULL;
	}
}

void XoaDauSach(LIST_DAUSACH& list_DS)
{
	for (int i = 0; i < list_DS.SL_DauSach; i++)
	{
		if (list_DS.nodesDauSach[i] == NULL)
			break;
		// xoa danh muc sach
		while (list_DS.nodesDauSach[i]->List_DMS.pHead != NULL)
		{
			NODE_DMS* k = list_DS.nodesDauSach[i]->List_DMS.pHead;
			list_DS.nodesDauSach[i]->List_DMS.pHead = list_DS.nodesDauSach[i]->List_DMS.pHead->pNext;
			delete k;
			k = NULL;
		}
		delete list_DS.nodesDauSach[i];
		list_DS.nodesDauSach[i] = NULL;
	}
}

void GiaiPhongDuLieu(TREE_DSDocGia& list_DG, LIST_DAUSACH& list_DS)
{
	XoaCayDocGia(list_DG);
	XoaDauSach(list_DS);
}

