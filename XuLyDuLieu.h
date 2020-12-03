#include "CauTruc.h"
#pragma warning(disable : 4996)

int Random()
{
	srand(time(NULL));
	int a;
	while (true)
	{
		a = 1 + rand() % MAX_RANDOM;
		if (MaDGRandom[a] == false)
		{
			MaDGRandom[a] = true;
			return a;
		}
	}
}


char getChar()
{
	char k = _getch();
	if (k <= '9' && k >= '0')
		return k;
}

char ChuyenChuHoa(char k)
{
	if (k <= 'z' && k >= 'a') k -= ('a' - 'A');
	return k;
}

string ChuyenSoThanhChuoi(int a)
{
	if (a == 0)
	{
		return "0";
	}
	string res = "";
	while (a > 0)
	{
		res.insert(res.begin(), a % 10 + '0');
		a /= 10;
	}
	return res;
}

string MaSachTuDong(LIST_DMS l, string maDS) {
	string str_so;
	if (l.pHead == NULL)
	{
		return maDS + "1";
	}
	else if (l.pHead->pNext == NULL)
	{
		// cat chuoi vi tri dau tien den het
		str_so = l.pHead->data.MaSach.substr(6);
		int so = atoi(str_so.c_str()) + 1;
		str_so = ChuyenSoThanhChuoi(so);
	}
	else
	{
		// cat chuoi vi tri cuoi cung den het
		str_so = l.pTail->data.MaSach.substr(6);
		int so = atoi(str_so.c_str()) + 1;
		str_so = ChuyenSoThanhChuoi(so);
	}
	return maDS + str_so;
}

int QuyChuanTinhThoiGian(Date date)
{
	int year = date.year, month = date.month, day = date.day;
	if (month < 3) {
		year--;
		month += 12;
	}
	return 365 * year + year / 4 - year / 100 + year / 400 + (153 * month - 457) / 5 + day - 306;
}

int KiemTraNgay_HienTai(Date d) {
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	Date date;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;
	//
	return QuyChuanTinhThoiGian(date) - QuyChuanTinhThoiGian(d);
}

//========================================= SAP XEP ==============================================

void InsertionSortDauSach(LIST_DAUSACH& listDS)
{
	DAUSACH* x = NULL;
	int i, j;
	for (i = 1; i < listDS.SL_DauSach; i++)
	{
		x = listDS.nodesDauSach[i];
		for (j = i - 1; j >= 0 && x->TenSach < listDS.nodesDauSach[j]->TenSach; j--)
			listDS.nodesDauSach[j + 1] = listDS.nodesDauSach[j];
		listDS.nodesDauSach[j + 1] = x;
	}
}

void InsertionSort_TT_Tree_Theo_Ma(TT_TREE& TT_Tree)
{
	NODE_TREE* x = NULL;
	int i, j;
	for (i = 1; i < TT_Tree.n; i++)
	{
		x = TT_Tree.arr[i];
		for (j = i - 1; j >= 0 && x->data.MaThe < TT_Tree.arr[j]->data.MaThe; j--)
			TT_Tree.arr[j + 1] = TT_Tree.arr[j];
		TT_Tree.arr[j + 1] = x;
	}
}

void InsertionSort_DOCGIA_QUAHAN(LIST_DGQUAHAN& l)
{
	DOCGIA_QUAHAN x;
	int i, j;
	for (i = 1; i < l.n; i++)
	{
		x = l.arr[i];
		for (j = i - 1; j >= 0 && x.NgayQH > l.arr[j].NgayQH; j--)
			l.arr[j + 1] = l.arr[j];
		l.arr[j + 1] = x;
	}
}

void InsertionSort_TT_Tree_Theo_Ten(TT_TREE& TT_Tree)
{

	NODE_TREE* x = NULL;
	int i, j;
	for (i = 1; i < TT_Tree.n; i++)
	{
		x = TT_Tree.arr[i];
		for (j = i - 1; j >= 0 && x->data.Ten + " " + x->data.Ho < TT_Tree.arr[j]->data.Ten + " " + TT_Tree.arr[j]->data.Ho; j--)
			TT_Tree.arr[j + 1] = TT_Tree.arr[j];
		TT_Tree.arr[j + 1] = x;
	}
}

void InsertionSort_DauSach_TheLoai(LIST_DAUSACH& listDS)
{
	DAUSACH* x = NULL;
	int i, j;
	for (i = 1; i < listDS.SL_DauSach; i++)
	{
		x = listDS.nodesDauSach[i];
		for (j = i - 1; j >= 0 && x->TheLoai + " " + listDS.nodesDauSach[j - 1]->TenSach < listDS.nodesDauSach[j]->TheLoai + " " + listDS.nodesDauSach[j - 1]->TenSach; j--)
			listDS.nodesDauSach[j + 1] = listDS.nodesDauSach[j];
		listDS.nodesDauSach[j + 1] = x;
	}
}

void InsertionSort_DauSach_TheoTen(LIST_THELOAI& l_tl)
{
	for (int h = 0; h < l_tl.n; h++)
	{
		DAUSACH* a = NULL;
		THELOAI *tl = l_tl.arr[h];
		for (int i = 1; i < tl->slSach; i++)
		{
			for (int j = i; j > 0; j--)
			{
				if (tl->arr[j - 1]->TenSach > tl->arr[j]->TenSach)
				{
					a = tl->arr[j - 1];
					tl->arr[j - 1] = tl->arr[j];
					tl->arr[j] = a;
				}
			}
		}
	}

}

void InsertionSort_DauSach_LanMuon(LIST_DAUSACH& listDS)
{
	DAUSACH* x = NULL;
	int i, j;
	for (i = 1; i < listDS.SL_DauSach; i++)
	{
		x = listDS.nodesDauSach[i];
		for (j = i - 1; j >= 0 && x->SoLanMuon > listDS.nodesDauSach[j]->SoLanMuon; j--)
			listDS.nodesDauSach[j + 1] = listDS.nodesDauSach[j];
		listDS.nodesDauSach[j + 1] = x;
	}
}

void InsertionSort_DauSach_Theo_Ma(LIST_DAUSACH& listDS)
{
	DAUSACH* x = NULL;
	int i, j;
	for (i = 1; i < listDS.SL_DauSach; i++)
	{
		x = listDS.nodesDauSach[i];
		for (j = i - 1; j >= 0 && x->MaDauSach < listDS.nodesDauSach[j]->MaDauSach; j--)
			listDS.nodesDauSach[j + 1] = listDS.nodesDauSach[j];
		listDS.nodesDauSach[j + 1] = x;
	}
}

void InsertionSort_TT_DMS(TT_DMS& tt_dms)
{
	NODE_DMS* a = NULL;
	string ms1, ms2;
	for (int i = 1; i < tt_dms.n; i++)
	{
		for (int j = i; j > 0; j--)
		{
			ms1 = tt_dms.arr[j - 1]->data.MaSach.substr(0, 6);
			ms2 = tt_dms.arr[j - 1]->data.MaSach.substr(0, 6);
			if (ms1.compare(ms2) == 1)
			{
				a = tt_dms.arr[j - 1];
				tt_dms.arr[j - 1] = tt_dms.arr[j];
				tt_dms.arr[j] = a;
			}
			else break;
		}
	}
}

//========================================= XU LY NGAY ==============================================

void xulynhap_ngay(string&x, char c, bool& kt)
{
	if (c >= 48 && c <= 57 && x.size() < 4)
	{
		cout << c;
		x.push_back(c);
		kt = 0;
	}
	else if (c == 8)
	{
		if (kt != 1)
		{
			if (x.length() == 1)
			{
				cout << "\b"; cout << ' '; cout << "\b";
				x.erase(x.begin() + (x.length() - 1));
				kt = 1;
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				x.erase(x.begin() + (x.length() - 1));
			}
		}
	}
}

void XulyNhap_Dulieu(string& Name, char& k, bool& kt)
{
	if ((k >= 65 && k <= 90 || k >= 97 && k <= 122) && Name.size() < 35)// nếu là số thì
	{
		cout << k;// hiện lên màn hình
		Name.push_back(k);// đồng thời lưu vào biến string x: dữ liệu
		kt = 0;// cập nhật x đã có phần tử
	}
	else if (k == 8)
	{
		if (kt != 1)//Dữ liệu khác rỗng thì cho phép thực hiện xóa
		{
			if (Name.length() == 1)// độ dài là 1: => sau khi xóa thì dữ liệu rỗng cần cập nhật kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

void XulyNhap_ChuSo(string& Name, char& k, bool& kt)
{
	if ((k >= 65 && k <= 90 || k >= 97 && k <= 122 || k >= 48 && k <= 57) && Name.size() < 35)// nếu là số thì
	{
		cout << k;// hiện lên màn hình
		Name.push_back(k);// đồng thời lưu vào biến string x: dữ liệu
		kt = 0;// cập nhật x đã có phần tử
	}
	else if (k == 8)
	{
		if (kt != 1)//Dữ liệu khác rỗng thì cho phép thực hiện xóa
		{
			if (Name.length() == 1)// độ dài là 1: => sau khi xóa thì dữ liệu rỗng cần cập nhật kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

void XuLyNhap_So_12(string& Name, char& k, bool& kt) {
	if ((k >= 49 && k <= 50) && Name.size() < 1)// nếu là số thì
	{
		cout << k;// hiện lên màn hình
		Name.push_back(k);// đồng thời lưu vào biến string x: dữ liệu
		kt = 0;// cập nhật x đã có phần tử
	}
	else if (k == 8)
	{
		if (kt != 1)//Dữ liệu khác rỗng thì cho phép thực hiện xóa
		{
			if (Name.length() == 1)// độ dài là 1: => sau khi xóa thì dữ liệu rỗng cần cập nhật kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

void XuLyNhap_So_02(string& Name, char& k, bool& kt) {
	if ((k == 48 || k == 50) && Name.size() < 1)// nếu là số thì
	{
		cout << k;// hiện lên màn hình
		Name.push_back(k);// đồng thời lưu vào biến string x: dữ liệu
		kt = 0;// cập nhật x đã có phần tử
	}
	else if (k == 8)
	{
		if (kt != 1)//Dữ liệu khác rỗng thì cho phép thực hiện xóa
		{
			if (Name.length() == 1)// độ dài là 1: => sau khi xóa thì dữ liệu rỗng cần cập nhật kt
			{
				cout << "\b"; cout << ' ';
				cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
				kt = 1;// cap nhat x dang rong
			}
			else
			{
				cout << "\b"; cout << ' '; cout << "\b";
				Name.erase(Name.begin() + (Name.length() - 1));
			}
		}
	}
}

NODE_TREE* TimNodedocGiaTrongTree(TREE_DSDocGia& root, int code)
{
	NODE_TREE* p = root;
	if (root == NULL) return NULL;
	else {
		if (p->data.MaThe < code)
			TimNodedocGiaTrongTree(root->pRight, code);
		else if (p->data.MaThe > code)
			TimNodedocGiaTrongTree(root->pLeft, code);
		else if (p->data.MaThe = code)
			return p;
	}
}

// TRA LAI DANH SACH DOC GIA SAU KHI TIM KIEM THEO MA
TT_TREE TraLaiDS_DocGia(TT_TREE tt_Tree, char* key, int size)
{
	TT_TREE ds_traVe;
	if (size == 0) return tt_Tree;
	for (int i = 0; i < tt_Tree.n; i++)
	{
		string temp = "";
		temp += key;
		string maDG = ChuyenSoThanhChuoi(tt_Tree.arr[i]->data.MaThe);
		int r = maDG.find(key);
		if (r >= 0)
			ds_traVe.arr[ds_traVe.n++] = tt_Tree.arr[i];
	}
	return ds_traVe;
}

//TRA VE DANH SACH TIM KIEM THEO TEN
LIST_DAUSACH TraVeDS_DauSach(LIST_DAUSACH listDS, string key, int size)
{
	if (size == 0) return listDS;
	LIST_DAUSACH tt_Tree;
	for (int i = 0; i < listDS.SL_DauSach; i++)
	{
		int kt = listDS.nodesDauSach[i]->TenSach.find(key);
		if (kt >= 0)
			tt_Tree.nodesDauSach[tt_Tree.SL_DauSach++] = listDS.nodesDauSach[i];
	}
	return tt_Tree;
}

// chuyen dslk thanh mang con tro
TT_DMS KhoiTaoDanhSachTT_DMS(LIST_DMS &listDMS, char key[])
{
	TT_DMS tt_dms;
	if (strlen(key) == 0)
	{
		for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
		{
			tt_dms.arr[tt_dms.n++] = k;
		}
		return tt_dms;
	}
	for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
	{
		int kt = k->data.MaSach.find(key);
		if (kt >= 0)
		{
			tt_dms.arr[tt_dms.n++] = k;
		}
	}
	return tt_dms;
}

// TRA LAI DANH SACH DAU SACH SAU KHI TIM KIEM THEO TEN
TT_DMS TraLai_DMS(TT_DMS tt_dms, char* key, int size)
{
	TT_DMS ds_traVe;
	if (size == 0) return tt_dms;
	for (int i = 0; i < tt_dms.n; i++)
	{
		int r = tt_dms.arr[i]->data.MaSach.find(key);
		if (r >= 0)
			ds_traVe.arr[ds_traVe.n++] = tt_dms.arr[i];
	}
	return ds_traVe;
}

// NHUNG SACH CHON MUON DUOC
TT_DMS KhoiTaoDanhSachTT_DMS_DuDieuKien(LIST_DMS &listDMS, char key[])
{
	TT_DMS tt_dms;
	if (strlen(key) == 0)
	{
		for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
		{
			if (k->data.TrangThai == 0)
			{
				tt_dms.arr[tt_dms.n++] = k;
			}
		}
		return tt_dms;
	}
	for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.TrangThai == 0)
		{
			int kt = k->data.MaSach.find(key);
			if (kt >= 0)
			{
				tt_dms.arr[tt_dms.n++] = k;
			}
		}
	}
	return tt_dms;
}

// DE IN LICH SU MUON SACH CỦA DOC GIA VA PHAN TRANG 
TT_MUONTRA KhoiTaoDanhSachTT_MuonTra(LIST_MUONTRA &l) {
	TT_MUONTRA tt_MTra;
	for (NODE_MUONTRA* k = l.pHead; k != NULL; k = k->pNext)
	{
		tt_MTra.arr[tt_MTra.n++] = k;
	}
	return tt_MTra;
}

// KIEM TRA NGAY HOP LE
bool KiemTraNgayHopLe(Date h)
{
	int ngaymax, nam = h.year, thang = h.month, ngay = h.day;
	if (nam < 0 || thang < 0 || thang> 12 || ngay < 0 || ngay> 31)
	{
		return false;
	}
	else
	{
		switch (thang)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			ngaymax = 31;
			break;
		case 2:
			if ((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0))
				ngaymax = 29;
			else
				ngaymax = 28;
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			ngaymax = 30;
			break;
		}
		if (ngay <= ngaymax)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
}

//========================================== XOA DOC GIA ==============================================
void XoaCase3(TREE_DSDocGia& r, TREE_DSDocGia& root)
{
	if (r->pLeft != NULL) XoaCase3(r->pLeft, root);
	else {
		root->data = r->data;
		root = r;
		r = r->pRight;
	}
}

void XoaNodeTrongTree(TREE_DSDocGia& root, int key)
{
	if (root == NULL) return;
	else {
		if (root->data.MaThe > key)
			XoaNodeTrongTree(root->pLeft, key);
		else if (root->data.MaThe < key)
			XoaNodeTrongTree(root->pRight, key);
		else if (root->data.MaThe == key)
		{
			NODE_TREE* k = root;
			if (root->pLeft == NULL && root->pRight == NULL)
			{
				delete root;
				root = NULL;
				return;
			}
			else if (root->pLeft == NULL && root->pRight != NULL)
			{
				root = k->pRight;
			}
			else if (root->pLeft != NULL && root->pRight == NULL)
			{
				root = k->pLeft;
			}
			else {
				XoaCase3(k->pRight, k);
			}
			delete k;
			k = NULL;
		}
	}
}

//========================================== XOA SACH TRONG DANH MUC SACH ==============================================

void XoaCuoi_DMS(LIST_DMS& listDMS) {
	//XOA CUOI
	for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
	{
		if (k->pNext == listDMS.pTail)
		{
			delete listDMS.pTail;
			k->pNext = NULL;
			listDMS.pTail = k;
			return;
		}
	}
}

int XoaNode_DMS(LIST_DMS& listDMS, string maSach) {
	if (listDMS.pHead == NULL) return 0;
	// XOA DAU
	NODE_DMS* a = new NODE_DMS;
	if (listDMS.pHead->data.MaSach.compare(maSach) == 0)
	{
		a = listDMS.pHead;
		listDMS.pHead = a->pNext;
		delete a;
		return 1;
	}

	if (listDMS.pTail->data.MaSach.compare(maSach) == 0)
	{
		XoaCuoi_DMS(listDMS);
	}

	// XOA BAT KY
	for (NODE_DMS* k = listDMS.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.MaSach.compare(maSach) == 0)
		{
			a->pNext = k->pNext;
			delete k;
			return 1;
		}
		a = k;
	}
	return 0;
}

//=========================================== XOA QUYEN SACH DANG MUON TRONG LIST MUON TRA ============================
int XoaNode_MuonTra(LIST_MUONTRA& listMTra, string maSach) {
	if (listMTra.pHead == NULL) return 0;
	// Xoa dau
	NODE_MUONTRA* a = new NODE_MUONTRA;
	if (listMTra.pHead->data.MaSach.compare(maSach) == 0)
	{
		a = listMTra.pHead;
		listMTra.pHead = a->pNext;
		delete a;
		return 1;
	}
	// xoa bat ky
	for (NODE_MUONTRA* k = listMTra.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.MaSach.compare(maSach) == 0)
		{
			a->pNext = k->pNext;
			delete k;
			return 1;
		}
		a = k;
	}
	return 0;
}

//========================================  XU LY DU LIEU ============================
int ThemDocGiaVaoCay(TREE_DSDocGia& root, NODE_TREE* docgia)
{
	if (root == NULL) {
		root = docgia;
		return 1;
	}
	else
	{
		if (root->data.MaThe > docgia->data.MaThe) {
			ThemDocGiaVaoCay(root->pLeft, docgia);

		}
		else if (root->data.MaThe < docgia->data.MaThe)
		{
			ThemDocGiaVaoCay(root->pRight, docgia);
		}
	}

}

void ThemVaoCuoi_DMS(LIST_DMS& l, NODE_DMS* x)
{
	if (l.pHead == NULL) l.pHead = l.pTail = x;
	else {
		l.pTail->pNext = x;
		l.pTail = x;
	}
}

int ThemDauSachMoi(LIST_DAUSACH& l, DAUSACH*&ds)
{
	for (int i = 0; i < l.SL_DauSach; i++)
	{
		if (l.nodesDauSach[i]->MaDauSach.compare(ds->MaDauSach) == 0) return 0;
	}
	l.nodesDauSach[l.SL_DauSach++] = ds;
	return 1;
}

void ThemVaoCuoi_MuonTra(LIST_MUONTRA& list_MTra, NODE_MUONTRA* node) {

	if (list_MTra.pHead == NULL)
	{
		list_MTra.pHead = node;
		list_MTra.pTail = node;
		return;
	}
	list_MTra.pTail->pNext = node;
	node->pPrev = list_MTra.pTail;
	list_MTra.pTail = node;

}

int KiemTraTrangThaiSach(DAUSACH* ds, string ms) {
	for (NODE_DMS* i = ds->List_DMS.pHead; i != NULL; i = i->pNext)
	{
		if (i->data.MaSach == ms)
		{
			return i->data.TrangThai;
		}
	}
	return 0;
}

bool KiemTraNgayTra(MUONTRA mt) {
	if (mt.NgayTra.day == 0 && mt.NgayTra.month == 0 && mt.NgayTra.year == 0)
	{
		return 0;
	}
	return 1;
}

void ChuyenTrangThaiSach(LIST_DMS& l, string ms, int ttTra) {
	for (NODE_DMS* i = l.pHead; i != NULL; i = i->pNext)
	{
		if (i->data.MaSach == ms)
		{
			// da tra sach
			if (ttTra == 1)
				i->data.TrangThai = 0;
			else if (ttTra == 2)
				i->data.TrangThai = 2;
			return;
		}
	}
}

DAUSACH* binarySearchDauSach(LIST_DAUSACH& listDS, string ms) {
	int r = listDS.SL_DauSach - 1;
	int l = 0;
	while (r >= l) {
		int mid = l + (r - l) / 2; 

		if (listDS.nodesDauSach[mid]->MaDauSach == ms)
			return listDS.nodesDauSach[mid];

		if (listDS.nodesDauSach[mid]->MaDauSach.compare(ms) > 0)
			r = mid - 1;

		if (listDS.nodesDauSach[mid]->MaDauSach.compare(ms) < 0)
			l = mid + 1;
	}
}

int SoLuongSachConLai(LIST_DMS l) {
	int sl = 0;
	for (NODE_DMS* k = l.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.TrangThai == 0)
		{
			sl++;
		}
	}
	return sl;
}

// NEU AM LA CON LAI <= 0
// NEU DUONG LA QUA HAN > 0
int KiemTraQuaHan_1_DocGia(LIST_MUONTRA &l) {
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	Date date;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;
	int ngayQH = 0;
	int tam;
	for (NODE_MUONTRA* k = l.pHead; k != NULL; k = k->pNext)
	{
		//SACH DANG MUON
		if (k->data.TrangThai == 0)
		{
			tam = (QuyChuanTinhThoiGian(date) - QuyChuanTinhThoiGian(k->data.NgayMuon));
			if (tam > ngayQH) {
				ngayQH = tam;
			}
		}
	}
	return ngayQH - MAX_NGAYMUON;
}

// CHUYEN NODE DSLK KEP VAO MANG CON TRO QUYEN TINH

LIST_DGQUAHAN DanhSachDocGia_QuaHan(TT_TREE tt_Tree, LIST_DAUSACH &listDS)
{
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	Date date;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;

	LIST_DGQUAHAN list_DGQH;
	int ngayQH = 0;
	string ms;
	DOCGIA_QUAHAN dgqh;
	for (int i = 0; i < tt_Tree.n; i++)
	{
		NODE_MUONTRA* k = tt_Tree.arr[i]->data.List_MuonTra.pHead;
		//DANH SACH MUON TRA
		for (; k != NULL; k = k->pNext)
		{
			//KIEM TRA LA SACH DANG MUON
			//KIEM TRA QUA HAN
			if (k->data.TrangThai == 0)
			{
				// NGAY HIEN TAI - NGAY MUON - SO NGAY MUON TOI DA
				// >0 LA QUA HAN
				ngayQH = (QuyChuanTinhThoiGian(date) - QuyChuanTinhThoiGian(k->data.NgayMuon) - MAX_NGAYMUON);
				//NEU SO NGAY MUON LON HON NGAY QUA HAN
				if (ngayQH > 0)
				{
					ms = k->data.MaSach.substr(0, 6);
					DAUSACH* ds = binarySearchDauSach(listDS, ms);
					dgqh.TenSach = ds->TenSach;
					dgqh.MaThe = tt_Tree.arr[i]->data.MaThe;
					dgqh.TenDocGia = tt_Tree.arr[i]->data.Ho + " " + tt_Tree.arr[i]->data.Ten;
					dgqh.NgayQH = ngayQH;
					//LAY DIA CHI CUA DATA RA GAN VAO dgqh MUON TRA
					dgqh.muonTra = &k->data;
					list_DGQH.arr[list_DGQH.n++] = dgqh;
				}
			}
		}
	}

	// SAP XEP NGAY QUA HAN GIAM DAN
	InsertionSort_DOCGIA_QUAHAN(list_DGQH);
	return list_DGQH;
}

void TimKiemNodeMuonTra(TREE_DSDocGia& root, string ms, NODE_MUONTRA* &p) {

	if (root == NULL) return;
	else
	{
		for (NODE_MUONTRA* k = root->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
		{
			if (k->data.MaSach == ms)
			{
				p = k;
				return;
			}
		}
		TimKiemNodeMuonTra(root->pRight, ms, p);
		TimKiemNodeMuonTra(root->pLeft, ms, p);
	}
}

void KiemTra_TrangThai_TheDocGia(TREE_DSDocGia& root) {
	if (root == NULL) return;
	else
	{
		//NEU VI PHAM QUA HAN THI KHOA THE
		if (KiemTraQuaHan_1_DocGia(root->data.List_MuonTra) > 0)
			root->data.TrangThai = 0;
		//KHONG THI GIU NGUYEN TRANG THAI THE TRONG FILE

		KiemTra_TrangThai_TheDocGia(root->pRight);
		KiemTra_TrangThai_TheDocGia(root->pLeft);
	}
}

// THE DOC GIA HOAT DONG => MUON
// DOC GIA MUON SACH QUA HAN => TRA
void KhoiTaoDanhSachDocGia_DuDieuKien_MuonTra(TT_TREE& TT_Tree, TREE_DSDocGia root)
{
	if (root == NULL) return;
	else {
		if (root->data.TrangThai == 1 || KiemTraQuaHan_1_DocGia(root->data.List_MuonTra) > 0)
		{
			TT_Tree.arr[TT_Tree.n++] = root;
		}
		KhoiTaoDanhSachDocGia_DuDieuKien_MuonTra(TT_Tree, root->pLeft);
		KhoiTaoDanhSachDocGia_DuDieuKien_MuonTra(TT_Tree, root->pRight);
	}
}

LIST_THELOAI DauSachTheoTheLoai(LIST_DAUSACH& listDS) {
	LIST_THELOAI list_TheLoai;
	// TAO 1 THE LOAI DAU TIEN
	THELOAI *tl = new THELOAI;
	tl->TenTheLoai = listDS.nodesDauSach[0]->TheLoai;
	tl->arr[tl->slSach++] = listDS.nodesDauSach[0];
	// THEM VAO LIST THE LOAI
	list_TheLoai.arr[list_TheLoai.n++] = tl;
	bool isTheLoai;
	for (int i = 1; i < listDS.SL_DauSach; i++)
	{
		isTheLoai = false;
		// SO SANH CO TRUNG THE LOAI HAY KHONG
		for (int j = 0; j < list_TheLoai.n; j++)
		{
			// == NHAU THI ADD NODE DAU SACH VAO
			if (listDS.nodesDauSach[i]->TheLoai == list_TheLoai.arr[j]->TenTheLoai)
			{
				list_TheLoai.arr[j]->arr[list_TheLoai.arr[j]->slSach++] = listDS.nodesDauSach[i];
				isTheLoai = true;
			}
		}
		// CHUA CO THI TAO THE LOAI MOI THEM VAO
		if (!isTheLoai)
		{
			THELOAI *tl1 = new THELOAI;
			tl1->TenTheLoai = listDS.nodesDauSach[i]->TheLoai;
			tl1->arr[tl1->slSach++] = listDS.nodesDauSach[i];
			list_TheLoai.arr[list_TheLoai.n++] = tl1;
		}
	}
	InsertionSort_DauSach_TheoTen(list_TheLoai);
	return list_TheLoai;
}
