#include "NhapGhiFile.h"

//============================================== VE KHUNG LOGO DO HOA =====================================

void Logo1(int toadoX, int toadoY)
{
	string str;
	ifstream FileIn;
	FileIn.open("logo.IN", ios::in);
	int h = toadoY;
	int mamau;
	while (true)
	{
		getline(FileIn, str);
		mamau = 112 + rand() % 5;
		SetColor(mamau);
		gotoXY(toadoX, h++);
		cout << str << endl;
		if (FileIn.eof())
		{
			break;
		}
	}
	TextColor(241);
	FileIn.close();
}
void XoaLogo1(int toadoX, int toadoY)
{
	int h = toadoY;
	string str = "                                               ";
	while (h < 13 + toadoY)
	{
		gotoXY(toadoX, h++);
		cout << str << endl;
	}
}

void Ve_HOTKEY() {

	int x = 3, y = 8;
	int ngang = 15;
	int doc = 35;
	TextColor(119);
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + j, doc + i);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + 30 + j, doc + i);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			gotoXY(ngang + 60 + j, doc + i);
			cout << " ";
		}
	}
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 1; j++)
		{
			gotoXY(ngang + j, doc + i + 5);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 2; j++)
		{
			gotoXY(ngang + 30 + j, doc + i + 5);
			cout << " ";
		}
	}

	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y + 1; j++)
		{
			gotoXY(ngang + 60 + j, doc + i + 5);
			cout << " ";
		}
	}
	TextColor(124);
	gotoXY(ngang + 3, doc + 1);
	cout << "ESC";


	gotoXY(ngang + 1 + 30, doc + 1);
	cout << "ENTEN";

	gotoXY(ngang + 1 + 60, doc + 1);
	cout << "KEYUP";


	gotoXY(ngang + 1, doc + 1 + 5);
	cout << "KEYDOWN";


	gotoXY(ngang + 1 + 30, doc + 1 + 5);
	cout << "KEYRIGHT";


	gotoXY(ngang + 1 + 60, doc + 1 + 5);
	cout << "KEYLEFT";

	TextColor(241);
	gotoXY(ngang + 10, doc + 1);
	cout << ": THOAT";
	gotoXY(ngang + 40, doc + 1);
	cout << ": CHON";
	gotoXY(ngang + 70, doc + 1);
	cout << ": LEN";
	gotoXY(ngang + 10, doc + 1 + 5);
	cout << ": XUONG";
	gotoXY(ngang + 40, doc + 1 + 5);
	cout << ": QUA PHAI";
	gotoXY(ngang + 70, doc + 1 + 5);
	cout << ": QUA TRAI";

}

void Ve_HOTKEY_DocGia() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang + 30, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	doc = 6;
	gotoXY(ngang, doc++);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc++);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc++);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc++);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "KEY F3";
	gotoXY(ngang + 1 + 30, doc);
	cout << "KEY F5";
	doc = 6;
	gotoXY(ngang + 1, doc++);
	cout << "KEY F6";
	gotoXY(ngang + 1, doc++);
	cout << "KEY F7";
	gotoXY(ngang + 1, doc++);
	cout << "KEY F8";
	gotoXY(ngang + 1, doc++);
	cout << "KEY F9";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "XOA DOC GIA";
	gotoXY(ngang + 10 + 30, doc);
	cout << "THEM DOC GIA";
	doc = 6;
	gotoXY(ngang + 10, doc++);
	cout << "DANH SACH DOC GIA THEO TEN";
	gotoXY(ngang + 10, doc++);
	cout << "DANH SACH DOC GIA THEO MA";
	gotoXY(ngang + 10, doc++);
	cout << "LIET KE CAC SACH DOC GIA DANG MUON";
	gotoXY(ngang + 10, doc++);
	cout << "LICH SU MUON TRA SACH CUA 1 DOC GIA";
}

void Ve_HOTKEY_DauSach() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "ENTER";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F6";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F7";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "CHINH SUA DAU SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "THEM DAU SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "IN DANH SACH THEO THE LOAI";
	gotoXY(ngang + 10, doc += 2);
	cout << "IN THONG TIN 1 DAU SACH";
}

void Ve_HOTKEY_TraSach() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	gotoXY(ngang + 1, doc += 2);
	cout << "ENTER";

	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "TRA TAT CA SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "TRA QUYEN SACH DA CHON";
	gotoXY(ngang + 10, doc += 2);
	cout << "CHON SACH DE TRA";

}

void Ve_HOTKEY_MuonTra() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	gotoXY(ngang + 1, doc += 2);
	cout << "ENTER";

	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "MUON SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "TRA SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "THONG TIN SACH DANG MUON";

}

void Ve_HOTKEY_DMS() {

	int x = 4, y = 8;
	int ngang = 120;
	int doc = 4;
	TextColor(119);
	gotoXY(ngang, doc);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{

		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}
	gotoXY(ngang, doc += 2);
	for (int i = 0; i < y; i++)
	{
		cout << " ";
	}

	doc = 4;
	TextColor(124);
	gotoXY(ngang + 1, doc);
	cout << "KEY F3";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F4";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F5";
	gotoXY(ngang + 1, doc += 2);
	cout << "KEY F6";
	doc = 4;
	TextColor(241);
	gotoXY(ngang + 10, doc);
	cout << "XOA SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "THANH LY SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "THEM SACH";
	gotoXY(ngang + 10, doc += 2);
	cout << "CHUYEN SACH THANH LY THANH CHO MUON";
}
//============================================== VE KHUNG DO HOA =====================================

void VeKhungCH(int x, int y, int width, int height, bool draw, WORD c)
{
	if (draw) {

		gotoXY(x, y);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x + width, y);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x, y + height);
		SetBGColor(c);
		cout << "  ";

		gotoXY(x + width, y + height);
		SetBGColor(c);
		cout << "  ";

		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y + height);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x, i);
			SetBGColor(c);
			cout << "  ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x + width, i);
			SetBGColor(c);
			cout << "  ";
		}
	}
	else {

		gotoXY(x, y);
		cout << " ";
		gotoXY(x + width, y);
		cout << " ";
		gotoXY(x, y + height);
		cout << " ";
		gotoXY(x + width, y + height);
		cout << " ";
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y);
			cout << " ";
		}
		for (int i = x + 1; i < (x + width); i++) {
			gotoXY(i, y + height);
			cout << " ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x, i);
			cout << " ";
		}
		for (int i = y + 1; i < (y + height); i++) {
			gotoXY(x + width, i);
			cout << " ";
		}
	}
}

int MenuChonLua(int a)
{
	clrscr();
	Logo1(90, 10);
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	int vtX = 8, vtY = 5;
	int vtTitle = 15;
	int Pos = a, width = 35;

	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY DOC GIA";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}

	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY DAU SACH";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY DANH MUC SACH";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "QUAN LY MUON TRA SACH";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle - 1, vtY + 1);
	cout << "10 DAU SACH MUON NHIEU NHAT";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "DANH SACH DOC GIA QUA HAN";
	vtY += 5;
	for (int i = 0; i < 3; i++)
	{
		TextColor(113);
		gotoXY(vtX, vtY + i);
		for (int i = 0; i < width; i++)
		{

			cout << " ";
		}
		cout << endl;
	}
	gotoXY(vtTitle, vtY + 1);
	cout << "THOAT";

	// to dau tien
	vtY = 5;
	if (Pos == 1)
	{
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY DOC GIA";
	}
	else if (Pos == 2)
	{
		vtY = 10;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY DAU SACH";

	}
	else if (Pos == 3)
	{
		vtY = 15;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY DANH MUC SACH";
	}
	else if (Pos == 4)
	{
		vtY = 20;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "QUAN LY MUON TRA SACH";
	}
	else if (Pos == 5)
	{
		vtY = 25;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";

		}
		gotoXY(vtTitle, vtY + 1);
		cout << "10 DAU SACH MUON NHIEU NHAT";
	}
	else if (Pos == 6)
	{
		vtY = 30;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "DANH SACH DOC GIA QUA HAN";
	}
	else if (Pos == 7)
	{
		vtY = 35;
		TextColor(143);
		for (int i = 0; i < 3; i++)
		{
			gotoXY(vtX, vtY + i);
			cout << "                                   ";
		}
		gotoXY(vtTitle, vtY + 1);
		cout << "THOAT";
	}

	while (true)
	{
		ShowCur(false);
		char temp = _getch();
		if (temp == -32)
		{
			temp = _getch();
			TextColor(241);
			if (temp == KEYUP)
			{
				if (Pos == 1)
				{
					vtY = 5;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DOC GIA";
					Pos = 7;
				}
				else if (Pos == 2)
				{
					vtY = 10;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DAU SACH";
					Pos = 1;
				}
				else if (Pos == 3)
				{
					vtY = 15;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DANH MUC SACH";
					Pos = 2;
				}
				else if (Pos == 4)
				{
					vtY = 20;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY MUON TRA SACH";
					Pos = 3;
				}
				else if (Pos == 5)
				{
					vtY = 25;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";

					}
					gotoXY(vtTitle, vtY + 1);
					cout << "10 DAU SACH MUON NHIEU NHAT";
					Pos = 4;
				}
				else if (Pos == 6)
				{
					vtY = 30;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "DANH SACH DOC GIA QUA HAN";
					Pos = 5;
				}
				else if (Pos == 7)
				{
					vtY = 35;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "THOAT";
					Pos = 6;
				}
			}
			else if (temp == KEYDOWN)
			{
				if (Pos == 1)
				{
					vtY = 5;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DOC GIA";
					Pos = 2;
				}
				else if (Pos == 2)
				{
					vtY = 10;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DAU SACH";
					Pos = 3;
				}
				else if (Pos == 3)
				{
					vtY = 15;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY DANH MUC SACH";
					Pos = 4;
				}
				else if (Pos == 4)
				{
					vtY = 20;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "QUAN LY MUON TRA SACH";
					Pos = 5;
				}
				else if (Pos == 5)
				{
					vtY = 25;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";

					}
					gotoXY(vtTitle, vtY + 1);
					cout << "10 DAU SACH MUON NHIEU NHAT";
					Pos = 6;
				}
				else if (Pos == 6)
				{
					vtY = 30;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "DANH SACH DOC GIA QUA HAN";
					Pos = 7;
				}
				else if (Pos == 7)
				{
					vtY = 35;
					TextColor(113);
					for (int i = 0; i < 3; i++)
					{
						gotoXY(vtX, vtY + i);
						cout << "                                   ";
					}
					gotoXY(vtTitle, vtY + 1);
					cout << "THOAT";
					Pos = 1;
				}
			}

			if (Pos == 1)
			{
				vtY = 5;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY DOC GIA";
			}
			else if (Pos == 2)
			{
				vtY = 10;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY DAU SACH";

			}
			else if (Pos == 3)
			{
				vtY = 15;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY DANH MUC SACH";
			}
			else if (Pos == 4)
			{
				vtY = 20;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "QUAN LY MUON TRA SACH";
			}
			else if (Pos == 5)
			{
				vtY = 25;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";

				}
				gotoXY(vtTitle, vtY + 1);
				cout << "10 DAU SACH MUON NHIEU NHAT";
			}
			else if (Pos == 6)
			{
				vtY = 30;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "DANH SACH DOC GIA QUA HAN";
			}
			else if (Pos == 7)
			{
				vtY = 35;
				TextColor(143);
				for (int i = 0; i < 3; i++)
				{
					gotoXY(vtX, vtY + i);
					cout << "                                   ";
				}
				gotoXY(vtTitle, vtY + 1);
				cout << "THOAT";
			}
		}
		if (temp == KEYENTER)
		{
			//			Beep(600, 60);
			TextColor(241);
			return Pos;
		}
	}

	XoaLogo1(90, 10);
}

void VeKhungDocGia()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 11; i < 33; i++)
	{
		gotoXY(15, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(50, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(65, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(84, i);
		cout << " ";
	}
	for (int i = 11; i < 33; i++)
	{
		gotoXY(97, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(4, 11);
	cout << "MA DOC GIA";
	gotoXY(30, 11);
	cout << "HO";
	gotoXY(53, 11);
	cout << "TEN DOC GIA";
	gotoXY(70, 11);
	cout << "GIOI TINH";
	gotoXY(86, 11);
	cout << "TRANG THAI";
	gotoXY(99, 11);
	cout << "SACH DANG MUON";

	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH DOC GIA TRONG THU VIEN";
	gotoXY(125, 2);
	cout << "MENU LUA CHON THEM SUA XOA DOC GIA";
	TextColor(241);
	Ve_HOTKEY();
	Ve_HOTKEY_DocGia();
}

void VeKhungDocGiaMuonTra()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//4 thanh doc
	for (int i = 11; i < 33; i++)
	{
		gotoXY(15, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(53, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(65, i);
		cout << " ";
	}

	for (int i = 11; i < 33; i++)
	{
		gotoXY(80, i);
		cout << " ";
	}
	for (int i = 11; i < 33; i++)
	{
		gotoXY(93, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(4, 11);
	cout << "MA DOC GIA";
	gotoXY(25, 11);
	cout << "HO TEN DOC GIA";
	gotoXY(55, 11);
	cout << "GIOI TINH";
	gotoXY(67, 11);
	cout << "SL SACH MUON";
	gotoXY(82, 11);
	cout << "TRANG THAI";
	gotoXY(100, 11);
	cout << "GHI CHU";
	Ve_HOTKEY_MuonTra();
}

void VeKhungDocGiaTheoMaTen()
{
	int quaox = 15;
	VeKhungCH(20 + quaox, 5, 114, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 22; i < 134; i++)
	{
		gotoXY(quaox + i, 7);
		cout << " ";
	}
	TextColor(25);

	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 27, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 40, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 92, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 104, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(quaox + 117, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(quaox + 23, 6);
	cout << "STT";
	gotoXY(quaox + 29, 6);
	cout << "MA DOC GIA";
	gotoXY(quaox + 55, 6);
	cout << "HO VA TEN DOC GIA";
	gotoXY(quaox + 94, 6);
	cout << "GIOI TINH";
	gotoXY(quaox + 106, 6);
	cout << "TRANG THAI";
	gotoXY(quaox + 119, 6);
	cout << "SACH DANG MUON";
}

void VeKhungLichSuMuonTraSach()
{
	int ngang =10;
	VeKhungCH(20+ngang, 5, 114, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 22+ngang; i < 134+ngang; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(ngang+27, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(ngang+40, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(ngang+88, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(ngang+104, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(ngang+117, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(ngang+23, 6);
	cout << "STT";
	gotoXY(ngang+30, 6);
	cout << "MA ISBN";
	gotoXY(ngang+55, 6);
	cout << "TEN DAU SACH";
	gotoXY(ngang+92, 6);
	cout << "MA SACH";
	gotoXY(ngang+107, 6);
	cout << "NGAY MUON";
	gotoXY(ngang+122, 6);
	cout << "NGAY TRA";
}

void VeKhungCacSachDocGiaDangMuon()
{
	VeKhungCH(20, 5, 114, 10, true, BLUE);
	// 2 thanh ngang
	for (int i = 22; i < 134; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 15; i++)
	{
		gotoXY(27, i);
		cout << " ";
	}
	for (int i = 6; i < 15; i++)
	{
		gotoXY(40, i);
		cout << " ";
	}

	for (int i = 6; i < 15; i++)
	{
		gotoXY(88, i);
		cout << " ";
	}

	for (int i = 6; i < 15; i++)
	{
		gotoXY(104, i);
		cout << " ";
	}

	for (int i = 6; i < 15; i++)
	{
		gotoXY(117, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(23, 6);
	cout << "STT";
	gotoXY(30, 6);
	cout << "MA ISBN";
	gotoXY(55, 6);
	cout << "TEN DAU SACH";
	gotoXY(92, 6);
	cout << "THE LOAI";
	gotoXY(107, 6);
	cout << "MA SACH";
	gotoXY(122, 6);
	cout << "NGAY MUON";
}

void VeKhungDauSachTheoTheLoai()
{
	VeKhungCH(10, 5, 144, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 12; i < 154; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(17, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(31, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(60, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(90, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(110, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(125, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(138, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(13, 6);
	cout << "STT";
	gotoXY(19, 6);
	cout << "MA DAU SACH";
	gotoXY(40, 6);
	cout << "TEN DAU SACH";
	gotoXY(72, 6);
	cout << "TAC GIA";
	gotoXY(97, 6);
	cout << "THE LOAI";
	gotoXY(112, 6);
	cout << "NAM XUAT BAN";
	gotoXY(128, 6);
	cout << "SO TRANG";
	gotoXY(140, 6);
	cout << "SO LUONG SACH";
}

void VeKhungThongTin_DauSach()
{
	VeKhungCH(5, 5, 165, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 5; i < 170; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(12, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(26, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(55, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(85, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(105, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(120, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(133, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(148, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(8, 6);
	cout << "STT";
	gotoXY(14, 6);
	cout << "MA DAU SACH";
	gotoXY(35, 6);
	cout << "TEN DAU SACH";
	gotoXY(67, 6);
	cout << "TAC GIA";
	gotoXY(92, 6);
	cout << "THE LOAI";
	gotoXY(107, 6);
	cout << "NAM XUAT BAN";
	gotoXY(123, 6);
	cout << "SO TRANG";
	gotoXY(138, 6);
	cout << "MA SACH";
	gotoXY(153, 6);
	cout << "TRANG THAI SACH";
}

void VeKhungDocGiaQuaHan()
{
	int quaox = 7;
	VeKhungCH(10 + quaox, 5, 140, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 12 + quaox; i < 150 + quaox; i++)
	{
		gotoXY(i, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(17 + quaox, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(30 + quaox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(65 + quaox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(77 + quaox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(114 + quaox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(130 + quaox, i);
		cout << " ";
	}
	TextColor(241);
	gotoXY(quaox + 13, 6);
	cout << "STT";
	gotoXY(quaox + 19, 6);
	cout << "MA DOC GIA";
	gotoXY(quaox + 40, 6);
	cout << "TEN DOC GIA";
	quaox += 5;
	gotoXY(quaox + 63, 6);
	cout << "MA SACH";
	gotoXY(quaox + 88, 6);
	cout << "TEN SACH";
	gotoXY(quaox + 113, 6);
	cout << "NGAY MUON";
	gotoXY(quaox + 128, 6);
	cout << "SO NGAY QUA HAN";
}

void VeKhungDauSachTheoLanMuon()
{
	int quaOx = 15;
	int ox = 12;
	VeKhungCH(10 + quaOx, 5, 114 + quaOx, 34, true, BLUE);
	// 2 thanh ngang
	for (int i = 12; i < 124 + quaOx; i++)
	{
		gotoXY(i + quaOx, 7);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	for (int i = 6; i < 39; i++)
	{
		gotoXY(17 + quaOx, i);
		cout << " ";
	}
	for (int i = 6; i < 39; i++)
	{
		gotoXY(31 + quaOx, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(60 + quaOx + ox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(90 + quaOx + ox, i);
		cout << " ";
	}

	for (int i = 6; i < 39; i++)
	{
		gotoXY(110 + quaOx + ox, i);
		cout << " ";
	}


	TextColor(241);
	gotoXY(quaOx + 13, 6);
	cout << "STT";
	gotoXY(quaOx + 19, 6);
	cout << "MA DAU SACH";
	gotoXY(quaOx + 45, 6);
	cout << "TEN DAU SACH";
	gotoXY(quaOx + 72 + ox, 6);
	cout << "TAC GIA";
	gotoXY(quaOx + 97 + ox, 6);
	cout << "THE LOAI";
	gotoXY(quaOx + 114 + ox, 6);
	cout << "SO LAN MUON";
}

void VeKhungDauSach()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	// ma 6 ky tu
	for (int i = 11; i < 33; i++)
	{
		gotoXY(10, i);
		cout << " ";
	}
	// ten sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(45, i);
		cout << " ";
	}
	//ten TG
	for (int i = 11; i < 33; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}
	// The loai
	for (int i = 11; i < 33; i++)
	{
		gotoXY(87, i);
		cout << " ";
	}
	//so trang
	for (int i = 11; i < 33; i++)
	{
		gotoXY(100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(4, 11);
	cout << "ISBN";
	gotoXY(22, 11);
	cout << "TEN DAU SACH";
	gotoXY(52, 11);
	cout << "TEN TAC GIA";
	gotoXY(75, 11);
	cout << "THE LOAI";
	gotoXY(90, 11);
	cout << "SO TRANG";
	gotoXY(102, 11);
	cout << "NAM SAN XUAT";
}

void VeKhungDauSach_TheoTheLoai()
{
	TextColor(25);
	// 2 thanh ngang
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 16);
		cout << " ";
	}
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 18);
		cout << " ";
	}
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 31);
		cout << " ";
	}
	//STT
	for (int i = 16; i < 31; i++)
	{
		gotoXY(123, i);
		cout << " ";
	}
	for (int i = 16; i < 31; i++)
	{
		gotoXY(165, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(118, 17);
	cout << "STT";
	gotoXY(140, 17);
	cout << "THE LOAI";
	gotoXY(167, 17);
	cout << "SL SACH";
}

void VeKhungQuyenSach_DangMuon()
{
	TextColor(25);
	// 2 thanh ngang
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 19);
		cout << " ";
	}
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 21);
		cout << " ";
	}
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 29);
		cout << " ";
	}
	//STT
	for (int i = 19; i < 29; i++)
	{
		gotoXY(119, i);
		cout << " ";
	}
	for (int i = 19; i < 29; i++)
	{
		gotoXY(129, i);
		cout << " ";
	}
	for (int i = 19; i < 29; i++)
	{
		gotoXY(162, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(116, 20);
	cout << "STT";
	gotoXY(121, 20);
	cout << "MA SACH";
	gotoXY(140, 20);
	cout << "TEN SACH";
	gotoXY(165, 20);
	cout << "NGAY MUON";
}

void VeKhungQuyenSach_DangMuon_Part1()
{
	TextColor(25);
	// 2 thanh ngang
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 4);
		cout << " ";
	}
	for (int i = 116; i < 175; i++)
	{
		gotoXY(i, 6);
		cout << " ";
	}
	//STT
	for (int i = 4; i < 12; i++)
	{
		gotoXY(119, i);
		cout << " ";
	}
	for (int i = 4; i < 12; i++)
	{
		gotoXY(129, i);
		cout << " ";
	}
	for (int i = 4; i < 12; i++)
	{
		gotoXY(162, i);
		cout << " ";
	}

	TextColor(241);
	gotoXY(116, 5);
	cout << "STT";
	gotoXY(121, 5);
	cout << "MA SACH";
	gotoXY(140, 5);
	cout << "TEN SACH";
	gotoXY(165, 5);
	cout << "NGAY MUON";
}

void VeKhungDauSach_MuonSach()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	// ma 6 ky tu
	for (int i = 11; i < 33; i++)
	{
		gotoXY(10, i);
		cout << " ";
	}
	// ten sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(45, i);
		cout << " ";
	}
	//ten TG
	for (int i = 11; i < 33; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}
	// The loai
	for (int i = 11; i < 33; i++)
	{
		gotoXY(87, i);
		cout << " ";
	}
	//so trang
	for (int i = 11; i < 33; i++)
	{
		gotoXY(100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(4, 11);
	cout << "ISBN";
	gotoXY(22, 11);
	cout << "TEN DAU SACH";
	gotoXY(52, 11);
	cout << "TEN TAC GIA";
	gotoXY(75, 11);
	cout << "THE LOAI";
	gotoXY(90, 11);
	cout << "SL SACH";
	gotoXY(102, 11);
	cout << "SACH CON LAI";
	TextColor(116);
	gotoXY(90, 6);
	cout << "SO NGUOI MUON: ";

}

void VeKhungTraSach()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	// ma 6 ky tu
	for (int i = 11; i < 33; i++)
	{
		gotoXY(10, i);
		cout << " ";
	}
	// ten sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(45, i);
		cout << " ";
	}
	//ten TG
	for (int i = 11; i < 33; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}
	// The loai
	for (int i = 11; i < 33; i++)
	{
		gotoXY(87, i);
		cout << " ";
	}
	//ma 1 quyen sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(4, 11);
	cout << "ISBN";
	gotoXY(22, 11);
	cout << "TEN DAU SACH";
	gotoXY(52, 11);
	cout << "TEN TAC GIA";
	gotoXY(75, 11);
	cout << "THE LOAI";
	gotoXY(91, 11);
	cout << "MA SACH";
	gotoXY(103, 11);
	cout << "NGAY MUON";
}

void VeKhungDMS()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//5 thanh doc
	// ma 6 ky tu
	for (int i = 11; i < 33; i++)
	{
		gotoXY(10, i);
		cout << " ";
	}
	// ten sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(45, i);
		cout << " ";
	}
	//ten TG
	for (int i = 11; i < 33; i++)
	{
		gotoXY(70, i);
		cout << " ";
	}
	// The loai
	for (int i = 11; i < 33; i++)
	{
		gotoXY(87, i);
		cout << " ";
	}
	//so trang
	for (int i = 11; i < 33; i++)
	{
		gotoXY(100, i);
		cout << " ";
	}
	// nam san xuat
	TextColor(241);
	gotoXY(4, 11);
	cout << "ISBN";
	gotoXY(22, 11);
	cout << "TEN DAU SACH";
	gotoXY(52, 11);
	cout << "TEN TAC GIA";
	gotoXY(75, 11);
	cout << "THE LOAI";
	gotoXY(90, 11);
	cout << "SL SACH";
	gotoXY(102, 11);
	cout << "SACH CON LAI";
}

void VeKhungSachTrongDMS()
{
	VeKhungCH(0, 8, 114, 25, true, BLUE);
	// 2 thanh ngang
	for (int i = 2; i < 114; i++)
	{
		gotoXY(i, 10);
		cout << " ";
	}
	for (int i = 0; i < 175; i++)
	{
		gotoXY(i, 12);
		cout << " ";
	}

	TextColor(25);
	//2 thanh doc
	// ma sach
	for (int i = 11; i < 33; i++)
	{
		gotoXY(20, i);
		cout << " ";
	}
	// vi tri
	for (int i = 11; i < 33; i++)
	{
		gotoXY(90, i);
		cout << " ";
	}
	// trang thai
	TextColor(241);
	gotoXY(7, 11);
	cout << "MA SACH";
	gotoXY(50, 11);
	cout << "VI TRI";
	gotoXY(98, 11);
	cout << "TRANG THAI";
	Ve_HOTKEY_DMS();
	Ve_HOTKEY();
}

void InCauThongBao(string thongBao) {
	TextColor(252);
	gotoXY(25, 7);
	cout << thongBao;
	Sleep(1000);
	gotoXY(25, 7);
	cout << "                                                                      ";
	TextColor(241);
}
//============================================== XOA KHUNG DO HOA =====================================

void XoaKhungThaoTac()
{
	gotoXY(116, 14);
	for (int i = 14; i < 35; i++)
	{
		for (int j = 1; j < 60; j++)
			cout << " ";
		gotoXY(116, i);
	}

}

void XoaKhungLuaChon()
{
	gotoXY(116, 2);
	for (int i = 1; i < 12; i++)
	{
		for (int j = 1; j < 60; j++)
			cout << " ";
		gotoXY(116, i);
	}

}

void XoaTrongKhung1()
{
	int doDaiMa = 13;
	int doDaiHo = 34;
	int doDaiTen = 14;
	int doDaiPhai = 18;
	int doDaiTrangThai = 12;
	int doDaiSL = 16;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiHo; j++)
			cout << " ";

		dis += doDaiHo + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiPhai; j++)
			cout << " ";
		dis += doDaiPhai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTrangThai; j++)
			cout << " ";
		dis += doDaiTrangThai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiSL; j++)
			cout << " ";
	}
}

void XoaTrongKhungMuonTra()
{
	int doDaiMa = 13;
	int doDaiHo = 37;
	int doDaiTen = 11;
	int doDaiPhai = 14;
	int doDaiTrangThai = 12;
	int doDaiSL = 20;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiHo; j++)
			cout << " ";

		dis += doDaiHo + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiPhai; j++)
			cout << " ";
		dis += doDaiPhai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTrangThai; j++)
			cout << " ";
		dis += doDaiTrangThai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiSL; j++)
			cout << " ";
	}
}

void XoaTrongKhungTraSach()
{
	int doDaiMa = 8;
	int doDaiHo = 34;
	int doDaiTen = 24;
	int doDaiPhai = 16;
	int doDaiTrangThai = 12;
	int doDaiNamXB = 13;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiHo; j++)
			cout << " ";

		dis += doDaiHo + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiPhai; j++)
			cout << " ";
		dis += doDaiPhai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTrangThai; j++)
			cout << " ";
		dis += doDaiTrangThai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiNamXB; j++)
			cout << " ";
	}
}

void XoaKhung()
{
	for (int i = 1; i < 44; i++)
	{
		gotoXY(2, i);
		for (int j = 0; j < 173; j++)
		{
			cout << " ";
		}
	}
}

void XoaTrongKhung2()
{
	int doDaiMa = 8;
	int doDaiTen = 34;
	int doDaiTacGia = 24;
	int doDaiTheLoai = 16;
	int doDaiSoTrang = 12;
	int doDaiNamXB = 13;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTacGia; j++)
			cout << " ";

		dis += doDaiTacGia + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTheLoai; j++)
			cout << " ";

		dis += doDaiTheLoai + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiSoTrang; j++)
			cout << " ";

		dis += doDaiSoTrang + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiNamXB; j++)
			cout << " ";
	}
}

void XoaTrongKhungSach()
{
	int doDaiMa = 18;
	int doDaiTen = 69;
	int doDaiTacGia = 23;
	int dis = 2;
	gotoXY(2, 13);
	for (int i = 0; i < 20; i++)
	{
		dis = 2;
		gotoXY(dis, 13 + i);
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiMa; j++)
			cout << " ";
		dis += doDaiMa + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTen; j++)
			cout << " ";

		dis += doDaiTen + 1;
		gotoXY(dis, 13 + i);
		for (int j = 0; j < doDaiTacGia; j++)
			cout << " ";
	}
}

void XoaKhungDMS() {
	for (int i = 1; i < 34; i++)
	{
		gotoXY(2, i);
		for (int j = 0; j < 112; j++)
		{
			cout << " ";
		}
	}
}

void XoaKhungSachTrongDMS() {
	for (int i = 1; i < 34; i++)
	{
		gotoXY(2, i);
		for (int j = 0; j < 112; j++)
		{
			cout << " ";
		}
	}
	for (int i = 2; i < 8; i++)
	{
		gotoXY(117, i);
		for (int j = 0; j <= 45; j++)
		{
			cout << " ";
		}
	}
}

void XoaKhungDocGiaTheoMaTen() {
	for (int i = 8; i < 38; i++)
	{
		gotoXY(22 + 15, i);
		for (int j = 35; j < 147; j++)
		{
			cout << " ";
		}

	}
}

void XoaKhungLichSuDocGia_MuonTra() {
	for (int i = 8; i < 38; i++)
	{
		gotoXY(22, i);
		for (int j = 35; j < 147; j++)
		{
			cout << " ";
		}

	}
}

void XoaKhungDauSach_TheLoai() {
	for (int i = 8; i < 38; i++)
	{
		gotoXY(12, i);
		for (int j = 12; j < 150; j++)
		{
			cout << " ";
		}

	}
}

void XoaKhungDauSach_ThongTin() {
	for (int i = 8; i < 38; i++)
	{
		gotoXY(7, i);
		for (int j = 7; j < 169; j++)
		{
			cout << " ";
		}

	}
}

void XoaKhungDauSach_LanMuon() {
	for (int i = 8; i < 39; i++)
	{
		gotoXY(28, i);
		for (int j = 28; j < 150; j++)
		{
			cout << " ";
		}

	}
}

void XoaKhungDocGia_QuaHan() {
	int quaox = 7;
	for (int i = 8; i < 39; i++)
	{
		gotoXY(12 + quaox, i);
		for (int j = 12 + quaox; j < 145 + quaox; j++)
		{
			cout << " ";
		}

	}
}
//============================================== THAO TAC VOI DOC GIA =====================================

// CHINH SUA DOC GIA
void chinhSuaDocGia(NODE_TREE*& node)
{
	TextColor(241);
	bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	bool kt = 1;
	int Pos = 1;
	NODE_TREE* docGia = new NODE_TREE;
	// gan data node vao data doc gia
	docGia->data = node->data;
	int vtx = 120;
	int tthai = 0;
	int phai = 0;
	gotoXY(130, 14);
	cout << "CHINH SUA DOC GIA";
	gotoXY(vtx, 16);
	cout << "MA DOC GIA: " << docGia->data.MaThe;
	gotoXY(vtx, 18);
	cout << "HO DOC GIA: " << docGia->data.Ho;
	gotoXY(vtx, 20);
	cout << "TEN DOC GIA: " << docGia->data.Ten;
	gotoXY(vtx, 22);
	cout << "PHAI: ";
	gotoXY(vtx + 10, 23);
	TextColor(121);
	cout << "NAM";
	gotoXY(vtx + 20, 23);
	TextColor(121);
	cout << "NU";


	if (docGia->data.Phai == "NAM")
	{
		gotoXY(vtx + 10, 23);
		TextColor(207);
		phai = 1;
		cout << "NAM";
	}
	else
	{
		gotoXY(vtx + 20, 23);
		phai = 0;
		TextColor(207);
		cout << "NU";
	}
	TextColor(241);
	gotoXY(vtx, 25);
	cout << "TRANG THAI:";

	gotoXY(vtx + 5, 27);
	TextColor(121);
	cout << "1. HOAT DONG";
	gotoXY(vtx + 25, 27);
	TextColor(121);
	cout << "0. KHOA THE";

	if (docGia->data.TrangThai)
	{
		gotoXY(vtx + 5, 27);
		TextColor(207);
		cout << "1. HOAT DONG";
		tthai = 1;
	}
	else
	{
		gotoXY(vtx + 25, 27);
		TextColor(207);
		cout << "0. KHOA THE";
		tthai = 0;
	}

	gotoXY(vtx + 12 + docGia->data.Ho.length(), 18);
	if (docGia->data.Ho.length() > 0) space1 = 1;
	if (docGia->data.Ten.length() > 0) space2 = 1;
	if (docGia->data.Ho.length() > 0) kt = 0;// chuoi KHONG? bi rong
	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
					if (KiemTraQuaHan_1_DocGia(docGia->data.List_MuonTra) > 0 || docGia->data.SoLuongSachDangMuon > 0)
					{
						Pos = 3;
						goto vitri3;
					}
				vitri4:
					if (tthai)
					{
						gotoXY(vtx + 25, 27);
						TextColor(121);
						cout << "0. KHOA THE";

						gotoXY(vtx + 5, 27);
						TextColor(207);
						cout << "1. HOAT DONG";

					}
					else
					{
						gotoXY(vtx + 5, 27);
						TextColor(121);
						cout << "1. HOAT DONG";

						gotoXY(vtx + 25, 27);
						TextColor(207);
						cout << "0. KHOA THE";

					}

					while (true)
					{
						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207);
									cout << "0. KHOA THE";
									tthai = 0;
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207);
									cout << "1. HOAT DONG";
									tthai = 1;
								}

							}
							if (k1 == KEYLEFT)
							{
								if (tthai == 1)
								{

									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207);
									cout << "0. KHOA THE";
									tthai = 0;
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207);
									cout << "1. HOAT DONG";
									tthai = 1;
								}

							}
							else if (k1 == KEYUP)
							{
								goto vitri3;
								break;
							}
							else if (k1 == KEYDOWN) {
								goto vitri1;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
						else if (temp1 == KEYESC)
						{
							k = KEYESC;
							goto exit;
						}
					}
					Pos = 4;
				}
				else if (Pos == 2)
				{
				vitri1:
					gotoXY(vtx + 12 + docGia->data.Ho.length(), 18);
					Pos = 1;
				}
				else if (Pos == 3)
				{
				vitri2:
					gotoXY(vtx + 13 + docGia->data.Ten.length(), 20);
					Pos = 2;
				}
				else if (Pos == 4)
				{
				vitri3:
					if (phai == 0)
					{
						gotoXY(vtx + 10, 23);
						TextColor(121);
						cout << "NAM";
						gotoXY(vtx + 20, 23);
						TextColor(207);
						cout << "NU";
					}
					else
					{

						gotoXY(vtx + 20, 23);
						TextColor(121);
						cout << "NU";
						gotoXY(vtx + 10, 23);
						TextColor(207);
						cout << "NAM";
					}

					while (true)
					{

						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (phai)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";
									phai = 1;
								}

							}
							if (k1 == KEYLEFT)
							{
								if (phai)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";
									phai = 1;
								}
							}
							else if (k1 == KEYUP)
							{
								Pos = 2;
								goto vitri2;
								break;
							}
							else if (k1 == KEYDOWN)
							{
								if (KiemTraQuaHan_1_DocGia(docGia->data.List_MuonTra) > 0 || docGia->data.SoLuongSachDangMuon > 0)
								{
									goto vitri1;
									break;
								}
								Pos = 4;
								goto vitri4;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
						else if (temp1 == KEYESC)
						{
							k = KEYESC;
							goto exit;
						}
					}
				}

			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
				vt2:
					gotoXY(vtx + 13 + docGia->data.Ten.length(), 20);
					Pos = 2;

				}
				else if (Pos == 2)
				{
				vt3:
					if (phai == 0)
					{
						gotoXY(vtx + 20, 23);
						TextColor(207);
						cout << "NU";

					}
					else
					{
						gotoXY(vtx + 10, 23);
						TextColor(207);
						cout << "NAM";
					}

					while (true)
					{
						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (phai == 1)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";

									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";

									phai = 1;
								}

							}
							if (k1 == KEYLEFT)
							{
								if (phai == 1)
								{

									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else if (phai == 0)
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";

									phai = 1;
								}
							}
							else if (k1 == KEYUP)
							{
								k = KEYUP;
								goto vt2;
								break;
							}
							else if (k1 == KEYDOWN)
							{
								k = KEYDOWN;
								if (KiemTraQuaHan_1_DocGia(docGia->data.List_MuonTra) > 0 || docGia->data.SoLuongSachDangMuon > 0)
								{
									Pos = 1;
									goto vt1;
									break;
								}
								goto vt4;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
						else if (temp1 == KEYESC)
						{
							k = KEYESC;
							goto exit;
						}
					}
				}
				else if (Pos == 3)
				{

				vt4:
					if (tthai)
					{
						gotoXY(vtx + 5, 27);
						TextColor(207);
						cout << "1. HOAT DONG";
					}
					else
					{
						gotoXY(vtx + 25, 27);
						TextColor(207);
						cout << "0. KHOA THE";
					}

					while (true)
					{
						char k1 = getChar();
						int temp1 = k1;

						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207); tthai = 0;
									cout << "0. KHOA THE";
								}
								else
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207); tthai = 1;
									cout << "1. HOAT DONG";
								}

							}
							if (k1 == KEYLEFT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207); tthai = 0;
									cout << "0. KHOA THE";
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207); tthai = 1;
									cout << "1. HOAT DONG";
								}

							}
							else if (k1 == KEYUP)
							{
								k = KEYUP;
								goto vt3;

								break;
							}
							else if (k1 == KEYDOWN) {
								k = KEYDOWN;
								goto vt1;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
						else if (temp1 == KEYESC)
						{
							k = KEYESC;
							goto exit;
						}
					}
					Pos = 4;
				}
				else if (Pos == 4)
				{
				vt1:
					gotoXY(vtx + 12 + docGia->data.Ho.length(), 18);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// n?u là phím enter
		{
		enter:
			// vi pham chuoi rong
			if (kt == 1 || docGia->data.Ten.length() == 0 || docGia->data.Ho.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (docGia->data.Ho.length() == 0)
				{
					gotoXY(vtx + 12 + docGia->data.Ho.length(), 18);
					Pos = 1;
					continue;
				}
				if (docGia->data.Ten.length() == 0)
				{
					gotoXY(vtx + 13 + docGia->data.Ten.length(), 20);
					Pos = 2;
					continue;
				}
			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && docGia->data.Ten.length() != 0 && docGia->data.Ho.length() != 0)
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{

					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = docGia->data.Ten[docGia->data.Ten.size() - 1];
					//cout<<d;
					//getChar();
					if (d == 32 || d == 0)
					{
						docGia->data.Ten.erase(docGia->data.Ten.size() - 1);
					}
					if (docGia->data.Ho[docGia->data.Ho.length() - 1] == 32 || docGia->data.Ho[docGia->data.Ho.length() - 1] == 0)
					{
						docGia->data.Ho.erase(docGia->data.Ho.length() - 1);
					}

					docGia->data.TrangThai = tthai;
					if (phai == 1)

						docGia->data.Phai = "NAM";
					else
						docGia->data.Phai = "NU";

					node->data = docGia->data;
					ShowCur(false);
					return;
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                    ";
					if (Pos == 1)
					{
						gotoXY(vtx + 12 + docGia->data.Ho.length(), 18);
					}
					if (Pos == 2) {
						gotoXY(vtx + 13 + docGia->data.Ten.length(), 20);

					}
					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
		exit:
			gotoXY(vtx, 29);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";
				gotoXY(vtx + 13 + docGia->data.Ten.length(), 20);
				Pos = 2;
				continue;
			}
		}
		else
		{
			TextColor(241);
			// nhap ho
			if (Pos == 1) {
				if (k == SPACE)
				{
					if (docGia->data.Ho.length() == 0)
					{
						continue;
					}
					else if (docGia->data.Ho.length() <= 20 && space2 == 1 && docGia->data.Ho[docGia->data.Ho.length() - 1] != 20 && docGia->data.Ho[docGia->data.Ho.length() - 1] != ' ')
					{
						docGia->data.Ho.push_back(k);
						space2 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				// chuoi KHONG? rong
				kt = 0;
				if (k == KEYBACK && (docGia->data.Ho.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XulyNhap_Dulieu(docGia->data.Ho, k, kt);
					space2 = 1;
					continue;
				}
				if (docGia->data.Ho.length() <= 20)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(docGia->data.Ho, k, kt);
					space2 = 1;
				}

			}
			// nhap ten
			else if (Pos == 2)
			{
				if (k == SPACE)
				{
					if (docGia->data.Ten.length() == 0)
					{
						continue;
					}
					else if (space1 == 1 && docGia->data.Ten.length() <= 8 && docGia->data.Ten[docGia->data.Ten.length() - 1] != 8 && docGia->data.Ten[docGia->data.Ten.length() - 1] != ' ')
					{
						docGia->data.Ten.push_back(k);
						cout << k;
						space1 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && docGia->data.Ten.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(docGia->data.Ten, k, kt);
					space1 = 1;
					continue;
				}
				if (docGia->data.Ten.length() <= 7)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(docGia->data.Ten, k, kt);
					space1 = 1;
				}

			}
		}
	}

}

//THEM DOC GIA
void ThemDocGia(NODE_TREE*& docGia)
{
	bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	int Pos = 1;
	bool kt = 1;
	TextColor(241);
	THE_DOCGIA docGiaMoi;
	// lay ma ngau nhien
	int maDocGia = Random();
	docGiaMoi.MaThe = maDocGia;
	int vtx = 120;
	int tthai = 0;//khoa the
	int phai = 0;// nu
	gotoXY(130, 14);
	cout << "THEM DOC GIA VAO THU VIEN";
	gotoXY(vtx, 16);
	cout << "MA DOC GIA: " << maDocGia;
	gotoXY(vtx, 18);
	cout << "HO DOC GIA: ";
	gotoXY(vtx, 20);
	cout << "TEN DOC GIA: ";
	gotoXY(vtx, 22);
	cout << "PHAI: ";

	gotoXY(vtx + 10, 23);
	TextColor(207);
	cout << "NAM";
	phai = 1;
	gotoXY(vtx + 20, 23);
	TextColor(121);
	cout << "NU";

	TextColor(241);
	gotoXY(vtx, 25);
	cout << "TRANG THAI:";

	gotoXY(vtx + 5, 27);
	TextColor(207);
	cout << "1. HOAT DONG";
	tthai = 1;

	gotoXY(vtx + 25, 27);
	TextColor(121);
	cout << "0. KHOA THE";

	gotoXY(vtx + 12, 18);
	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
				vitri4:
					if (tthai)
					{
						gotoXY(vtx + 25, 27);
						TextColor(121);
						cout << "0. KHOA THE";

						gotoXY(vtx + 5, 27);
						TextColor(207);
						cout << "1. HOAT DONG";

					}
					else
					{
						gotoXY(vtx + 5, 27);
						TextColor(121);
						cout << "1. HOAT DONG";

						gotoXY(vtx + 25, 27);
						TextColor(207);
						cout << "0. KHOA THE";

					}

					while (true)
					{
						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207);
									cout << "0. KHOA THE";
									tthai = 0;
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207);
									cout << "1. HOAT DONG";
									tthai = 1;
								}

							}
							if (k1 == KEYLEFT)
							{
								if (tthai == 1)
								{

									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207);
									cout << "0. KHOA THE";
									tthai = 0;
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207);
									cout << "1. HOAT DONG";
									tthai = 1;
								}

							}
							else if (k1 == KEYUP)
							{
								goto vitri3;
								break;
							}
							else if (k1 == KEYDOWN) {
								goto vitri1;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
					}
					Pos = 4;
				}
				else if (Pos == 2)
				{
				vitri1:
					gotoXY(vtx + 12 + docGiaMoi.Ho.length(), 18);
					Pos = 1;
				}
				else if (Pos == 3)
				{
				vitri2:
					gotoXY(vtx + 13 + docGiaMoi.Ten.length(), 20);
					Pos = 2;
				}
				else if (Pos == 4)
				{
				vitri3:
					if (phai == 0)
					{
						gotoXY(vtx + 10, 23);
						TextColor(121);
						cout << "NAM";
						gotoXY(vtx + 20, 23);
						TextColor(207);
						cout << "NU";
					}
					else
					{

						gotoXY(vtx + 20, 23);
						TextColor(121);
						cout << "NU";
						gotoXY(vtx + 10, 23);
						TextColor(207);
						cout << "NAM";
					}

					while (true)
					{

						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (phai)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";
									phai = 1;
								}

							}
							else if (k1 == KEYLEFT)
							{
								if (phai)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";
									phai = 1;
								}
							}
							else if (k1 == KEYUP)
							{
								Pos = 2;
								goto vitri2;
								break;
							}
							else if (k1 == KEYDOWN)
							{
								Pos = 1;
								goto vitri4;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
					}
				}

			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
				vt2:
					gotoXY(vtx + 13 + docGiaMoi.Ten.length(), 20);
					Pos = 2;

				}
				else if (Pos == 2)
				{
				vt3:
					if (phai == 0)
					{
						gotoXY(vtx + 20, 23);
						TextColor(207);
						cout << "NU";

					}
					else
					{
						gotoXY(vtx + 10, 23);
						TextColor(207);
						cout << "NAM";
					}

					while (true)
					{
						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (phai == 1)
								{
									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";

									phai = 0;
								}
								else
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";

									phai = 1;
								}

							}
							else if (k1 == KEYLEFT)
							{
								if (phai == 1)
								{

									gotoXY(vtx + 10, 23);
									TextColor(121);
									cout << "NAM";
									gotoXY(vtx + 20, 23);
									TextColor(207);
									cout << "NU";
									phai = 0;
								}
								else if (phai == 0)
								{
									gotoXY(vtx + 20, 23);
									TextColor(121);
									cout << "NU";
									gotoXY(vtx + 10, 23);
									TextColor(207);
									cout << "NAM";

									phai = 1;
								}
							}
							else if (k1 == KEYUP)
							{
								k = KEYUP;
								goto vt2;
								break;
							}
							else if (k1 == KEYDOWN)
							{
								k = KEYDOWN;
								goto vt4;
								break;
							}
						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
					}
				}
				else if (Pos == 3)
				{
				vt4:
					if (tthai)
					{
						gotoXY(vtx + 5, 27);
						TextColor(207);
						cout << "1. HOAT DONG";
					}
					else
					{
						gotoXY(vtx + 25, 27);
						TextColor(207);
						cout << "0. KHOA THE";
					}

					while (true)
					{

						char k1 = getChar();
						int temp1 = k1;
						if (temp1 == -32 || temp1 == 0)
						{
							k1 = getChar();
							if (k1 == KEYRIGHT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207); tthai = 0;
									cout << "0. KHOA THE";
								}
								else
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207); tthai = 1;
									cout << "1. HOAT DONG";
								}

							}
							else if (k1 == KEYLEFT)
							{
								if (tthai == 1)
								{
									gotoXY(vtx + 5, 27);
									TextColor(121);
									cout << "1. HOAT DONG";
									gotoXY(vtx + 25, 27);
									TextColor(207); tthai = 0;
									cout << "0. KHOA THE";
								}
								else if (tthai == 0)
								{
									gotoXY(vtx + 25, 27);
									TextColor(121);
									cout << "0. KHOA THE";
									gotoXY(vtx + 5, 27);
									TextColor(207); tthai = 1;
									cout << "1. HOAT DONG";
								}

							}
							else if (k1 == KEYUP)
							{
								k = KEYUP;
								goto vt3;

								break;
							}
							else if (k1 == KEYDOWN) {
								k = KEYDOWN;
								goto vt1;
								break;
							}

						}
						else if (temp1 == KEYENTER)
						{
							k = KEYENTER;
							goto enter;
						}
					}
					Pos = 4;
				}
				else if (Pos == 4)
				{
				vt1:
					gotoXY(vtx + 12 + docGiaMoi.Ho.length(), 18);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// n?u là phím enter
		{
		enter:
			// vi pham chuoi rong
			if (kt == 1 || docGiaMoi.Ten.length() == 0 || docGiaMoi.Ho.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (docGiaMoi.Ho.length() == 0)
				{
					gotoXY(vtx + 12 + docGiaMoi.Ho.length(), 18);
					Pos = 1;
					continue;
				}
				if (docGiaMoi.Ten.length() == 0)
				{
					gotoXY(vtx + 13 + docGiaMoi.Ten.length(), 20);
					Pos = 2;
					continue;
				}
			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && docGiaMoi.Ten.length() != 0 && docGiaMoi.Ho.length() != 0)
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{

					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = docGiaMoi.Ten[docGiaMoi.Ten.size() - 1];
					//cout<<d;
					//getChar();
					if (d == 32 || d == 0)
					{
						docGiaMoi.Ten.erase(docGiaMoi.Ten.size() - 1);
					}
					if (docGiaMoi.Ho[docGiaMoi.Ho.length() - 1] == 32 || docGiaMoi.Ho[docGiaMoi.Ho.length() - 1] == 0)
					{
						docGiaMoi.Ho.erase(docGiaMoi.Ho.length() - 1);
					}

					docGiaMoi.TrangThai = tthai;
					if (phai == 1)

						docGiaMoi.Phai = "NAM";
					else
						docGiaMoi.Phai = "NU";
					docGiaMoi.SoLuongSachDangMuon = 0;
					KhoiTaoListMTra(docGiaMoi.List_MuonTra);
					NODE_TREE* p = KhoiTaoNodeTree(docGiaMoi);
					ThemDocGiaVaoCay(docGia, p);
					ShowCur(false);
					return;
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                    ";
					if (Pos == 1)
					{
						gotoXY(vtx + 12 + docGiaMoi.Ho.length(), 18);
					}
					if (Pos == 2) {
						gotoXY(vtx + 13 + docGiaMoi.Ten.length(), 20);

					}
					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(vtx, 29);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";
				gotoXY(vtx + 13 + docGiaMoi.Ten.length(), 20);
				Pos = 2;
				continue;
			}
		}
		else
		{
			TextColor(241);
			// nhap ho
			if (Pos == 1) {
				if (k == SPACE)
				{
					if (docGiaMoi.Ho.length() == 0)
					{
						continue;
					}
					else if (docGiaMoi.Ho.length() <= 20 && space2 == 1 && docGiaMoi.Ho[docGiaMoi.Ho.length() - 1] != 20 && docGiaMoi.Ho[docGiaMoi.Ho.length() - 1] != ' ')
					{
						docGiaMoi.Ho.push_back(k);
						space2 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				// chuoi KHONG? rong
				kt = 0;
				if (k == KEYBACK && (docGiaMoi.Ho.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XulyNhap_Dulieu(docGiaMoi.Ho, k, kt);
					space2 = 1;
					continue;
				}
				if (docGiaMoi.Ho.length() < 20)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(docGiaMoi.Ho, k, kt);
					space2 = 1;
				}

			}
			// nhap ten
			else if (Pos == 2)
			{
				if (k == SPACE)
				{
					if (docGiaMoi.Ten.length() == 0)
					{
						continue;
					}
					else if (space1 == 1 && docGiaMoi.Ten.length() <= 8 && docGiaMoi.Ten[docGiaMoi.Ten.length() - 1] != 8 && docGiaMoi.Ten[docGiaMoi.Ten.length() - 1] != ' ')
					{
						docGiaMoi.Ten.push_back(k);
						cout << k;
						space1 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && docGiaMoi.Ten.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(docGiaMoi.Ten, k, kt);
					space1 = 1;
					continue;
				}
				if (docGiaMoi.Ten.length() < 8)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(docGiaMoi.Ten, k, kt);
					space1 = 1;
				}

			}
		}
	}
}

// IN DANH SACH DOC GIA THEO TEN
void InDanhSachDocGia_TheoTen(TT_TREE tt_Tree) {
	InsertionSort_TT_Tree_Theo_Ten(tt_Tree);
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int cachTren = 9, cachNgang = 23 + 15;
	XoaKhung();
	TextColor(252);
	gotoXY(75, 2);
	cout << "DANH SACH DOC GIA TRONG THU VIEN THEO HO TEN";
	TextColor(241);
	VeKhungDocGiaTheoMaTen();
	for (int i = Pos, rong = 0, j = 0; i < tt_Tree.n && tt_Tree.arr[i] != NULL && j < 15; i++, j++)
	{
		gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.MaThe;
		gotoXY(33 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.Ho + " " + tt_Tree.arr[i]->data.Ten;
		gotoXY(73 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.Phai;
		gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
		if (tt_Tree.arr[i]->data.TrangThai)
		{
			cout << "HOAT DONG";
		}
		else
		{
			cout << "BI KHOA";
		}
		gotoXY(100 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.SoLuongSachDangMuon;
	}
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= tt_Tree.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungDocGiaTheoMaTen();
			VeKhungDocGiaTheoMaTen();
			for (int i = Pos, rong = 0, j = 0; i < tt_Tree.n && tt_Tree.arr[i] != NULL && j < 15; i++, j++)
			{
				gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.MaThe;
				gotoXY(33 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.Ho + " " + tt_Tree.arr[i]->data.Ten;
				gotoXY(73 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.Phai;
				gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
				if (tt_Tree.arr[i]->data.TrangThai)
				{
					cout << "HOAT DONG";
				}
				else
				{
					cout << "BI KHOA";
				}
				gotoXY(100 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.SoLuongSachDangMuon;
			}
		}

	}


}

// IN DANH SACH DOC GIA THEO MA
void InDanhSachDocGia_TheoMa(TT_TREE tt_Tree) {
	InsertionSort_TT_Tree_Theo_Ma(tt_Tree);
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int cachTren = 9, cachNgang = 23 + 15;
	XoaKhung();
	TextColor(252);
	gotoXY(75, 2);
	cout << "DANH SACH DOC GIA TRONG THU VIEN THEO MA";
	TextColor(241);
	VeKhungDocGiaTheoMaTen();
	for (int i = Pos, rong = 0, j = 0; i < tt_Tree.n && tt_Tree.arr[i] != NULL && j < 15; i++, j++)
	{
		gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.MaThe;
		gotoXY(33 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.Ho + " " + tt_Tree.arr[i]->data.Ten;
		gotoXY(73 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.Phai;
		gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
		if (tt_Tree.arr[i]->data.TrangThai)
		{
			cout << "HOAT DONG";
		}
		else
		{
			cout << "BI KHOA";
		}
		gotoXY(100 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_Tree.arr[i]->data.SoLuongSachDangMuon;
	}
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= tt_Tree.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungDocGiaTheoMaTen();
			VeKhungDocGiaTheoMaTen();
			for (int i = Pos, rong = 0, j = 0; i < tt_Tree.n && tt_Tree.arr[i] != NULL && j < 15; i++, j++)
			{
				gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.MaThe;
				gotoXY(33 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.Ho + " " + tt_Tree.arr[i]->data.Ten;
				gotoXY(73 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.Phai;
				gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
				if (tt_Tree.arr[i]->data.TrangThai)
				{
					cout << "HOAT DONG";
				}
				else
				{
					cout << "BI KHOA";
				}
				gotoXY(100 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_Tree.arr[i]->data.SoLuongSachDangMuon;
			}
		}

	}

}

// LIET KE CAC SACH DOC GIA DANG MUON
void InDanhSachCacSach_1_DocGia(NODE_TREE* t, LIST_DAUSACH listDS) {
	ShowCur(false);
	int cachTren = 9, cachNgang = 23;
	XoaKhung();
	TextColor(252);
	gotoXY(55, 2);
	cout << "CAC QUYEN SACH DOC GIA DANG MUON";
	gotoXY(110, 4);
	cout << t->data.Ho + " " + t->data.Ten;
	TextColor(241);

	VeKhungCacSachDocGiaDangMuon();
	int i = 0;
	string ms;
	for (NODE_MUONTRA* k = t->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.TrangThai == 0)
		{
			ms = k->data.MaSach.substr(0, 6);
			DAUSACH* ds = binarySearchDauSach(listDS, ms);
			gotoXY(1 + cachNgang, cachTren + i * 2);
			cout << i + 1;
			gotoXY(8 + cachNgang, cachTren + i * 2);
			cout << ds->MaDauSach;
			gotoXY(28 + cachNgang, cachTren + i * 2);
			cout << ds->TenSach;
			gotoXY(68 + cachNgang, cachTren + i * 2);
			cout << ds->TheLoai;
			gotoXY(84 + cachNgang, cachTren + i * 2);
			cout << k->data.MaSach;
			gotoXY(98 + cachNgang, cachTren + i * 2);
			cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
			i++;
		}

	}
	_getch();
}

//LIET KE CAC SACH DOC GIA DANG MUON
void InLichSuMuonTraSach_1_DocGia(NODE_TREE* t, LIST_DAUSACH listDS) {
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int canhTren = 9, cachNgang = 23+10;
	XoaKhung();
	TextColor(252);
	gotoXY(55, 2);
	cout << "LICH SU MUON TRA SACH CUA DOC GIA ";
	gotoXY(120, 4);
	cout<< t->data.Ho + " " + t->data.Ten;
	TextColor(241);
	VeKhungLichSuMuonTraSach();
	int i = 0;
	string ms;
	TT_MUONTRA tt_Mtra = KhoiTaoDanhSachTT_MuonTra(t->data.List_MuonTra);
	for (int i = Pos, rong = 0, j = 0; tt_Mtra.n && tt_Mtra.arr[i] != NULL && j < 15; i++, j++)
	{
		ms = tt_Mtra.arr[i]->data.MaSach.substr(0, 6);
		DAUSACH* ds = binarySearchDauSach(listDS, ms);
		gotoXY(1 + cachNgang, canhTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, canhTren + 2 * j + rong);
		cout << ds->MaDauSach;
		gotoXY(28 + cachNgang, canhTren + 2 * j + rong);
		cout << ds->TenSach;
		gotoXY(68 + cachNgang, canhTren + 2 * j + rong);
		cout << tt_Mtra.arr[i]->data.MaSach;
		gotoXY(84 + cachNgang, canhTren + 2 * j + rong);
		cout << tt_Mtra.arr[i]->data.NgayMuon.day << "/" << tt_Mtra.arr[i]->data.NgayMuon.month << "/" << tt_Mtra.arr[i]->data.NgayMuon.year;
		gotoXY(98 + cachNgang, canhTren + 2 * j + rong);
		cout << tt_Mtra.arr[i]->data.NgayTra.day << "/" << tt_Mtra.arr[i]->data.NgayTra.month << "/" << tt_Mtra.arr[i]->data.NgayTra.year;
	}
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= tt_Mtra.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungLichSuDocGia_MuonTra();
			VeKhungLichSuMuonTraSach();
			for (int i = Pos, rong = 0, j = 0; tt_Mtra.n && tt_Mtra.arr[i] != NULL && j < 15; i++, j++)
			{
				ms = tt_Mtra.arr[i]->data.MaSach.substr(0, 6);
				DAUSACH* ds = binarySearchDauSach(listDS, ms);
				gotoXY(1 + cachNgang, canhTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, canhTren + 2 * j + rong);
				cout << ds->MaDauSach;
				gotoXY(28 + cachNgang, canhTren + 2 * j + rong);
				cout << ds->TenSach;
				gotoXY(68 + cachNgang, canhTren + 2 * j + rong);
				cout << tt_Mtra.arr[i]->data.MaSach;
				gotoXY(84 + cachNgang, canhTren + 2 * j + rong);
				cout << tt_Mtra.arr[i]->data.NgayMuon.day << "/" << tt_Mtra.arr[i]->data.NgayMuon.month << "/" << tt_Mtra.arr[i]->data.NgayMuon.year;
				gotoXY(98 + cachNgang, canhTren + 2 * j + rong);
				cout << tt_Mtra.arr[i]->data.NgayTra.day << "/" << tt_Mtra.arr[i]->data.NgayTra.month << "/" << tt_Mtra.arr[i]->data.NgayTra.year;
			}
		}

	}
}

//IN DANH SACH DAU SACH THEO DOC GIA QUA HAN
void InDanhSachDocGia_QuaHan(LIST_DAUSACH listDS, TREE_DSDocGia root) {
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int cachTren = 9, cachNgang = 13 + 7;
	XoaKhung();
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	TextColor(252);
	gotoXY(75, 2);
	cout << "DANH SACH DOC GIA QUA HAN";
	TextColor(241);
	VeKhungDocGiaQuaHan();
	TT_TREE tt_Tree;
	KhoiTaoDanhSachTT_Tree(tt_Tree, root);
	LIST_DGQUAHAN list_DGQH = DanhSachDocGia_QuaHan(tt_Tree, listDS);

	for (int i = Pos, rong = 0, j = 0; i < list_DGQH.n && j < 15; i++, j++)
	{
		gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].MaThe;
		gotoXY(22 + cachNgang, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].TenDocGia;
		gotoXY(50 + cachNgang + 5, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].muonTra->MaSach;
		gotoXY(68 + cachNgang + 5, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].TenSach;
		gotoXY(100 + cachNgang + 5, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].muonTra->NgayMuon.day << "/"
			<< list_DGQH.arr[i].muonTra->NgayMuon.month << "/"
			<< list_DGQH.arr[i].muonTra->NgayMuon.year;
		gotoXY(117 + cachNgang + 5, cachTren + 2 * j + rong);
		cout << list_DGQH.arr[i].NgayQH << " NGAY";
	}
	
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) {
				if (15 < list_DGQH.n)
				{
					Pos += 15;
				}
			}
			else if (k == KEYLEFT) {
				if (15 < list_DGQH.n)
				{
					Pos -= 15;
				}
			}
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= list_DGQH.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			if (list_DGQH.n > 15)
			{
				XoaKhungDocGia_QuaHan();
				VeKhungDocGiaQuaHan();
			}
			for (int i = Pos, rong = 0, j = 0; i < list_DGQH.n && j < 15; i++, j++)
			{
				gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].MaThe;
				gotoXY(22 + cachNgang, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].TenDocGia;
				gotoXY(50 + cachNgang + 5, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].muonTra->MaSach;
				gotoXY(68 + cachNgang + 5, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].TenSach;
				gotoXY(100 + cachNgang + 5, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].muonTra->NgayMuon.day << "/"
					<< list_DGQH.arr[i].muonTra->NgayMuon.month << "/"
					<< list_DGQH.arr[i].muonTra->NgayMuon.year;
				gotoXY(117 + cachNgang + 5, cachTren + 2 * j + rong);
				cout << list_DGQH.arr[i].NgayQH << " NGAY";
			}
		}

	}


}

NODE_TREE* InDanhSachDocGia(TREE_DSDocGia& list_DG, LIST_DAUSACH listDS)
{
	system("color f1");
	// DANH SACH TUYEN TINH DOC GIA DE XU LY KHI TIM KIEM
	TT_TREE tt_Tree;
	KhoiTaoDanhSachTT_Tree(tt_Tree, list_DG);
	InsertionSort_TT_Tree_Theo_Ma(tt_Tree);
	char key[7] = "";
	system("cls");
start:
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungDocGia();
	int size = 0;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 13;
	int doDaiHo = 34;
	int doDaiTen = 14;
	int doDaiPhai = 18;
	int doDaiTrangThai = 12;
	int doDaiSLSach = 16;

	int disTance;

	for (int i = 0, rong = 13; i < y && i < tt_Tree.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.MaThe;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiHo; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.Ho;
		disTance += doDaiHo + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);

		cout << tt_Tree.arr[i + Pos]->data.Ten;
		disTance += doDaiTen + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiPhai; h++)
			cout << " ";
		gotoXY(disTance + 6, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.Phai;
		disTance += doDaiPhai + 1;
		//Trang Thai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTrangThai; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		if (tt_Tree.arr[i + Pos]->data.TrangThai == 1)
		{
			cout << "HOAT DONG";
			doDaiTrangThai -= 2;
		}
		else
		{
			cout << "BI KHOA";
		}
		doDaiTrangThai = 12;
		disTance += doDaiTrangThai + 1;
		// sach muon
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSLSach; h++)
			cout << " ";
		gotoXY(disTance + 4, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.SoLuongSachDangMuon << " QUYEN";
	}


	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);
		TextColor(241);
		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {

			if (tt_Tree.arr[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON CHINH SUA DOC GIA KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                            ";
				ShowCur(true);
				NODE_TREE* node = TimNodedocGiaTrongTree(list_DG, tt_Tree.arr[Sta + Pos]->data.MaThe);
				chinhSuaDocGia(node);
				XoaKhungThaoTac();
				TextColor(241);
				gotoXY(15 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                ";

			}

		}
		else if (k == KEYESC) return NULL;
		else if (k == 0)
		{
			k = getChar();
			if (k == KEYF3)
			{
				//system("cls");
				if (tt_Tree.arr[Sta + Pos] == NULL) continue;
				if (tt_Tree.arr[Sta + Pos]->data.SoLuongSachDangMuon > 0 || tt_Tree.arr[Sta + Pos]->data.List_MuonTra.pHead != NULL)
				{
					InCauThongBao("DOC GIA DANG MUON SACH KHONG THE XOA !!!");
					continue;
				}
				char select;
				gotoXY(25, 7);
				TextColor(252);
				cout << "BAN CO MUON XOA DOC GIA NAY KHONG? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{

					XoaNodeTrongTree(list_DG, tt_Tree.arr[Sta + Pos]->data.MaThe);
					gotoXY(25, 7);
					cout << "                                           ";
					XoaTrongKhung1();
					TextColor(241);
				}
				else
				{
					TextColor(241);
					if (select == -32 || select == 0)
					{
						select = getChar();

					}
					ShowCur(false);
					gotoXY(25, 7);
					cout << "                                           ";
					TextColor(241);
				}

			}
			else if (k == KEYF5)
			{
				ShowCur(true);
				char select;
				gotoXY(25, 7);
				TextColor(252);
				cout << "BAN CO MUON THEM DOC GIA MOI HAY KHONG? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{
					TextColor(241);
					gotoXY(25, 7);
					cout << "                                                  ";
					ThemDocGia(list_DG);
					ShowCur(false);
					XoaKhungThaoTac();
					TextColor(241);
					gotoXY(15 + size, 9);

				}
				else
				{
					TextColor(241);
					if (select == -32)
					{
						select = getChar();
					}
					ShowCur(false);
					gotoXY(25, 7);
					cout << "                                                  ";
					continue;
				}
			}
			else if (k == KEYF6) {
				TT_TREE tt_Tree_main;
				KhoiTaoDanhSachTT_Tree(tt_Tree_main, list_DG);
				InDanhSachDocGia_TheoTen(tt_Tree_main);
				XoaKhung();
				VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhungDocGia();

			}
			else if (k == KEYF7) {
				TT_TREE tt_Tree_main;
				KhoiTaoDanhSachTT_Tree(tt_Tree_main, list_DG);
				InDanhSachDocGia_TheoMa(tt_Tree_main);
				XoaKhung();
				VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhungDocGia();

			}
			else if (k == KEYF8) {
				InDanhSachCacSach_1_DocGia(tt_Tree.arr[Pos + Sta], listDS);
				XoaKhung();
				VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhungDocGia();
			}
			else if (k == KEY_F9)
			{
				// in danh sach theo tung the loai
				InLichSuMuonTraSach_1_DocGia(tt_Tree.arr[Pos + Sta], listDS);
				XoaKhung();
				VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}

				VeKhungDocGia();
			}
			else if (k == 0)
			{
				continue;
			}
			else continue;
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 10; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhung1();
			}
			else if (f == KEYESC) return NULL;
			else if ((f < 58 && f > 47)) {
				if (strlen(key) == 6)
				{
					InCauThongBao("MA DOC GIA KHONG? VUOT QUA 6 SO");
					continue;
				}
				if (size == 26) continue;
				if ((f >= '0' && f <= '9'))
				{
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 10; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhung1();
				}
			}
			gotoXY(0, 0);
		}
		TT_TREE tt_Tree_main;
		KhoiTaoDanhSachTT_Tree(tt_Tree_main, list_DG);
		InsertionSort_TT_Tree_Theo_Ma(tt_Tree_main);
		tt_Tree = TraLaiDS_DocGia(tt_Tree_main, key, size);

		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 10; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= tt_Tree.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}

		if (Pos <= -1) Pos = 0;
		else if (tt_Tree.n <= y) Pos = 0;
		else if (Pos + y >= tt_Tree.n) Pos = tt_Tree.n - y;
		for (int i = 0, rong = 13; i < y && i < tt_Tree.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.MaThe;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiHo; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.Ho;
			disTance += doDaiHo + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);

			cout << tt_Tree.arr[i + Pos]->data.Ten;
			disTance += doDaiTen + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiPhai; h++)
				cout << " ";
			gotoXY(disTance + 6, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.Phai;
			disTance += doDaiPhai + 1;
			//Trang Thai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTrangThai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			if (tt_Tree.arr[i + Pos]->data.TrangThai == 1)
			{
				cout << "HOAT DONG";
				doDaiTrangThai -= 2;
			}
			else
			{
				cout << "BI KHOA";
			}
			doDaiTrangThai = 12;
			disTance += doDaiTrangThai + 1;
			// sach muon
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSLSach; h++)
				cout << " ";
			gotoXY(disTance + 4, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.SoLuongSachDangMuon << " QUYEN";
		}
		TextColor(241);
	}
	system("pause");
	return NULL;
}

//============================================== THAO TAC VOI DAU SACH =====================================

//IN DANH SACH DAU SACH THEO THE LOAI
void InDanhSachDauSach_TheoTheLoai(THELOAI *tl) {
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int cachTren = 9, cachNgang = 13;
	XoaKhung();
	TextColor(252);
	gotoXY(70, 2);
	cout << "DANH SACH DAU SACH THEO THE LOAI";
	TextColor(241);
	VeKhungDauSachTheoTheLoai();

	for (int i = Pos, rong = 0, j = 0; i < tl->slSach && j < 15; i++, j++)
	{
		gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->MaDauSach;
		gotoXY(20 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->TenSach;
		gotoXY(55 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->TacGia;
		gotoXY(83 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->TheLoai;
		gotoXY(102 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->NamXuatBan;
		gotoXY(117 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->SoTrang;
		gotoXY(133 + cachNgang, cachTren + 2 * j + rong);
		cout << tl->arr[i]->SoLuongSach;
	}
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= tl->slSach)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungDauSach_TheLoai();
			VeKhungDauSachTheoTheLoai();
			for (int i = Pos, rong = 0, j = 0; i < tl->slSach && j < 15; i++, j++)
			{
				gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->MaDauSach;
				gotoXY(20 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->TenSach;
				gotoXY(55 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->TacGia;
				gotoXY(83 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->TheLoai;
				gotoXY(102 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->NamXuatBan;
				gotoXY(117 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->SoTrang;
				gotoXY(133 + cachNgang, cachTren + 2 * j + rong);
				cout << tl->arr[i]->SoLuongSach;
			}
		}

	}


}

//IN DANH SACH DAU SACH THEO THE LOAI
void InThongTin_1_DauSach(DAUSACH *ds) {
	ShowCur(false);
	int page = 1;
	int Pos = 0;
	int cachTren = 9, cachNgang = 8;
	XoaKhung();
	TextColor(252);
	gotoXY(70, 2);
	cout << "THONG TIN 1 DAU DAU SACH TRONG THU VIEN";
	TextColor(241);
	VeKhungThongTin_DauSach();
	char key[7] = "";
	TT_DMS tt_dms = KhoiTaoDanhSachTT_DMS(ds->List_DMS, key);
	for (int i = Pos, rong = 0, j = 0; i < tt_dms.n && j < 15; i++, j++)
	{
		gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
		cout << i + 1;
		gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->MaDauSach;
		if(ds->TenSach.length()> 20)
			gotoXY(20 + cachNgang, cachTren + 2 * j + rong);
		else
			gotoXY(26 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->TenSach;
		
		if(ds->TacGia.length()>20)
			gotoXY(52 + cachNgang, cachTren + 2 * j + rong);
		else 
			gotoXY(56 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->TacGia;
		gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->TheLoai;
		gotoXY(102 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->NamXuatBan;
		gotoXY(117 + cachNgang, cachTren + 2 * j + rong);
		cout << ds->SoTrang;
		gotoXY(130 + cachNgang, cachTren + 2 * j + rong);
		cout << tt_dms.arr[i + Pos]->data.MaSach;
		gotoXY(145 + cachNgang, cachTren + 2 * j + rong);
		if (tt_dms.arr[i + Pos]->data.TrangThai == 1)
			cout << "DA CO NGUOI MUON";
		else if (tt_dms.arr[i + Pos]->data.TrangThai == 0)
			cout << "CHO MUON DUOC";
		else if (tt_dms.arr[i + Pos]->data.TrangThai == 2)
			cout << "DA THANH LY";
	}
	gotoXY(150, 41);
	cout << "TRANG 1";
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= tt_dms.n)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungDauSach_ThongTin();
			VeKhungThongTin_DauSach();
			for (int i = Pos, rong = 0, j = 0; i < tt_dms.n && j < 15; i++, j++)
			{
				gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
				cout << i + 1;
				gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->MaDauSach;
				if(ds->TenSach.length()> 20)
					gotoXY(20 + cachNgang, cachTren + 2 * j + rong);
				else
					gotoXY(26 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->TenSach;
				
				if(ds->TacGia.length()>20)
					gotoXY(52 + cachNgang, cachTren + 2 * j + rong);
				else 
					gotoXY(56 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->TacGia;
				gotoXY(84 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->TheLoai;
				gotoXY(102 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->NamXuatBan;
				gotoXY(117 + cachNgang, cachTren + 2 * j + rong);
				cout << ds->SoTrang;
				gotoXY(130 + cachNgang, cachTren + 2 * j + rong);
				cout << tt_dms.arr[i]->data.MaSach;
				gotoXY(145 + cachNgang, cachTren + 2 * j + rong);
				if (tt_dms.arr[i]->data.TrangThai == 1)
					cout << "DA CO NGUOI MUON";
				else if (tt_dms.arr[i]->data.TrangThai == 0)
					cout << "CHO MUON DUOC";
				else if (tt_dms.arr[i]->data.TrangThai == 2)
					cout << "DA THANH LY";
			}
		}

	}

}

void InDauSachTheoTheLoai(LIST_DAUSACH listDS) {

	LIST_THELOAI l_tl = DauSachTheoTheLoai(listDS);
	XoaKhungThaoTac();
	VeKhungDauSach_TheoTheLoai();
	TextColor(252);
	gotoXY(130, 14);
	cout << "CAC THE LOAI SACH TRONG THU VIEN";

	int y = 12;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 7;
	int doDaiTen = 41;
	int doDaiTacGia = 9;
	int disTance;
	for (int i = 0, rong = 19; i < y && i < l_tl.n; i++)
	{
		disTance = 116;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//stt
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << i + 1;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 12, i + rong);
		cout << l_tl.arr[i + Pos]->TenTheLoai;
		disTance += doDaiTen + 1;
		//sl
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTacGia; h++)
			cout << " ";
		gotoXY(disTance + 4, i + rong);
		cout << l_tl.arr[i + Pos]->slSach;
	}
	TextColor(241);

	
	while (true)
	{
		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			XoaKhungThaoTac();
			InDanhSachDauSach_TheoTheLoai(l_tl.arr[Sta + Pos]);
			system("cls");
			VeKhungDauSach_TheoTheLoai();
			VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
			for (int i = 0; i < 44; i++)
			{
				gotoXY(114, i);
				cout << "  ";
			}

			VeKhungDauSach();
			TextColor(252);
			gotoXY(130, 14);
			cout << "CAC THE LOAI SACH TRONG THU VIEN";
			gotoXY(35, 3);
			cout << "DANH SACH DAU SACH TRONG THU VIEN";
			gotoXY(125, 2);
			cout << "MENU LUA CHON THEM CAP NHAT DAU SACH";
			TextColor(241);
			Ve_HOTKEY();
			gotoXY(120, 4);
			cout << "ENTER: CHINH SUA";
			gotoXY(120, 5);
			cout << "F5: THEM";
			gotoXY(120, 6);
			cout << "F6: IN DANH SACH THEO THE LOAI";
			char key[27] = "";
			int size = 0;
			InsertionSort_DauSach_Theo_Ma(listDS);
			LIST_DAUSACH listDS_tam = TraVeDS_DauSach(listDS, key, size);
			doDaiMa = 8;
			doDaiTen = 34;
			doDaiTacGia = 24;
			int doDaiTheLoai = 16;
			int doDaiSoTrang = 12;
			int doDaiNamXB = 13;
			disTance;
			for (int i = 0, rong = 13; i < 19 && i < listDS_tam.SL_DauSach; i++)
			{
				disTance = 2;
				if (i == 0) TextColor(116);
				else TextColor(241);
				//ma
				gotoXY(disTance, i + rong);
				int h = 0;
				for (; h < doDaiMa; h++)
					cout << " ";
				gotoXY(disTance + 1, i + rong);
				cout << listDS_tam.nodesDauSach[i]->MaDauSach;
				disTance += doDaiMa + 1;
				//ten
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTen; h++)
					cout << " ";
				gotoXY(disTance + 5, i + rong);
				cout << listDS_tam.nodesDauSach[i]->TenSach;
				disTance += doDaiTen + 1;
				// tacgia
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTacGia; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);

				cout << listDS_tam.nodesDauSach[i]->TacGia;
				disTance += doDaiTacGia + 1;
				//the loai
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTheLoai; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);
				cout << listDS_tam.nodesDauSach[i]->TheLoai;
				disTance += doDaiTheLoai + 1;
				//so trang
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiSoTrang; h++)
					cout << " ";
				gotoXY(disTance + 4, i + rong);
				cout << listDS_tam.nodesDauSach[i]->SoTrang;
				disTance += doDaiSoTrang + 1;
				//so trang
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiNamXB; h++)
					cout << " ";
				gotoXY(disTance + 3, i + rong);
				cout << listDS_tam.nodesDauSach[i]->NamXuatBan;
			}
			TextColor(241);
		}
		else if (k == KEYESC) return;

		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= l_tl.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (l_tl.n <= y) Pos = 0;
		else if (Pos + y >= l_tl.n) Pos = l_tl.n - y;
		y = 12;
		doDaiMa = 7;
		doDaiTen = 41;
		doDaiTacGia = 9;
		for (int i = 0, rong = 19; i < y && i < l_tl.n; i++)
		{
			disTance = 116;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//stt
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << i + 1 + Pos;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 12, i + rong);
			cout << l_tl.arr[i + Pos]->TenTheLoai;
			disTance += doDaiTen + 1;
			//sl
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTacGia; h++)
				cout << " ";
			gotoXY(disTance + 4, i + rong);
			cout << l_tl.arr[i + Pos]->slSach;
		}
		TextColor(241);
	}
		// XOA LIST THE LOAI SACH 
		for (int i = 0; i < l_tl.n; i++)
		{
			if (l_tl.arr[i] == NULL)
				break;
			delete l_tl.arr[i];
			l_tl.arr[i] = NULL;
		}
}

//IN DANH SACH DAU SACH THEO SO LAN MUON
void InDanhSachDauSach_TheoSoLanMuon(LIST_DAUSACH listDS) {
	InsertionSort_DauSach_LanMuon(listDS);
	ShowCur(false);
	int cachTren = 9, cachNgang = 28;
	int page = 1;
	int Pos = 0;
	int slSach = 0;
	int slSChuan = 0;
	XoaKhung();
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	TextColor(252);
	gotoXY(75, 2);
	cout << "10 DAU SACH CO SO LAN MUON NHIEU NHAT";
	TextColor(241);
	VeKhungDauSachTheoLanMuon();

	// so luong sach da co nguoi muon
	for (int i = 0; i < listDS.SL_DauSach; i++)
	{
		if (listDS.nodesDauSach[i]->SoLanMuon > 0)
		{
			slSach++;
			if(listDS.nodesDauSach[10] != NULL)
				if(listDS.nodesDauSach[i]->SoLanMuon >= listDS.nodesDauSach[9]->SoLanMuon)
					slSChuan++;
		}
	}
	int ox = 13;
	// so luong dau sach muon <= 10
	if (slSach <= 10) {
		for (int i = Pos, rong = 0, j = 0; i < listDS.SL_DauSach && listDS.nodesDauSach[i] != NULL && j < slSach; i++, j++)
		{
			gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
			cout << i + 1;
			gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->MaDauSach;
			gotoXY(14 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TenSach;
			gotoXY(53 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TacGia;
			gotoXY(83 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TheLoai;
			gotoXY(105 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->SoLanMuon;
		}
		_getch();
		return;
	}
	// so luong dau sach > 10
	for (int i = Pos, rong = 0, j = 0; i < listDS.SL_DauSach && listDS.nodesDauSach[i] != NULL && j < 15; i++, j++)
	{
		if (listDS.nodesDauSach[i]->SoLanMuon > 0 && listDS.nodesDauSach[i]->SoLanMuon >= listDS.nodesDauSach[9]->SoLanMuon)
		{
			gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
			cout << i + 1;
			gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->MaDauSach;
			gotoXY(14 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TenSach;
			gotoXY(53 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TacGia;
			gotoXY(83 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->TheLoai;
			gotoXY(105 + cachNgang + ox, cachTren + 2 * j + rong);
			cout << listDS.nodesDauSach[i]->SoLanMuon;
		}
	}

	gotoXY(150, 41);
	cout << "TRANG 1";

	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYRIGHT) Pos += 15;
			else if (k == KEYLEFT) Pos -= 15;
		}

		else if (k == KEYENTER || k == KEYESC) break;
		if (Pos >= slSChuan)
		{
			Pos -= 15;
			continue;
		}
		else if (Pos < 0)
		{
			Pos = 0;
			continue;
		}

		while (Pos <= INT_MAX)
		{
			page = Pos / 15;
			gotoXY(150, 41);
			cout << "TRANG " << page + 1;
			break;
		}
		if (k == KEYLEFT || k == KEYRIGHT)
		{
			XoaKhungDauSach_LanMuon();
			VeKhungDauSachTheoLanMuon();
			int ox = 13;
			for (int i = Pos, rong = 0, j = 0; i < listDS.SL_DauSach && listDS.nodesDauSach[i] != NULL && j < 15; i++, j++)
			{
				if (listDS.nodesDauSach[i]->SoLanMuon > 0 && listDS.nodesDauSach[i]->SoLanMuon >= listDS.nodesDauSach[9]->SoLanMuon)
				{
					gotoXY(1 + cachNgang, cachTren + 2 * j + rong);
					cout << i + 1;
					gotoXY(8 + cachNgang, cachTren + 2 * j + rong);
					cout << listDS.nodesDauSach[i]->MaDauSach;
					gotoXY(14 + cachNgang + ox, cachTren + 2 * j + rong);
					cout << listDS.nodesDauSach[i]->TenSach;
					gotoXY(53 + cachNgang + ox, cachTren + 2 * j + rong);
					cout << listDS.nodesDauSach[i]->TacGia;
					gotoXY(83 + cachNgang + ox, cachTren + 2 * j + rong);
					cout << listDS.nodesDauSach[i]->TheLoai;
					gotoXY(105 + cachNgang + ox, cachTren + 2 * j + rong);
					cout << listDS.nodesDauSach[i]->SoLanMuon;
				}
			}
		}

	}

}

//CHINH SUA DAU SACH
void ChinhSuaDauSach(DAUSACH*& ds) {
	TextColor(241);
	bool space1 = 0, space2 = 0, space3 = 0;// ko cho nhap phim space 
	bool kt = 1;
	int Pos = 1;
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	DAUSACH ds_tam;
	DATE namHienTai = 1900 + ltm->tm_year;

	// lay du lieu ds ra sao chep ds_tam 
	// moi su thay doi cua ds_tam khong anh huong den ds
	ds_tam = *ds;
	int vtx = 120;
	int tthai = 0;
	int phai = 0;
	string soTrang = ChuyenSoThanhChuoi(ds_tam.SoTrang);
	string namXB = ChuyenSoThanhChuoi(ds_tam.NamXuatBan);

	gotoXY(130, 14);
	cout << "CHINH SUA DAU SACH";
	gotoXY(vtx, 16);
	cout << "MA DAU SACH: " << ds_tam.MaDauSach;
	gotoXY(vtx, 18);
	cout << "TEN DAU SACH: " << ds_tam.TenSach;//14
	gotoXY(vtx, 20);
	cout << "TAC GIA: " << ds_tam.TacGia;//9
	gotoXY(vtx, 22);
	cout << "THE LOAI: " << ds_tam.TheLoai;//10
	gotoXY(vtx, 24);
	cout << "SO TRANG: " << soTrang;//10
	gotoXY(vtx, 26);
	cout << "NAM XUAT BAN: " << namXB;//14

	gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
	if (ds_tam.TenSach.length() > 0) space1 = 1;
	if (ds_tam.TacGia.length() > 0) space2 = 1;//KHONG? co so
	if (ds_tam.TheLoai.length() > 0) space3 = 1;

	if (ds_tam.TenSach.length() > 0) kt = 0;// chuoi KHONG? bi rong

	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);

					Pos = 5;
				}
				else if (Pos == 2)
				{
					gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
					Pos = 1;
				}
				else if (Pos == 3)
				{
					gotoXY(vtx + 9 + ds_tam.TacGia.length(), 20);
					Pos = 2;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 10 + ds_tam.TheLoai.length(), 22);
					Pos = 3;
				}
				else if (Pos == 5)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 4;
				}
			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
					gotoXY(vtx + 9 + ds_tam.TacGia.length(), 20);
					Pos = 2;
				}
				else if (Pos == 2)
				{

					gotoXY(vtx + 10 + ds_tam.TheLoai.length(), 22);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 5;
				}
				else if (Pos == 5)
				{
					gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// n?u là phím enter
		{
			// vi pham chuoi rong
			if (kt == 1 || ds_tam.TenSach.length() == 0 || ds_tam.TacGia.length() == 0
				|| ds_tam.TheLoai.length() == 0 || soTrang.length() == 0 || namXB.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (ds_tam.TenSach.length() == 0)
				{
					gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
					Pos = 1;
					continue;
				}
				if (ds_tam.TacGia.length() == 0)
				{
					gotoXY(vtx + 9 + ds_tam.TacGia.length(), 20);
					Pos = 2;
					continue;
				}
				if (ds_tam.TheLoai.length() == 0)
				{
					gotoXY(vtx + 10 + ds_tam.TheLoai.length(), 22);
					Pos = 3;
					continue;
				}
				if (soTrang.length() == 0)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 4;
					continue;
				}
				if (namXB.length() == 0)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 5;
					continue;
				}

			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && ds_tam.TenSach.length() != 0 && ds_tam.TacGia.length() != 0
				&& ds_tam.TheLoai.length() != 0 && soTrang.length() != 0 && namXB.length() != 0) {

				int namxb = atoi(namXB.c_str());
				int sotrang = atoi(soTrang.c_str());

				if (namxb > namHienTai)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "NAM XUAT BAN KHONG DUNG !!!";
					Sleep(300);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 5;
					continue;
				}
				if (sotrang == 0)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "SO TRANG KHONG HOP LE !!!";
					Sleep(600);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 5;
					continue;
				}
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = ds_tam.TenSach[ds_tam.TenSach.size() - 1];
					if (d == 32 || d == 0)
					{
						ds_tam.TenSach.erase(ds_tam.TenSach.size() - 1);
					}
					
					d = ds_tam.TacGia[ds_tam.TacGia.length() - 1];
					if (d == 32 || d == 0)
					{
						ds_tam.TacGia.erase(ds_tam.TacGia.length() - 1);
					}
					d = ds_tam.TheLoai[ds_tam.TheLoai.length() - 1];
					if (d == 32 || d == 0)
					{
						ds_tam.TheLoai.erase(ds_tam.TheLoai.length() - 1);
					}
					ds_tam.NamXuatBan = namxb;
					ds_tam.SoTrang = sotrang;
					*ds = ds_tam;
					ShowCur(false);
					return;
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                    ";
					if (Pos == 1)
					{
						gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
						Pos = 1;
						continue;
					}
					if (Pos == 2)
					{
						gotoXY(vtx + 9 + ds_tam.TacGia.length(), 20);
						Pos = 2;
						continue;
					}
					if (Pos == 3)
					{
						gotoXY(vtx + 10 + ds_tam.TheLoai.length(), 22);
						Pos = 3;
						continue;
					}
					if (Pos == 4)
					{
						gotoXY(vtx + 10 + soTrang.length(), 24);
						Pos = 4;
						continue;
					}
					if (Pos == 5)
					{
						gotoXY(vtx + 14 + namXB.length(), 26);
						Pos = 5;
						continue;
					}
					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(vtx, 29);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				ds_tam;
				ds;
				return;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";
				if (Pos == 1)
				{
					gotoXY(vtx + 14 + ds_tam.TenSach.length(), 18);
					Pos = 1;
					continue;
				}
				if (Pos == 2)
				{
					gotoXY(vtx + 9 + ds_tam.TacGia.length(), 20);
					Pos = 2;
					continue;
				}
				if (Pos == 3)
				{
					gotoXY(vtx + 10 + ds_tam.TheLoai.length(), 22);
					Pos = 3;
					continue;
				}
				if (Pos == 4)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 4;
					continue;
				}
				if (Pos == 5)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 5;
					continue;
				}
				continue;
			}
		}
		else
		{
			TextColor(241);
			// nhap ten sach
			if (Pos == 1) {
				if (k == SPACE)
				{
					if (ds_tam.TenSach.length() == 0)
					{
						continue;
					}
					else if (ds_tam.TenSach.length() <= 25 && space1 == 1 && ds_tam.TenSach[ds_tam.TenSach.length() - 1] != 25 && ds_tam.TenSach[ds_tam.TenSach.length() - 1] != ' ')
					{
						ds_tam.TenSach.push_back(k);
						space1 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				// chuoi KHONG? rong
				kt = 0;
				if (k == KEYBACK && (ds_tam.TenSach.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XulyNhap_Dulieu(ds_tam.TenSach, k, kt);
					space1 = 1;
					continue;
				}
				if (ds_tam.TenSach.length() <= 25)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_ChuSo(ds_tam.TenSach, k, kt);
					space1 = 1;
				}

			}
			// nhap ten tac gia
			else if (Pos == 2)
			{
				if (k == SPACE)
				{
					if (ds_tam.TacGia.length() == 0)
					{
						continue;
					}
					else if (space2 == 1 && ds_tam.TacGia.length() <= 20 && ds_tam.TacGia[ds_tam.TacGia.length() - 1] != 20 && ds_tam.TacGia[ds_tam.TacGia.length() - 1] != ' ')
					{
						ds_tam.TacGia.push_back(k);
						cout << k;
						space2 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && ds_tam.TacGia.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(ds_tam.TacGia, k, kt);
					space2 = 1;
					continue;
				}
				if (ds_tam.TacGia.length() <= 20)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(ds_tam.TacGia, k, kt);
					space2 = 1;
				}

			}
			// Nhap ten the loai
			else if (Pos == 3)
			{
				if (k == SPACE)
				{
					if (ds_tam.TheLoai.length() == 0)
					{
						continue;
					}
					else if (space3 == 1 && ds_tam.TheLoai.length() <= 12 && ds_tam.TheLoai[ds_tam.TheLoai.length() - 1] != 12 && ds_tam.TheLoai[ds_tam.TheLoai.length() - 1] != ' ')
					{
						ds_tam.TheLoai.push_back(k);
						cout << k;
						space3 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && ds_tam.TheLoai.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(ds_tam.TheLoai, k, kt);
					space3 = 1;
					continue;
				}
				if (ds_tam.TheLoai.length() < 12)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(ds_tam.TheLoai, k, kt);
					space3 = 1;
				}
			}
			// nhap so trang
			else if (Pos == 4)
			{
				if (k == SPACE)
				{
					continue;
				}
				if (soTrang.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(soTrang, k, kt);
			}
			// nhap nha xuat ban
			else if (Pos == 5)
			{
				if (k == SPACE)
				{
					continue;
				}
				if (namXB.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(namXB, k, kt);
			}
		}
	}

}
//THEM DAU SACH
void ThemDauSach(LIST_DAUSACH& listDS) {
	TextColor(241);
	bool space1 = 0, space2 = 0, space3 = 0, space4;// ko cho nhap phim space 
	bool kt = 1;
	int Pos = 1;
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	DAUSACH* ds = new DAUSACH;
	DATE namHienTai = 1900 + ltm->tm_year;

	// gan data node vao data doc gia
	//int i = 0;
	int vtx = 120;
	int tthai = 0;
	int phai = 0;
	string soTrang = "0";
	string namXB = ChuyenSoThanhChuoi(namHienTai);

	gotoXY(130, 14);
	cout << "CHINH SUA DAU SACH";
	gotoXY(vtx, 16);
	cout << "MA DAU SACH: " << ds->MaDauSach;
	gotoXY(vtx, 18);
	cout << "TEN DAU SACH: " << ds->TenSach;//14
	gotoXY(vtx, 20);
	cout << "TAC GIA: " << ds->TacGia;//9
	gotoXY(vtx, 22);
	cout << "THE LOAI: " << ds->TheLoai;//10
	gotoXY(vtx, 24);
	cout << "SO TRANG: " << soTrang;//10
	gotoXY(vtx, 26);
	cout << "NAM XUAT BAN: " << namXB;//14

	gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
	if (ds->TenSach.length() > 0) space1 = 1;
	if (ds->TacGia.length() > 0) space2 = 1;//KHONG? co so
	if (ds->TheLoai.length() > 0) space3 = 1;
	if (ds->TenSach.length() > 0) space4 = 1;

	if (ds->TenSach.length() > 0) kt = 0;// chuoi KHONG? bi rong

	while (true)
	{
		char k = getChar();
		int temp = k;
		if (temp == -32 || temp == 0)
		{
			k = getChar();
			if (k == KEYUP)
			{
				if (Pos == 1)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 6;
				}
				else if (Pos == 2)
				{
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
					Pos = 1;

				}
				else if (Pos == 3)
				{
					gotoXY(vtx + 14 + ds->TenSach.length(), 18);
					Pos = 2;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 9 + ds->TacGia.length(), 20);
					Pos = 3;
				}
				else if (Pos == 5)
				{
					gotoXY(vtx + 10 + ds->TheLoai.length(), 22);
					Pos = 4;
				}
				else if (Pos == 6)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 5;
				}
			}
			if (k == KEYDOWN)
			{
				if (Pos == 1)
				{
					gotoXY(vtx + 14 + ds->TenSach.length(), 18);
					Pos = 2;
				}
				else if (Pos == 2)
				{
					gotoXY(vtx + 9 + ds->TacGia.length(), 20);
					Pos = 3;
				}
				else if (Pos == 3)
				{
					gotoXY(vtx + 10 + ds->TheLoai.length(), 22);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 5;
				}
				else if (Pos == 5)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 6;
				}
				else if (Pos == 6)
				{
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
					Pos = 1;
				}
			}
		}
		else if (k == KEYENTER)// n?u là phím enter
		{
			// vi pham chuoi rong
			if (kt == 1 || ds->TenSach.length() == 0 || ds->TacGia.length() == 0
				|| ds->TheLoai.length() == 0 || soTrang.length() == 0 ||
				namXB.length() == 0 || ds->MaDauSach.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (ds->MaDauSach.length() == 0)
				{
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
					Pos = 1;
					continue;
				}

				if (ds->TenSach.length() == 0)
				{
					gotoXY(vtx + 14 + ds->TenSach.length(), 18);
					Pos = 2;
					continue;
				}
				if (ds->TacGia.length() == 0)
				{
					gotoXY(vtx + 9 + ds->TacGia.length(), 20);
					Pos = 3;
					continue;
				}
				if (ds->TheLoai.length() == 0)
				{
					gotoXY(vtx + 10 + ds->TheLoai.length(), 22);
					Pos = 4;
					continue;
				}
				if (soTrang.length() == 0)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 5;
					continue;
				}
				if (namXB.length() == 0)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 6;
					continue;
				}

			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && ds->TenSach.length() != 0 && ds->TacGia.length() != 0
				&& ds->TheLoai.length() != 0 && soTrang.length() != 0
				&& namXB.length() != 0 && ds->MaDauSach.length() != 0) {

				int namxb = atoi(namXB.c_str());
				int sotrang = atoi(soTrang.c_str());

				if (namxb > namHienTai)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "NAM XUAT BAN KHONG DUNG !!!";
					Sleep(600);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					gotoXY(vtx + 14 + namXB.length(), 26);
					Pos = 5;
					continue;
				}
				if (ds->MaDauSach.length() != 6)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "MA DAU SACH PHAI 6 KY TU !!!";
					Sleep(600);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					Pos = 1;
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
					continue;
				}
				if (ds->MaDauSach.length() != 6)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "MA DAU SACH PHAI 6 KY TU !!!";
					Sleep(600);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					Pos = 1;
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
					continue;
				}
				if (sotrang == 0)
				{
					gotoXY(vtx, 29);
					TextColor(252);
					cout << "SO TRANG KHONG HOP LE !!!";
					Sleep(600);
					gotoXY(vtx, 29);
					cout << "                             ";
					TextColor(121);
					gotoXY(vtx + 10 + soTrang.length(), 24);
					Pos = 5;
					continue;
				}
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = ds->TenSach[ds->TenSach.size() - 1];
					if (d == 32 || d == 0)
					{
						ds->TenSach[ds->TenSach.size() - 1];
					}
					d = ds->TacGia[ds->TacGia.length() - 1];
					if (d == 32 || d == 0)
					{
						ds->TacGia.erase(ds->TacGia.length() - 1);
					}
					d = ds->TheLoai[ds->TheLoai.length() - 1];
					if (d == 32 || d == 0)
					{
						ds->TheLoai.erase(ds->TheLoai.length() - 1);
					}
					d = ds->MaDauSach[ds->MaDauSach.length() - 1];
					if (d == 32 || d == 0)
					{
						ds->MaDauSach.erase(ds->MaDauSach.length() - 1);
					}
					ds->NamXuatBan = namxb;
					ds->SoTrang = sotrang;
					// khoi tao danh muc sach
					KhoiTaoListDMS(ds->List_DMS);
					// Them dau sach
					int isDS = ThemDauSachMoi(listDS, ds);
					if (isDS)
					{
						TextColor(241);
						ShowCur(false);
						return;
					}
					else
					{
						gotoXY(vtx, 29);
						cout << "                                 ";
						gotoXY(vtx, 29);
						TextColor(252);
						cout << "MA DAU SACH DA TON TAI !!!";
						Sleep(600);
						gotoXY(vtx, 29);
						cout << "                                 ";
						TextColor(241);
						Pos = 1;
						gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);
						continue;
					}
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                      ";
					if (Pos == 1)
					{
						gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);

						Pos = 1;
						continue;
					}
					if (Pos == 2)
					{
						gotoXY(vtx + 14 + ds->TenSach.length(), 18);

						Pos = 2;
						continue;
					}
					if (Pos == 3)
					{
						gotoXY(vtx + 9 + ds->TacGia.length(), 20);

						Pos = 3;
						continue;
					}
					if (Pos == 4)
					{
						gotoXY(vtx + 10 + ds->TheLoai.length(), 22);

						Pos = 4;
						continue;
					}
					if (Pos == 5)
					{
						gotoXY(vtx + 10 + soTrang.length(), 24);

						Pos = 5;
						continue;
					}
					if (Pos == 6)
					{
						gotoXY(vtx + 14 + namXB.length(), 26);
						continue;

					}
					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(vtx, 29);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";
				if (Pos == 1)
				{
					gotoXY(vtx + 13 + ds->MaDauSach.length(), 16);

					Pos = 1;
					continue;
				}
				if (Pos == 2)
				{
					gotoXY(vtx + 14 + ds->TenSach.length(), 18);

					Pos = 2;
					continue;
				}
				if (Pos == 3)
				{
					gotoXY(vtx + 9 + ds->TacGia.length(), 20);

					Pos = 3;
					continue;
				}
				if (Pos == 4)
				{
					gotoXY(vtx + 10 + ds->TheLoai.length(), 22);

					Pos = 4;
					continue;
				}
				if (Pos == 5)
				{
					gotoXY(vtx + 10 + soTrang.length(), 24);

					Pos = 5;
					continue;
				}
				if (Pos == 6)
				{
					gotoXY(vtx + 14 + namXB.length(), 26);
					continue;
				}
			}
		}
		else
		{
			TextColor(241);
			// nhap ma dau sach
			if (Pos == 1) {
				if (k == SPACE)
				{
					if (ds->MaDauSach.length() == 0)
					{
						continue;
					}
					else if (ds->MaDauSach.length() < 6 && space4 == 1 && ds->MaDauSach[ds->MaDauSach.length() - 1] != 6 && ds->MaDauSach[ds->MaDauSach.length() - 1] != ' ')
					{
						ds->MaDauSach.push_back(k);
						space4 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				// chuoi KHONG? rong
				kt = 0;
				if (k == KEYBACK && (ds->MaDauSach.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XulyNhap_ChuSo(ds->MaDauSach, k, kt);
					space4 = 1;
					continue;
				}
				if (ds->MaDauSach.length() < 6)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_ChuSo(ds->MaDauSach, k, kt);
					space4 = 1;
				}

			}
			// nhap ten sach
			if (Pos == 2) {
				if (k == SPACE)
				{
					if (ds->TenSach.length() == 0)
					{
						continue;
					}
					else if (ds->TenSach.length() <= 25 && space1 == 1 && ds->TenSach[ds->TenSach.length() - 1] != 25 && ds->TenSach[ds->TenSach.length() - 1] != ' ')
					{
						ds->TenSach.push_back(k);
						space1 = 0;
						cout << k;
						continue;
					}
					else
					{
						continue;
					}
				}
				// chuoi KHONG? rong
				kt = 0;
				if (k == KEYBACK && (ds->TenSach.length()) == 0) kt = 1;
				else if (k == KEYBACK)
				{
					XulyNhap_ChuSo(ds->TenSach, k, kt);
					space1 = 1;
					continue;
				}
				if (ds->TenSach.length() <= 25)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_ChuSo(ds->TenSach, k, kt);
					space1 = 1;
				}

			}
			// nhap ten tac gia
			else if (Pos == 3)
			{
				if (k == SPACE)
				{
					if (ds->TacGia.length() == 0)
					{
						continue;
					}
					else if (space2 == 1 && ds->TacGia.length() <= 20 && ds->TacGia[ds->TacGia.length() - 1] != 20 && ds->TacGia[ds->TacGia.length() - 1] != ' ')
					{
						ds->TacGia.push_back(k);
						cout << k;
						space2 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && ds->TacGia.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(ds->TacGia, k, kt);
					space2 = 1;
					continue;
				}
				if (ds->TacGia.length() <= 20)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(ds->TacGia, k, kt);
					space2 = 1;
				}

			}
			// Nhap ten the loai
			else if (Pos == 4)
			{
				if (k == SPACE)
				{
					if (ds->TheLoai.length() == 0)
					{
						continue;
					}
					else if (space3 == 1 && ds->TheLoai.length() <= 12 && ds->TheLoai[ds->TheLoai.length() - 1] != 12 && ds->TheLoai[ds->TheLoai.length() - 1] != ' ')
					{
						ds->TheLoai.push_back(k);
						cout << k;
						space3 = 0;
						continue;
					}
					else
					{
						continue;
					}
				}
				kt = 0;
				if (k == KEYBACK && ds->TheLoai.length() == 0) kt = 1;
				else if (k == 8)
				{
					XulyNhap_Dulieu(ds->TheLoai, k, kt);
					space3 = 1;
					continue;
				}
				if (ds->TheLoai.length() < 12)
				{
					k = ChuyenChuHoa(k);
					XulyNhap_Dulieu(ds->TheLoai, k, kt);
					space3 = 1;
				}
			}
			// nhap so trang
			else if (Pos == 5)
			{
				if (k == SPACE)
				{
					continue;
				}
				if (soTrang.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(soTrang, k, kt);
			}
			// nhap nha xuat ban
			else if (Pos == 6)
			{
				if (k == SPACE)
				{
					continue;
				}
				if (namXB.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(namXB, k, kt);
			}
		}
	}

}
//IN DAU SACH
DAUSACH* InDanhSachDauSach(LIST_DAUSACH& listDS) {
	system("color f1");
start:
	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}
	VeKhungDauSach();
	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH DAU SACH TRONG THU VIEN";
	gotoXY(125, 2);
	cout << "MENU LUA CHON THEM CAP NHAT DAU SACH";
	TextColor(241);
	Ve_HOTKEY();
	Ve_HOTKEY_DauSach();
	char key[27] = "";
	int size = 0;
	InsertionSort_DauSach_Theo_Ma(listDS);
	// DAU SACH tam DE SU LY TIM KIEM
	LIST_DAUSACH listDS_tam = TraVeDS_DauSach(listDS, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 8;
	int doDaiTen = 34;
	int doDaiTacGia = 24;
	int doDaiTheLoai = 16;
	int doDaiSoTrang = 12;
	int doDaiNamXB = 13;
	int disTance;
	for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 1, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
		disTance += doDaiTen + 1;
		// tacgia
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTacGia; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);

		cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
		disTance += doDaiTacGia + 1;
		//the loai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTheLoai; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
		disTance += doDaiTheLoai + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoTrang; h++)
			cout << " ";
		gotoXY(disTance + 4, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->SoTrang;
		disTance += doDaiSoTrang + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiNamXB; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->NamXuatBan;
	}


	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (listDS_tam.nodesDauSach[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON CHINH SUA DAU SACH KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                            ";
				// 
				ShowCur(true);
				//NODE_TREE* node = TimNodedocGiaTrongTree(list_DG, listDS_tam.nodesDauSach[Sta + Pos]->data.MaThe);

				ChinhSuaDauSach(listDS_tam.nodesDauSach[Pos + Sta]);
				XoaKhungThaoTac();
				TextColor(241);
				gotoXY(15 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                ";

			}

		}
		else if (k == KEYESC) return NULL;
		else if (k == 0)
		{
			k = getChar();
			if (k == KEYF5)
			{
				ShowCur(true);
				char select;
				gotoXY(25, 7);
				TextColor(252);
				cout << "BAN CO MUON THEM DAU SACH MOI HAY KHONG? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{
					TextColor(241);
					gotoXY(25, 7);
					cout << "                                                  ";
					ThemDauSach(listDS);
					ShowCur(false);
					XoaKhungThaoTac();
					TextColor(241);
					gotoXY(15 + size, 9);

				}
				else
				{
					TextColor(241);
					if (select == -32)
					{
						select = getChar();
					}
					ShowCur(false);
					gotoXY(25, 7);
					cout << "                                                  ";
					continue;
				}
			}
			else if (k == KEYF6)
			{
				// in danh sach theo tung the loai
				//InDanhSachDauSach_TheoTheLoai(listDS);
				InDauSachTheoTheLoai(listDS);
				XoaKhungThaoTac();
			}
			else if (k == KEYF7) {
				InThongTin_1_DauSach(listDS_tam.nodesDauSach[Sta + Pos]);
				XoaKhung();
				VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
				for (int i = 0; i < 44; i++)
				{
					gotoXY(114, i);
					cout << "  ";
				}
				VeKhungDauSach();
				TextColor(252);
				gotoXY(35, 3);
				cout << "DANH SACH DAU SACH TRONG THU VIEN";
				gotoXY(125, 2);
				cout << "MENU LUA CHON THEM CAP NHAT DAU SACH";
				TextColor(241);
				Ve_HOTKEY();
				Ve_HOTKEY_DauSach();
				goto in;
			}
			else if (k == 0)
			{
				continue;
			}
			else continue;
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 30; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhung2();
			}
			else if (f == KEYESC) return NULL;
			else if ((f < 58 && f>47) || (f > 64 && f < 91) || (f > 96 && f < 123) || f == SPACE) {
				if (size == 26)
				{
					InCauThongBao("TEN SACH QUA QUA DAI!!!");
					continue;
				}
				if ((f >= 'a' && f <= 'z') || (f >= 'A' && f <= 'Z') || f == SPACE || (f < 58 && f>47))
				{
					if ((f >= 'a' && f < 'z'))
					{
						f = char(f - 32);
					}
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 30; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhung2();
				}
			}
			gotoXY(0, 0);
		}
	in:
		//LIST_DAUSACH listDS_tam;
		listDS_tam = TraVeDS_DauSach(listDS, key, size);
		InsertionSort_DauSach_Theo_Ma(listDS_tam);

		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 30; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= listDS_tam.SL_DauSach) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (listDS_tam.SL_DauSach <= y) Pos = 0;
		else if (Pos + y >= listDS_tam.SL_DauSach) Pos = listDS_tam.SL_DauSach - y;

		for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 1, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
			disTance += doDaiTen + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTacGia; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);

			cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
			disTance += doDaiTacGia + 1;
			//the loai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTheLoai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
			disTance += doDaiTheLoai + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoTrang; h++)
				cout << " ";
			gotoXY(disTance + 4, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->SoTrang;
			disTance += doDaiSoTrang + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiNamXB; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->NamXuatBan;
		}
		TextColor(241);
	}
	return NULL;
}

//============================================== THAO TAC VOI SACH =====================================

// THEM SACH
NODE_DMS* ThemSachVaoDMS(LIST_DMS& listDMS, string maDS) {
	ShowCur(true);
	TextColor(241);
	bool space1 = 0, space2 = 0;// ko cho nhap phim space 
	bool kt = 1;
	int Pos = 1;
	DMS dms;
	int vtx = 120;

	dms.MaSach = MaSachTuDong(listDMS, maDS);
	TextColor(252);
	gotoXY(128, 14);
	cout << "THEM SACH VAO DANH MUC SACH";
	TextColor(241);
	gotoXY(vtx, 16);
	cout << "MA SACH: " << dms.MaSach;//9
	gotoXY(vtx, 18);
	if (listDMS.pHead != NULL)
		dms.ViTri = listDMS.pHead->data.ViTri;
	cout << "VI TRI: " << dms.ViTri;//8
	gotoXY(vtx, 20);
	cout << "TRANG THAI: " << dms.TrangThai;//12

	gotoXY(vtx + 8 + dms.ViTri.length(), 18);
	if (dms.ViTri.length() > 0) space1 = 1;
	if (dms.ViTri.length() > 0) kt = 0;// chuoi KHONG? bi rong

	while (true)
	{
		char k = getChar();
		int temp = k;
		if (k == -32)
		{
			k = getChar();
			if (k == KEYUP || k == KEYDOWN || k == KEYRIGHT || k == KEYLEFT)
			{
				continue;
			}
		}
		else if (k == KEYENTER)// n?u là phím enter
		{
			// vi pham chuoi rong
			if (kt == 1 || dms.ViTri.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (dms.ViTri.length() == 0)
				{
					gotoXY(vtx + 8 + dms.ViTri.length(), 18);
					Pos = 1;
					continue;
				}
			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && dms.ViTri.length() != 0) {
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON THEM SACH KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = dms.ViTri[dms.ViTri.length() - 1];
					if (d == 32 || d == 0)
					{
						dms.ViTri.erase(dms.ViTri.length() - 1);
					}
					NODE_DMS* node = KhoiTaoNode_DMS(dms);
					return node;
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                      ";
					if (Pos == 1)
					{
						gotoXY(vtx + 8 + dms.ViTri.length(), 18);
						Pos = 1;
						continue;
					}

					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(vtx, 29);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";
				return NULL;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                   ";

				gotoXY(vtx + 8 + dms.ViTri.length(), 18);
				Pos = 1;
				continue;
			}
		}
		else
		{
			if (k == SPACE)
			{
				if (dms.ViTri.length() == 0)
				{
					continue;
				}
				else if (dms.ViTri.length() < 20 && space1 == 1 && dms.ViTri[dms.ViTri.length() - 1] != 20 && dms.ViTri[dms.ViTri.length() - 1] != ' ')
				{
					dms.ViTri.push_back(k);
					space1 = 0;
					cout << k;
					continue;
				}
				else
				{
					continue;
				}
			}
			// chuoi KHONG? rong
			kt = 0;
			if (k == KEYBACK && (dms.ViTri.length()) == 0) kt = 1;
			else if (k == KEYBACK)
			{
				XulyNhap_ChuSo(dms.ViTri, k, kt);
				space1 = 1;
				continue;
			}
			if (dms.ViTri.length() < 20)
			{
				k = ChuyenChuHoa(k);
				XulyNhap_ChuSo(dms.ViTri, k, kt);
				space1 = 1;
			}

		}
	}

}
// CHINH SUA SACH
int ChinhSuaSachTrongDMS(DMS& s) {
	ShowCur(true);
	TextColor(241);
	bool space1 = 0;// ko cho nhap phim space 
	bool kt = 1;
	int vtx = 120;
	DMS dms = s;
	string tt = ChuyenSoThanhChuoi(dms.TrangThai);
	TextColor(252);
	gotoXY(125, 14);
	cout << "CHINH SUA SACH TRONG DANH MUC SACH";
	TextColor(241);

	gotoXY(vtx, 16);
	cout << "MA SACH: " << dms.MaSach;//9
	gotoXY(vtx, 18);
	cout << "VI TRI: " << dms.ViTri;//8
	gotoXY(vtx, 20);
	cout << "TRANG THAI: " << tt;//12

	TextColor(124);
	gotoXY(vtx, 22);
	cout << "0: CHO MUON DUOC";
	gotoXY(vtx + 30, 22);
	cout << "2: THANH LY SACH";
	TextColor(241);
	gotoXY(vtx + 8 + dms.ViTri.length(), 18);
	if (dms.ViTri.length() > 0) space1 = 1;
	if (dms.ViTri.length() > 0) kt = 0;// chuoi KHONG? bi rong

	while (true)
	{
		char k = getChar();
		int temp = k;
		if (k == -32)
		{
			k = getChar();
			if (k == KEYUP || k == KEYDOWN || k == KEYRIGHT || k == KEYLEFT)
			{
				continue;
			}
		}
		if (k == KEYENTER)// n?u là phím enter
		{
			// vi pham chuoi rong
			if (kt == 1 || dms.ViTri.length() == 0)// ki?m tra xem x có r?ng ko
			{
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "DU LIEU RONG! YEU CAU NHAP LAI. ";
				getChar();
				TextColor(241);
				gotoXY(vtx, 29);
				cout << "                                 ";

				if (dms.ViTri.length() == 0)
				{
					gotoXY(vtx + 8 + dms.ViTri.length(), 18);
					continue;
				}

			}
			// chuoi KHONG? rong nhap thanh cong
			else if (kt == 0 && dms.ViTri.length() != 0) {
				gotoXY(vtx, 29);
				TextColor(252);
				cout << "BAN CO MUON LUU LAI KHONG? Y/N";
				char x = getChar();
				if (x == 'y' || x == 'Y')
				{
					TextColor(241);
					//XOA ' ' VI TRI CUOI CUNG
					char d = dms.ViTri[dms.ViTri.length() - 1];
					if (d == 32 || d == 0)
					{
						dms.ViTri.erase(dms.ViTri.length() - 1);
					}

					// CHINH SUA SACH THANH CONG
					dms.TrangThai = atoi(tt.c_str());
					s = dms;
					return 1;
				}
				else
				{
					TextColor(241);
					gotoXY(vtx, 29);
					cout << "                                      ";
					gotoXY(vtx + 8 + dms.ViTri.length(), 18);
					continue;
					int tam = x;
					if (tam == -32)
					{
						x = getChar();
					}
					continue;
				}
			}
		}
		else if (k == KEYESC)
		{
			gotoXY(vtx, 26);
			TextColor(252);
			cout << "BAN CO MUON THOAT KHONG? Y/N";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				TextColor(241);
				return 0;
				//break;
			}
			else
			{
				TextColor(241);
				gotoXY(vtx, 26);
				cout << "                                   ";

				gotoXY(vtx + 8 + dms.ViTri.length(), 18);
				continue;
			}
		}
		else if (k == 0)
		{
			k = getChar();
		}
		else
		{
			if (k == SPACE)
			{
				if (dms.ViTri.length() == 0)
				{
					continue;
				}
				else if (dms.ViTri.length() < 20 && space1 == 1 && dms.ViTri[dms.ViTri.length() - 1] != 20 && dms.ViTri[dms.ViTri.length() - 1] != ' ')
				{
					dms.ViTri.push_back(k);
					space1 = 0;
					cout << k;
					continue;
				}
				else
				{
					continue;
				}
			}
			// chuoi KHONG? rong
			kt = 0;
			if (k == KEYBACK && (dms.ViTri.length()) == 0) kt = 1;
			else if (k == KEYBACK)
			{
				XulyNhap_ChuSo(dms.ViTri, k, kt);
				space1 = 1;
				continue;
			}
			if (dms.ViTri.length() < 20)
			{
				k = ChuyenChuHoa(k);
				XulyNhap_ChuSo(dms.ViTri, k, kt);
				space1 = 1;
			}

		}
	}

}
// THAO TAC VOI SACH TRONG DANH MUC SACH
void XuLy_Sach(DAUSACH*& ds, TREE_DSDocGia root) {
	system("color f1");
	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}
	TextColor(241);
	gotoXY(35, 3);
	cout << "DANH MUC SACH CUA DAU SACH ";
	cout << "" << ds->TenSach << "";
	gotoXY(93, 7);
	cout << "MA DAU SACH: ";
	cout << ds->MaDauSach;
	gotoXY(125, 2);
	cout << "LUA CHON THEM - SUA - XOA SACH TRONG DANH MUC";
	TextColor(241);
	VeKhungSachTrongDMS();
	int size = 0;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiVT = 69;
	int doDaiTT = 23;
	int disTance;
	char key[9] = "";

	TT_DMS tt_dms = KhoiTaoDanhSachTT_DMS(ds->List_DMS, key);
	TT_DMS tt_dms_tam = tt_dms;
	for (int i = 0, rong = 13; i < y && i < tt_dms.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << tt_dms.arr[i + Pos]->data.MaSach;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiVT; h++)
			cout << " ";
		gotoXY(disTance + 25, i + rong);
		cout << tt_dms.arr[i + Pos]->data.ViTri;
		disTance += doDaiVT + 1;
		// tacgia
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTT; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		if (tt_dms.arr[i + Pos]->data.TrangThai == 1)
			cout << "DA CO NGUOI MUON";
		else if (tt_dms.arr[i + Pos]->data.TrangThai == 0)
			cout << "CHO MUON DUOC";
		else if (tt_dms.arr[i + Pos]->data.TrangThai == 2)
			cout << "DA THANH LY";
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (tt_dms.arr[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON CHINH SUA SACH KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                            ";

				ShowCur(true);
				ChinhSuaSachTrongDMS(tt_dms.arr[Pos + Sta]->data);
				XoaKhungThaoTac();
				XoaTrongKhungSach();
				TextColor(241);
				gotoXY(15 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                ";
			}

		}
		else if (k == KEYESC) {
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON TRO VE KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                  ";
				// 
				ShowCur(true);
				return;
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                     ";

			}
		}
		else if (k == 0) {
			k = getChar();
			if (k == KEYF3)
			{
				// DOC GIA DANG MUON
				if (tt_dms.arr[Pos + Sta]->data.TrangThai == 1)
				{
					InCauThongBao("SACH DANG CO DOC GIA MUON KHONG DUOC XOA");
					continue;
				}
				else if (tt_dms.arr[Pos + Sta]->data.TrangThai == 2)
				{
					InCauThongBao("SACH DA THANH LY KHONG THE XOA DUOC");
					continue;
				}
				else
				{
					// XOA SACH
					TextColor(252);
					gotoXY(25, 7);
					cout << "BAN CO MUON XOA SACH KHONG? Y/N: ";
					char x = getChar();
					if (x == 'Y' || x == 'y')
					{
						gotoXY(25, 7);
						cout << "                                            ";
						// SACH DA TON TAI TRONG LICH SU MUON TRA
						NODE_MUONTRA* p = NULL;
						TimKiemNodeMuonTra(root, tt_dms.arr[Pos + Sta]->data.MaSach, p);
						if (p != NULL)
						{
							TextColor(252);
							gotoXY(25, 7);
							cout << "BAN CO MUON THANH LY SACH KHONG? Y/N: ";
							char x1 = getChar();
							if (x1 == 'Y' || x1 == 'y') {
								gotoXY(25, 7);
								cout << "                                       ";
								tt_dms.arr[Pos + Sta]->data.TrangThai = 2;
								TextColor(252);
								gotoXY(25, 7);
								cout << "THANH LY SACH THANH CONG";
								Sleep(1000);
								gotoXY(25, 7);
								cout << "                            ";
								XoaTrongKhungSach();
								ShowCur(true);
								TextColor(241);
								gotoXY(15 + size, 9);
							}
							else
							{
								gotoXY(25, 7);
								cout << "                                             ";
							}
						}
						else
						{
							XoaNode_DMS(ds->List_DMS, tt_dms.arr[Pos + Sta]->data.MaSach);
							ds->SoLuongSach--;
							TextColor(252);
							gotoXY(25, 7);
							cout << "XOA SACH THANH CONG";
							Sleep(1000);
							gotoXY(25, 7);
							cout << "                      ";
							XoaTrongKhungSach();
							ShowCur(true);
							TextColor(241);
							gotoXY(15 + size, 9);
						}

					}
					else
					{
						TextColor(241);
						if (x == -32 || x == 0)
						{
							x = getChar();

						}
						ShowCur(false);

						gotoXY(25, 7);
						cout << "                                                ";
					}
				}


			}
			else if (k == KEYF4)
			{
				if (tt_dms.arr[Pos + Sta]->data.TrangThai == 0)
				{
					TextColor(252);
					gotoXY(25, 7);
					cout << "BAN CO MUON THANH LY SACH NAY KHONG? Y/N: ";
					char x = getChar();
					if (x == 'Y' || x == 'y')
					{
						gotoXY(25, 7);
						cout << "                                                      ";
						tt_dms.arr[Pos + Sta]->data.TrangThai = 2;
						TextColor(252);
						gotoXY(25, 7);
						cout << "THANH LY SACH THANH CONG";
						Sleep(1000);
						gotoXY(25, 7);
						cout << "                            ";
						XoaTrongKhungSach();
						ShowCur(true);
						TextColor(241);
						gotoXY(15 + size, 9);
					}
					else
					{
						TextColor(241);
						if (x == -32 || x == 0)
						{
							x = getChar();

						}
						ShowCur(false);

						gotoXY(25, 7);
						cout << "                                                ";
					}
				}
			}
			else if (k == KEYF5)
			{
				TextColor(252);
				gotoXY(25, 7);
				cout << "BAN CO MUON THEM SACH VAO DAU SACH KHONG? Y/N: ";
				char x = getChar();
				if (x == 'Y' || x == 'y')
				{
					gotoXY(25, 7);
					cout << "                                             ";
					//THEM SACH
					NODE_DMS* node = ThemSachVaoDMS(ds->List_DMS, ds->MaDauSach);
					if (node != NULL)
					{
						ThemVaoCuoi_DMS(ds->List_DMS, node);
						ds->SoLuongSach++;
						XoaKhungThaoTac();
						XoaTrongKhungSach();
						TextColor(241);
						gotoXY(15 + size, 9);
					}
					XoaKhungThaoTac();
				}
				else
				{
					TextColor(241);
					if (x == -32 || x == 0)
					{
						x = getChar();

					}
					ShowCur(false);

					gotoXY(25, 7);
					cout << "                                                ";
				}
			}
			else if (k == KEYF6)
			{
				if (tt_dms.arr[Pos + Sta]->data.TrangThai == 2)
				{
					TextColor(252);
					gotoXY(25, 7);
					cout << "BAN CO MUON CHUYEN THANH LY THANH CHO MUON SACH NAY KHONG? Y/N: ";
					char x = getChar();
					if (x == 'Y' || x == 'y')
					{
						gotoXY(25, 7);
						cout << "                                                                   ";
						tt_dms.arr[Pos + Sta]->data.TrangThai = 0;
						TextColor(252);
						gotoXY(25, 7);
						cout << "CHUYEN TRANG THAI CHO MUON THANH CONG";
						Sleep(1000);
						gotoXY(25, 7);
						cout << "                                             ";
						XoaTrongKhungSach();
						ShowCur(true);
						TextColor(241);
						gotoXY(15 + size, 9);
					}
					else
					{
						TextColor(241);
						if (x == -32 || x == 0)
						{
							x = getChar();

						}
						ShowCur(false);

						gotoXY(25, 7);
						cout << "                                                                     ";
					}
				}
			}
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 30; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungSach();
			}
			else if (f == KEYESC) return;
			else if ((f <= 58 && f > 47) || (f > 64 && f < 91) || (f > 96 && f < 123) || f == SPACE) {
				if (size == 26)
				{
					gotoXY(30, 7);
					TextColor(252);
					cout << "TEN SACH QUA DAI!!!";
					Sleep(1000);

					gotoXY(30, 7);
					TextColor(241);
					cout << "                       ";
					continue;
				}
				if ((f >= 'a' && f < 'z') || (f >= 'A' && f <= 'Z') || f == SPACE || (f < 58 && f>47))
				{
					if ((f >= 'a' && f < 'z'))
					{
						f = char(f - 32);
					}
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 30; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhungSach();
				}
			}
			gotoXY(0, 0);
		}

		TT_DMS tt_dms_tam;
		tt_dms_tam = KhoiTaoDanhSachTT_DMS(ds->List_DMS, key);
		InsertionSort_TT_DMS(tt_dms_tam);
		tt_dms = TraLai_DMS(tt_dms_tam, key, size);

		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 30; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= tt_dms.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (tt_dms.n <= y) Pos = 0;
		else if (Pos + y >= tt_dms.n) Pos = tt_dms.n - y;
		for (int i = 0, rong = 13; i < y && i < tt_dms.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << tt_dms.arr[i + Pos]->data.MaSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiVT; h++)
				cout << " ";
			gotoXY(disTance + 25, i + rong);
			cout << tt_dms.arr[i + Pos]->data.ViTri;
			disTance += doDaiVT + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTT; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			if (tt_dms.arr[i + Pos]->data.TrangThai == 1)
				cout << "DA CO NGUOI MUON";
			else if (tt_dms.arr[i + Pos]->data.TrangThai == 0)
				cout << "CHO MUON DUOC";
			else if (tt_dms.arr[i + Pos]->data.TrangThai == 2)
				cout << "DA THANH LY";
		}
		TextColor(241);
	}
}
// THAO TAC VOI DAU SACH DE VAO DANH MUC SACH
void InDanhMucSach(LIST_DAUSACH& listDS, TREE_DSDocGia &root) {
	system("color f1");
start:
	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungDMS();
	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH DAU SACH TRONG THU VIEN";
	gotoXY(123, 2);
	cout << "LUA CHON DAU SACH DE CAP NHAT DANH MUC SACH";
	TextColor(241);
	Ve_HOTKEY();
	gotoXY(35, 4);
	TextColor(119);
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			gotoXY(120 + j, 4 + i);
			cout << " ";
		}
	}
	TextColor(124);
	gotoXY(121, 5);
	cout << "ENTER:";
	TextColor(241);
	gotoXY(131, 5);
	cout << "LUA CHON DAU SACH";

	char key[27] = "";
	int size = 0;
	InsertionSort_DauSach_Theo_Ma(listDS);
	LIST_DAUSACH listDS_tam = TraVeDS_DauSach(listDS, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 8;
	int doDaiTen = 34;
	int doDaiTacGia = 24;
	int doDaiTheLoai = 16;
	int doDaiSoTrang = 12;
	int doDaiNamXB = 13;
	int disTance;
	for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 1, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
		disTance += doDaiTen + 1;
		// tacgia
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTacGia; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);

		cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
		disTance += doDaiTacGia + 1;
		//the loai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTheLoai; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
		disTance += doDaiTheLoai + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoTrang; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->SoLuongSach << " QUYEN";
		disTance += doDaiSoTrang + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiNamXB; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << SoLuongSachConLai(listDS_tam.nodesDauSach[i + Pos]->List_DMS) << " QUYEN";
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (listDS_tam.nodesDauSach[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON CAP NHAT DANH MUC SACH KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                            ";
				// 
				ShowCur(true);
				XuLy_Sach(listDS_tam.nodesDauSach[Pos + Sta], root);
				XoaKhungLuaChon();
				XoaKhungThaoTac();
				XoaKhungSachTrongDMS();
				VeKhungDMS();
				TextColor(252);
				gotoXY(35, 3);
				cout << "DANH SACH DAU SACH TRONG THU VIEN";

				gotoXY(123, 2);
				cout << "LUA CHON DAU SACH DE CAP NHAT DANH MUC SACH";
				TextColor(241);
				Ve_HOTKEY();
				gotoXY(35, 4);
				TextColor(119);
				for (int i = 0; i < 3; i++)
				{
					for (int j = 0; j < 8; j++)
					{
						gotoXY(120 + j, 4 + i);
						cout << " ";
					}
				}
				TextColor(124);
				gotoXY(121, 5);
				cout << "ENTER:";
				TextColor(241);
				gotoXY(131, 5);
				cout << "LUA CHON DAU SACH";
				TextColor(241);
				gotoXY(15 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                ";

			}

		}
		else if (k == KEYESC) return;
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 30; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhung2();
			}
			else if (f == KEYESC) return;
			else if ((f < 58 && f>47) || (f > 64 && f < 91) || (f > 96 && f < 123) || f == SPACE) {
				if (size == 26)
				{
					InCauThongBao("TEN SACH KHONG? VUOT QUA QUA DAI!!!");
					continue;
				}
				if ((f >= 'a' && f < 'z') || (f >= 'A' && f <= 'Z') || f == SPACE || (f < 58 && f>47))
				{
					if ((f >= 'a' && f < 'z'))
					{
						f = char(f - 32);
					}
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 30; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhung2();
				}
			}
			gotoXY(0, 0);
		}

		//LIST_DAUSACH listDS_tam;
		listDS_tam = TraVeDS_DauSach(listDS, key, size);
		InsertionSort_DauSach_Theo_Ma(listDS_tam);

		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 30; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= listDS_tam.SL_DauSach) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (listDS_tam.SL_DauSach <= y) Pos = 0;
		else if (Pos + y >= listDS_tam.SL_DauSach) Pos = listDS_tam.SL_DauSach - y;

		for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 1, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
			disTance += doDaiTen + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTacGia; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);

			cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
			disTance += doDaiTacGia + 1;
			//the loai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTheLoai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
			disTance += doDaiTheLoai + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoTrang; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->SoLuongSach << " QUYEN";
			disTance += doDaiSoTrang + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiNamXB; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << SoLuongSachConLai(listDS_tam.nodesDauSach[i + Pos]->List_DMS) << " QUYEN";
		}
		TextColor(241);
	}

}

//============================== THUC HIEN MUON SACH ===============================================

//THUC HIEN THAO TAC NHAP MUON SACH
MUONTRA Nhap_MuonSach(string ms) {
	ShowCur(true);
	MUONTRA mt;
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	int Pos = 1;
	bool kt = 1;// chuoi rong kt = 1
	string day1, month1, year1;
	Date date, ngayMuon;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;

	day1 = ChuyenSoThanhChuoi(date.day);
	month1 = ChuyenSoThanhChuoi(date.month);
	year1 = ChuyenSoThanhChuoi(date.year);
	int vtx = 120;
	TextColor(241);

	gotoXY(130, 14);
	cout << "THUC HIEN MUON SACH";
	gotoXY(vtx, 16);
	cout << "MA SACH: " << ms;
	gotoXY(vtx, 18);
	cout << "NGAY MUON: ";//11 12/1415  / 2020   
	gotoXY(vtx + 11, 18);// ngay
	cout << day1;
	gotoXY(vtx + 13, 18);// /ngay
	cout << "/";
	gotoXY(vtx + 14, 18);// thang
	cout << month1;
	gotoXY(vtx + 16, 18);// /thang
	cout << "/";
	gotoXY(vtx + 17, 18);// nam
	cout << year1;
	gotoXY(vtx + 11 + day1.length(), 18);// ngay
	while (true)
	{
		TextColor(241);
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYLEFT)
			{
				if (Pos == 1)
				{
					Pos = 3;
					gotoXY(vtx + 17 + year1.length(), 18);
				}
				else if (Pos == 2)
				{
					Pos = 1;
					gotoXY(vtx + 11 + day1.length(), 18);
				}
				else if (Pos == 3)
				{
					Pos = 2;
					gotoXY(vtx + 14 + month1.length(), 18);
				}
			}
			else if (k == KEYRIGHT)
			{
				if (Pos == 1)
				{
					Pos = 2;
					gotoXY(vtx + 14 + month1.length(), 18);
				}
				else if (Pos == 2)
				{
					Pos = 3;
					gotoXY(vtx + 17 + year1.length(), 18);
				}
				else if (Pos == 3)
				{
					Pos = 1;
					gotoXY(vtx + 11 + day1.length(), 18);
				}
			}
		}
		else if (k == 13)
		{
			ngayMuon.day = atoi(day1.c_str());
			ngayMuon.month = atoi(month1.c_str());
			ngayMuon.year = atoi(year1.c_str());

			if (day1.length() > 0 && month1.length() > 0 && year1.length() > 0)
			{
				if (ngayMuon.day < 1 || ngayMuon.month < 1 || ngayMuon.year < 1990)
				{
					TextColor(252);
					gotoXY(vtx, 22);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vtx, 22);
					cout << "              ";
					if (ngayMuon.day < 1)
					{
						gotoXY(vtx + 11 + day1.length(), 18);
						Pos = 1;
						continue;
					}
					else if (ngayMuon.month < 1)
					{
						gotoXY(vtx + 14 + month1.length(), 18);
						Pos = 2;
						continue;
					}
					else if (ngayMuon.year < 1)
					{
						gotoXY(vtx + 17 + year1.length(), 18);
						Pos = 3;
						continue;
					}

				}
				if (!KiemTraNgayHopLe(ngayMuon))
				{
					TextColor(252);
					gotoXY(vtx, 22);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vtx, 22);
					cout << "              ";
					gotoXY(vtx + 11 + day1.length(), 18);
					Pos = 1;
					continue;
				}
				else
				{
					// RANG BUOC 1 TUAN
					// NEU > 7 SAI 
					int ktn = KiemTraNgay_HienTai(ngayMuon);
					if (ktn <= MAX_NGAYMUON && ktn >= 0) {
						mt.MaSach = ms;
						mt.NgayMuon = ngayMuon;
						mt.NgayTra.day = 0;
						mt.NgayTra.month = 0;
						mt.NgayTra.year = 0;
						mt.TrangThai = 0;
						return mt;
					}
					else
					{
						TextColor(252);
						gotoXY(vtx, 22);
						cout << "NGAY NHAP SAI !!!";
						getChar();
						gotoXY(vtx, 22);
						cout << "                                        ";
						gotoXY(vtx + 11 + day1.length(), 18);
						Pos = 1;
						continue;
					}
				}
			}
			else
			{
				TextColor(252);
				gotoXY(vtx, 22);
				cout << "DU LIEU RONG NHAP LAI!!!";
				getChar();
				gotoXY(vtx, 22);
				cout << "                              ";
				if (day1.length() == 0)
				{
					gotoXY(vtx + 11 + day1.length(), 18);
					Pos = 1;
					continue;
				}
				else if (month1.length() == 0)
				{
					gotoXY(vtx + 14 + month1.length(), 18);
					Pos = 2;
					continue;
				}
				else if (year1.length() == 0)
				{
					gotoXY(vtx + 17 + year1.length(), 18);
					Pos = 3;
					continue;
				}

			}
		}
		else if (k == 27)
		{
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON THOAT QUA TRINH NAY KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				XoaKhungThaoTac();
				gotoXY(25, 7);
				cout << "                                               ";
				TextColor(241);
				return mt;
			}
			gotoXY(25, 7);
			cout << "                                               ";
			gotoXY(vtx + 11 + day1.length(), 18);
		}
		else
		{
			if (Pos == 1)
			{
				if (day1.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				if (day1.length() < 2)
				{
					xulynhap_ngay(day1, k, kt);
				}
				else if (k == 8)
				{
					xulynhap_ngay(day1, k, kt);
				}
			}
			else if (Pos == 2)
			{
				if (month1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				if (month1.length() < 2)
				{
					xulynhap_ngay(month1, k, kt);
				}
				else if (k == 8)
				{
					xulynhap_ngay(month1, k, kt);
				}

			}
			else if (Pos == 3)
			{
				if (year1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(year1, k, kt);
			}
		}
	}

	return mt;
}

// CHON SACH TRONG DANH MUC SACH DE MUON
int ThucHien_MuonSach(LIST_DMS& listDMS, LIST_MUONTRA& list_MTra) {

	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}
	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH MUC CAC QUYEN SACH";
	TextColor(241);
	gotoXY(130, 2);
	cout << "LUA CHON SACH CHO DOC GIA";
	gotoXY(125, 4);
	cout << "ENTER: CHON SACH";
	VeKhungSachTrongDMS();

	int size = 0;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 18;
	int doDaiVT = 69;
	int doDaiTT = 23;
	int disTance;
	char key[9] = "";

	TT_DMS tt_dms = KhoiTaoDanhSachTT_DMS_DuDieuKien(listDMS, key);
	for (int i = 0, rong = 13; i < y && i < tt_dms.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << tt_dms.arr[i + Pos]->data.MaSach;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiVT; h++)
			cout << " ";
		gotoXY(disTance + 25, i + rong);
		cout << tt_dms.arr[i + Pos]->data.ViTri;
		disTance += doDaiVT + 1;
		// tacgia
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTT; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << "CHO MUON DUOC";
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (tt_dms.arr[Sta + Pos] == NULL) continue;

			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON MUON QUYEN SACH NAY KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                            ";
				TextColor(241);
				gotoXY(15 + size, 9);
				// THEM SACH VAO DANH SACH MUON TRA
				MUONTRA mt = Nhap_MuonSach(tt_dms.arr[Sta + Pos]->data.MaSach);
				if (mt.MaSach == "")
				{
					continue;
				}
				NODE_MUONTRA* p = KhoiTaoNode_MuonTra(mt);
				ThemVaoCuoi_MuonTra(list_MTra, p);
				// THAY DOI TRANG THAI SACH 1 DA CO DOC GIA MUON
				tt_dms.arr[Sta + Pos]->data.TrangThai = 1;
				return 1;
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                ";
			}

		}
		else if (k == KEYESC) {
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON TRO VE KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                  ";
				// 
				ShowCur(true);
				return 0;
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                     ";

			}
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 30; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungSach();
			}
			else if (f == KEYESC) return NULL;
			else if ((f <= 58 && f > 47) || (f > 64 && f < 91) || (f > 96 && f < 123) || f == SPACE) {
				if (size == 26)
				{
					InCauThongBao("TEN SACH QUA DAI!!!");
					continue;
				}
				if ((f >= 'a' && f < 'z') || (f >= 'A' && f <= 'Z') || f == SPACE || (f < 58 && f>47))
				{
					if ((f >= 'a' && f < 'z'))
					{
						f = char(f - 32);
					}
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 30; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhungSach();
				}
			}
			gotoXY(0, 0);
		}
		tt_dms = KhoiTaoDanhSachTT_DMS_DuDieuKien(listDMS, key);
		InsertionSort_TT_DMS(tt_dms);
		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 30; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= tt_dms.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (tt_dms.n <= y) Pos = 0;
		else if (Pos + y >= tt_dms.n) Pos = tt_dms.n - y;
		for (int i = 0, rong = 13; i < y && i < tt_dms.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << tt_dms.arr[i + Pos]->data.MaSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiVT; h++)
				cout << " ";
			gotoXY(disTance + 25, i + rong);
			cout << tt_dms.arr[i + Pos]->data.ViTri;
			disTance += doDaiVT + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTT; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			if (tt_dms.arr[i + Pos]->data.TrangThai)
				cout << "DA CO NGUOI MUON";
			else if (tt_dms.arr[i + Pos]->data.TrangThai == 0)
				cout << "CHO MUON DUOC";
			else
				cout << "DA THANH LY";
		}
		TextColor(241);
	}
}

// CHON DAU SACH DE MUON
void MuonSach(LIST_DAUSACH& listDS, NODE_TREE*& docGia) {
	system("color f1");
start:
	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}
	TextColor(241);
	VeKhungDauSach_MuonSach();

	gotoXY(135, 1);
	TextColor(252);
	cout << "THONG TIN MUON SACH";
	TextColor(241);
	gotoXY(118, 2);
	cout << "MA DOC GIA: " << docGia->data.MaThe;
	gotoXY(118, 3);
	cout << "TEN DOC GIA: " << docGia->data.Ho + " " + docGia->data.Ten;
	TextColor(241);

	VeKhungQuyenSach_DangMuon_Part1();
	int tt = 1;
	for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
	{
		if (k->data.TrangThai == 0)
		{
			string ms = k->data.MaSach.substr(0, 6);
			DAUSACH* ds = binarySearchDauSach(listDS, ms);
			gotoXY(117, 7 + tt);
			cout << tt;
			gotoXY(121, 7 + tt);
			cout << k->data.MaSach;
			gotoXY(135, 7 + tt);
			cout << ds->TenSach;
			gotoXY(165, 7 + tt);
			cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
			tt++;
		}
	}

	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH DAU SACH TRONG THU VIEN";
	TextColor(241);
	Ve_HOTKEY();
	char key[27] = "";
	int size = 0;
	InsertionSort_DauSach_Theo_Ma(listDS);
	LIST_DAUSACH listDS_tam = TraVeDS_DauSach(listDS, key, size);
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 8;
	int doDaiTen = 34;
	int doDaiTacGia = 24;
	int doDaiTheLoai = 16;
	int doDaiSoTrang = 12;
	int doDaiNamXB = 13;
	int disTance;
	for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 1, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
		disTance += doDaiMa + 1;
		//ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 5, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
		disTance += doDaiTen + 1;
		// tacgia
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTacGia; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);

		cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
		disTance += doDaiTacGia + 1;
		//the loai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTheLoai; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
		disTance += doDaiTheLoai + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiSoTrang; h++)
			cout << " ";
		gotoXY(disTance + 4, i + rong);
		cout << listDS_tam.nodesDauSach[i + Pos]->SoLuongSach;
		disTance += doDaiSoTrang + 1;
		//so trang
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiNamXB; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		/*cout << listDS_tam.nodesDauSach[i + Pos]->SoLanMuon;*/
		cout << SoLuongSachConLai(listDS_tam.nodesDauSach[i + Pos]->List_DMS) << " QUYEN";
	}
	TextColor(116);
	gotoXY(105, 6);
	cout<<"        ";
	gotoXY(105, 6);
	cout << listDS_tam.nodesDauSach[Pos]->SoLanMuon << " QUYEN";

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (listDS_tam.nodesDauSach[Sta + Pos] == NULL) continue;
			if (SoLuongSachConLai(listDS_tam.nodesDauSach[Sta + Pos]->List_DMS) == 0)
			{
				InCauThongBao("DAU SACH NAY DA HET YEU CAU MUON DAU SACH KHAC !!!");
				continue;
			}
			if (docGia->data.SoLuongSachDangMuon < 3)
			{
				bool flag = false;
				for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
				{
					//TRANG THAI SACH == 1 LA DANG MUON
					if ((KiemTraTrangThaiSach(listDS_tam.nodesDauSach[Sta + Pos], k->data.MaSach) == 1))
					{

						flag = true;
						InCauThongBao("BAN DA MUON DAU SACH NAY YEU CAU MUON DAU SACH KHAC");
						break;
					}
				}
				if (flag) { flag = false; continue; }
				TextColor(252);
				gotoXY(25, 7);
				cout << "BAN CO MUON MUON QUYEN SACH KHONG? Y/N: ";
				char x = getChar();
				if (x == 'Y' || x == 'y')
				{
					gotoXY(25, 7);
					cout << "                                            ";
					ShowCur(true);
					// MUON SACH
					if (ThucHien_MuonSach(listDS_tam.nodesDauSach[Sta + Pos]->List_DMS, docGia->data.List_MuonTra)) {
						docGia->data.SoLuongSachDangMuon++;
						listDS_tam.nodesDauSach[Sta + Pos]->SoLanMuon++;
					}
					XoaKhungSachTrongDMS();
					XoaKhungThaoTac();
					VeKhungDauSach_MuonSach();
					TextColor(241);
					XoaKhungLuaChon();
					gotoXY(135, 1);
					TextColor(252);
					cout << "THONG TIN MUON SACH";
					TextColor(241);
					gotoXY(118, 2);
					cout << "MA DOC GIA: " << docGia->data.MaThe;
					gotoXY(118, 3);
					cout << "TEN DOC GIA: " << docGia->data.Ho + " " + docGia->data.Ten;
					VeKhungQuyenSach_DangMuon_Part1();
					tt = 1;
					for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
					{
						if (k->data.TrangThai == 0)
						{
							string ms = k->data.MaSach.substr(0, 6);
							DAUSACH* ds = binarySearchDauSach(listDS, ms);
							gotoXY(117, 7 + tt);
							cout << tt;
							gotoXY(121, 7 + tt);
							cout << k->data.MaSach;
							gotoXY(135, 7 + tt);
							cout << ds->TenSach;
							gotoXY(165, 7 + tt);
							cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
							tt++;
						}
					}
					TextColor(241);
					gotoXY(15 + size, 9);
				}
				else
				{
					TextColor(241);
					if (x == -32 || x == 0)
					{
						x = getChar();

					}
					ShowCur(false);

					gotoXY(25, 7);
					cout << "                                                ";

				}
			}
			else
			{
				InCauThongBao("DOC GIA DA MUON 3 QUYEN SACH YEU CAU TRA SACH DE MUON TIEP!");
			}
			TextColor(252);
			gotoXY(35, 3);
			cout << "DANH SACH DAU SACH TRONG THU VIEN";
			TextColor(241);
			Ve_HOTKEY();
		}
		else if (k == KEYESC) {
			XoaKhung();
			VeKhungDocGiaMuonTra();
			VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
			for (int i = 0; i < 44; i++)
			{
				gotoXY(114, i);
				cout << "  ";
			}
			TextColor(241);
			return;
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 30; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhung2();
			}
			else if (f == KEYESC) return;
			else if ((f < 58 && f>47) || (f > 64 && f < 91) || (f > 96 && f < 123) || f == SPACE) {
				if (size == 26)
				{
					InCauThongBao("TEN SACH KHONG? VUOT QUA QUA DAI!!!");
					continue;
				}
				if ((f >= 'a' && f <= 'z') || (f >= 'A' && f <= 'Z') || f == SPACE || (f < 58 && f>47))
				{
					if ((f >= 'a' && f < 'z'))
					{
						f = char(f - 32);
					}
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 30; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhung2();
				}
			}
			gotoXY(0, 0);
		}
		//LIST_DAUSACH listDS_tam;
		listDS_tam = TraVeDS_DauSach(listDS, key, size);
		InsertionSort_DauSach_Theo_Ma(listDS_tam);
		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 30; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= listDS_tam.SL_DauSach) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (listDS_tam.SL_DauSach <= y) Pos = 0;
		else if (Pos + y >= listDS_tam.SL_DauSach) Pos = listDS_tam.SL_DauSach - y;
		for (int i = 0, rong = 13; i < y && i < listDS_tam.SL_DauSach; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 1, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->MaDauSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TenSach;
			disTance += doDaiTen + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTacGia; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);

			cout << listDS_tam.nodesDauSach[i + Pos]->TacGia;
			disTance += doDaiTacGia + 1;
			//the loai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTheLoai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->TheLoai;
			disTance += doDaiTheLoai + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoTrang; h++)
				cout << " ";
			gotoXY(disTance + 4, i + rong);
			cout << listDS_tam.nodesDauSach[i + Pos]->SoLuongSach;
			disTance += doDaiSoTrang + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiNamXB; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			//cout << listDS_tam.nodesDauSach[i + Pos]->SoLanMuon;
			cout << SoLuongSachConLai(listDS_tam.nodesDauSach[i + Pos]->List_DMS) << " QUYEN";
			gotoXY(105, 6);
			cout<<"        ";
			TextColor(116);
			gotoXY(105, 6);
			cout << listDS_tam.nodesDauSach[Sta + Pos]->SoLanMuon << " QUYEN";
			TextColor(241);
		}
		TextColor(241);
	}
}

//============================== THUC HIEN TRA SACH ===============================================

// TRA VE TRANG THAI TRA SACH
int Nhap_TraSach(MUONTRA& mt) {
	ShowCur(true);
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	int Pos = 4;
	bool kt = 1;// chuoi rong kt = 1
	string day1, month1, year1;
	Date date, ngayTra;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;
	string tt = "1";
	day1 = ChuyenSoThanhChuoi(date.day);
	month1 = ChuyenSoThanhChuoi(date.month);
	year1 = ChuyenSoThanhChuoi(date.year);
	int vtx = 120;
	TextColor(252);

	gotoXY(130, 14);
	cout << "THUC HIEN TRA SACH";
	TextColor(241);
	gotoXY(vtx, 16);
	cout << "MA SACH: " << mt.MaSach;
	gotoXY(vtx, 18);
	cout << "NGAY MUON: ";//11 12/1415  / 2020   
	gotoXY(vtx + 11, 18);// ngay
	cout << mt.NgayMuon.day;
	gotoXY(vtx + 13, 18);// /ngay
	cout << "/";
	gotoXY(vtx + 14, 18);// thang
	cout << mt.NgayMuon.month;
	gotoXY(vtx + 16, 18);// /thang
	cout << "/";
	gotoXY(vtx + 17, 18);// nam
	cout << mt.NgayMuon.year;
	gotoXY(vtx, 20);
	cout << "NGAY TRA: ";//11 12/1415  / 2020   
	gotoXY(vtx + 11, 20);// ngay
	cout << day1;
	gotoXY(vtx + 13, 20);// /ngay
	cout << "/";
	gotoXY(vtx + 14, 20);// thang
	cout << month1;
	gotoXY(vtx + 16, 20);// /thang
	cout << "/";
	gotoXY(vtx + 17, 20);// nam
	cout << year1;
	
	TextColor(124);
	gotoXY(vtx, 24);
	cout << "1: TRA SACH";
	gotoXY(vtx + 30, 24);
	cout << "2: MAT SACH";
	gotoXY(vtx, 22);
	TextColor(241);
	cout << "TRANG THAI: " << tt;//12 chi nhap 1 va 2

	while (true)
	{
		TextColor(241);
		char k = getChar();
		if (k == -32)
		{
			k = getChar();
			if (k == KEYLEFT)
			{
				if (Pos == 1)
				{
					Pos = 3;
					gotoXY(vtx + 17 + year1.length(), 20);
				}
				else if (Pos == 2)
				{
					Pos = 1;
					gotoXY(vtx + 11 + day1.length(), 20);
				}
				else if (Pos == 3)
				{
					Pos = 2;
					gotoXY(vtx + 14 + month1.length(), 20);
				}
			}
			else if (k == KEYRIGHT)
			{
				if (Pos == 1)
				{
					Pos = 2;
					gotoXY(vtx + 14 + month1.length(), 20);
				}
				else if (Pos == 2)
				{
					Pos = 3;
					gotoXY(vtx + 17 + year1.length(), 20);
				}
				else if (Pos == 3)
				{
					Pos = 1;
					gotoXY(vtx + 11 + day1.length(), 20);
				}
			}
			else if (k == KEYUP)
			{
				if (Pos == 1 || Pos == 2 || Pos == 3)
				{
					gotoXY(vtx + 12 + tt.length(), 22);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 11 + day1.length(), 20);
					Pos = 1;
				}
			}
			else if (k == KEYDOWN)
			{
				if (Pos == 1 || Pos == 2 || Pos == 3)
				{
					gotoXY(vtx + 12 + tt.length(), 22);
					Pos = 4;
				}
				else if (Pos == 4)
				{
					gotoXY(vtx + 11 + day1.length(), 20);
					Pos = 1;
				}
			}
		}
		else if (k == 13)
		{
			ngayTra.day = atoi(day1.c_str());
			ngayTra.month = atoi(month1.c_str());
			ngayTra.year = atoi(year1.c_str());

			if (day1.length() > 0 && month1.length() > 0 && year1.length() > 0)
			{
				if (ngayTra.day < 1 || ngayTra.month < 1 || ngayTra.year < 1990)
				{
					TextColor(252);
					gotoXY(vtx, 27);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vtx, 27);
					cout << "              ";
					if (ngayTra.day < 1)
					{
						gotoXY(vtx + 11 + day1.length(), 20);
						Pos = 1;
						continue;
					}
					else if (ngayTra.month < 1)
					{
						gotoXY(vtx + 14 + month1.length(), 20);
						Pos = 2;
						continue;
					}
					else if (ngayTra.year < 1)
					{
						gotoXY(vtx + 17 + year1.length(), 20);
						Pos = 3;
						continue;
					}

				}
				if (!KiemTraNgayHopLe(ngayTra))
				{
					TextColor(252);
					gotoXY(vtx, 27);
					cout << "NHAP NGAY SAI";
					getChar();
					gotoXY(vtx, 27);
					cout << "              ";
					gotoXY(vtx + 11 + day1.length(), 20);
					Pos = 1;
					continue;
				}
				else
				{
					int ktn = KiemTraNgay_HienTai(ngayTra);
					if (ktn <= MAX_MUONTRA && ktn >= 0)
					{
						if (QuyChuanTinhThoiGian(mt.NgayMuon) <= QuyChuanTinhThoiGian(ngayTra)) {
							mt.NgayTra = ngayTra;
							mt.TrangThai = atoi(tt.c_str());
							return mt.TrangThai;
						}
						else
						{
							TextColor(252);
							gotoXY(vtx, 27);
							cout << "NGAY MUON KHONG LON HON NGAY TRA";
							getChar();
							gotoXY(vtx, 27);
							cout << "                                        ";
							gotoXY(vtx + 11 + day1.length(), 20);
							Pos = 1;
							continue;
						}
					}
					else
					{
						TextColor(252);
						gotoXY(vtx, 27);
						cout << "NGAY NHAP SAI !!!";
						getChar();
						gotoXY(vtx, 27);
						cout << "                                        ";
						gotoXY(vtx + 11 + day1.length(), 20);
						Pos = 1;
						continue;
					}
				}
			}
			else
			{
				TextColor(252);
				gotoXY(vtx, 27);
				cout << "DU LIEU RONG NHAP LAI!!!";
				getChar();
				gotoXY(vtx, 27);
				cout << "                              ";
				if (day1.length() == 0)
				{
					gotoXY(vtx + 11 + day1.length(), 20);
					Pos = 1;
					continue;
				}
				else if (month1.length() == 0)
				{
					gotoXY(vtx + 14 + month1.length(), 20);
					Pos = 2;
					continue;
				}
				else if (year1.length() == 0)
				{
					gotoXY(vtx + 17 + year1.length(), 20);
					Pos = 3;
					continue;
				}

			}
		}
		else if (k == 27)
		{
			TextColor(252);
			gotoXY(vtx, 27);
			cout << "BAN CO MUON THOAT THUC HIEN TRA SACH KHONG Y/N: ";
			char x = getChar();
			if (x == 'y' || x == 'Y')
			{
				gotoXY(vtx, 27);
				cout << "                                                 ";
				return -1;
			}
			gotoXY(vtx, 27);
			cout << "                                                     ";
			gotoXY(vtx + 11 + day1.length(), 20);
		}
		else
		{
			if (Pos == 1)
			{
				if (day1.length() == 0)
				{
					kt = 1;// rong
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				if (day1.length() < 2)
				{
					xulynhap_ngay(day1, k, kt);
				}
				else if (k == 8)
				{
					xulynhap_ngay(day1, k, kt);
				}
			}
			else if (Pos == 2)
			{
				if (month1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				if (month1.length() < 2)
				{
					xulynhap_ngay(month1, k, kt);
				}
				else if (k == 8)
				{
					xulynhap_ngay(month1, k, kt);
				}

			}
			else if (Pos == 3)
			{
				if (year1.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				xulynhap_ngay(year1, k, kt);
			}
			else if (Pos == 4) {
				if (tt.length() == 0)
				{
					kt = 1;
				}
				else
				{
					kt = 0; // co the xoa duoc
				}
				XuLyNhap_So_12(tt, k, kt);
			}
		}
	}

}

int TraSach(NODE_TREE*& docGia, LIST_DAUSACH& listDS) {
	system("color f1");
start:
	system("cls");
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungTraSach();
	TextColor(252);
	gotoXY(135, 2);
	cout << "LUA CHON TRA SACH";
	TextColor(241);
	Ve_HOTKEY_TraSach();
	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH CAC QUYEN SACH DOC GIA DANG MUON";
	TextColor(241);
	Ve_HOTKEY();
	bool s1 = false, s2 = false, s3 = false;
	// so quyen sach
	int qSach = 3;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 8;
	int doDaiTen = 34;
	int doDaiTacGia = 24;
	int doDaiTheLoai = 16;
	int doDaiSoTrang = 12;
	int doDaiNamXB = 13;
	int disTance;
	int vtSachXoa = 1;
	int slSach = docGia->data.SoLuongSachDangMuon;
	int ttTra = 0;
	NODE_TREE* first = docGia;
	ShowCur(true);
	MUONTRA mt;
	time_t baygio = time(0);
	tm* ltm = localtime(&baygio);
	//int Pos = 1;
	bool kt = 1;// chuoi rong kt = 1
	string day1, month1, year1;
	Date date, ngayMuon;
	date.day = ltm->tm_mday;
	date.month = 1 + ltm->tm_mon;
	date.year = 1900 + ltm->tm_year;

	day1 = ChuyenSoThanhChuoi(date.day);
	month1 = ChuyenSoThanhChuoi(date.month);
	year1 = ChuyenSoThanhChuoi(date.year);
	int vtx = 120;
	TextColor(241);
	int i = 0, rong = 13;
	for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; i < qSach && k != NULL; k = k->pNext)
	{
		string ms = k->data.MaSach.substr(0, 6);
		DAUSACH* ds = binarySearchDauSach(listDS, ms);
		// Neu trang thai ben sach trong danh muc sach la 1
		// va kiem tra chua tra sach thi cho xuat hien sach dang muon
		if (KiemTraTrangThaiSach(ds, k->data.MaSach) == 1 && KiemTraNgayTra(k->data) == 0)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			if (i == 0)
			{
				if (s1 == true)
				{
					if (Sta == 0) TextColor(193);
					else TextColor(207);
				}

			}
			else if (i == 1)
			{
				if (s2 == true)
				{
					if (Sta == 1) TextColor(193);
					else TextColor(207);
				}

			}
			else if (i == 2)
			{
				if (s3 == true)
				{
					if (Sta == 2) TextColor(193);
					else TextColor(207);
				}
			}
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 1, i + rong);
			cout << ds->MaDauSach;
			disTance += doDaiMa + 1;
			//ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 5, i + rong);
			cout << ds->TenSach;
			disTance += doDaiTen + 1;
			// tacgia
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTacGia; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);

			cout << ds->TacGia;
			disTance += doDaiTacGia + 1;
			//the loai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTheLoai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << ds->TheLoai;
			disTance += doDaiTheLoai + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiSoTrang; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << k->data.MaSach;
			disTance += doDaiSoTrang + 1;
			//so trang
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiNamXB; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
			i++;
		}
	}
	TextColor(241);
	ShowCur(false);
	while (true)
	{
		char k = getChar();
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {
			if (docGia->data.List_MuonTra.pHead == NULL) continue;

			if (Sta == 0)
				(s1 == false) ? s1 = true : s1 = false;
			else if (Sta == 1)
				(s2 == false) ? s2 = true : s2 = false;
			else if (Sta == 2)
				(s3 == false) ? s3 = true : s3 = false;
		}
		else if (k == KEYESC) {
			XoaKhung();
			VeKhungDocGiaMuonTra();
			VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
			for (int i = 0; i < 44; i++)
			{
				gotoXY(114, i);
				cout << "  ";
			}
			TextColor(241);
			return 1;
		}
		else if (k == 0) {
			k = getChar();
			if (k == KEYF5)
			{
				if(!s1&&!s2&&!s3) continue;
				TextColor(252);
				gotoXY(25, 7);
				cout << "BAN CO MUON XOA NHUNG QUYEN SACH DA CHON KHONG? Y/N: ";
				char x = getChar();
				if (x == 'Y' || x == 'y') {
					gotoXY(25, 7);
					cout << "                                                           ";
					NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead;
					string ms;
					vtSachXoa = 1;
					while (k != NULL)
					{
						TextColor(241);
						ms = k->data.MaSach.substr(0, 6);
						DAUSACH* ds = binarySearchDauSach(listDS, ms);
						// KIEM TRA NODE MUON TRA CHUA TRA = 0 
						// KIEM TRA SACH CO DANG MUON = 1
						// KIEM TRA NGAY TRA == 0

						if (k->data.TrangThai == 0 && KiemTraTrangThaiSach(ds, k->data.MaSach) == 1 && KiemTraNgayTra(k->data) == 0)
						{
							// CHI DUY NHAT TOI DA 3 QUYEN
							// QUYEN 1
							if (s1)
							{
								ttTra = Nhap_TraSach(k->data);
								// > 0 thi se luu trang thai va ngay tra
								if (ttTra > 0)
								{
									TextColor(252);
									gotoXY(120, 26);
									cout << "TRA SACH THANH CONG !!!";
									Sleep(1000);
									gotoXY(120, 26);
									cout << "                           ";
									//Giam so luong sach
									docGia->data.SoLuongSachDangMuon--;
									slSach--;
									s1 = false;
									ChuyenTrangThaiSach(ds->List_DMS, k->data.MaSach, ttTra);
									vtSachXoa++;
									continue;
								}
								else if (ttTra == -1)
								{
									break;
								}
							}
							else
							{
								// QUYEN THU 2
								if (s2 && vtSachXoa == 2)
								{
									ttTra = Nhap_TraSach(k->data);
									// > 0 thi se luu trang thai va ngay tra
									if (ttTra > 0)
									{
										TextColor(252);
										gotoXY(120, 26);
										cout << "TRA SACH THANH CONG !!!";
										Sleep(1000);
										gotoXY(120, 26);
										cout << "                           ";
										//Giam so luong sach
										docGia->data.SoLuongSachDangMuon--;
										s2 = false;
										ChuyenTrangThaiSach(ds->List_DMS, k->data.MaSach, ttTra);
										vtSachXoa++;
										slSach--;

										continue;
									}
									else if (ttTra == -1)
									{
										break;
									}
								}
								// QUYEN THU 3
								if (s3 && vtSachXoa == 3)
								{
									ttTra = Nhap_TraSach(k->data);
									// > 0 thi se luu trang thai va ngay tra
									if (ttTra > 0)
									{
										TextColor(252);
										gotoXY(120, 26);
										cout << "TRA SACH THANH CONG !!!";
										Sleep(1000);
										gotoXY(120, 26);
										cout << "                           ";
										//Giam so luong sach
										docGia->data.SoLuongSachDangMuon--;
										s3 = false;
										ChuyenTrangThaiSach(ds->List_DMS, k->data.MaSach, ttTra);
										slSach--;
										continue;
									}
									else if (ttTra == -1)
									{
										break;
									}
								}
							}
							vtSachXoa++;
						}
						k = k->pNext;
					}
					XoaTrongKhungTraSach();
					VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
					for (int i = 0; i < 44; i++)
					{
						gotoXY(114, i);
						cout << "  ";
					}
					TextColor(241);
					VeKhungTraSach();
					XoaKhungThaoTac();
					if (s1 == false) Sta = 0;
					else if (s2 == false) Sta = 1;
					else if (s3 == false) Sta = 2;
					ShowCur(false);
				}
				gotoXY(25, 7);
				cout << "                                                           ";
				TextColor(241);

				//NEU CON QUA HAN THI VAN KHOA THE
				if (KiemTraQuaHan_1_DocGia(docGia->data.List_MuonTra) > 0)
					docGia->data.TrangThai = 0;
				else
					docGia->data.TrangThai = 1;
			}
			else if (k == KEYF3) {
				TextColor(252);
				gotoXY(25, 7);
				cout << "BAN CO MUON XOA TAT CA QUYEN SACH NAY KHONG? Y/N: ";
				char x = getChar();
				if (x == 'Y' || x == 'y') {
					gotoXY(25, 7);
					cout << "                                                           ";
					NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead;
					string ms;
					while (k != NULL)
					{
						TextColor(241);
						ms = k->data.MaSach.substr(0, 6);
						DAUSACH* ds = binarySearchDauSach(listDS, ms);
						// KIEM TRA XEM QUYEN SACH NAY CO DANG MUON HAY KHONG
						// 1 DANG MUON , 0 CHUA AI MUON
						// KIEM TRA CHUA TRA = 0
						// KIEM TRA SACH CO DANG MUON = 1
						// KIEM TRA NGAY TRA == 0 (CHUA TRA)

						if (k->data.TrangThai == 0 && KiemTraTrangThaiSach(ds, k->data.MaSach) == 1 && KiemTraNgayTra(k->data) == 0)
						{
							// CHI DUY NHAT TOI DA 3 QUYEN
							ttTra = Nhap_TraSach(k->data);
							if (ttTra > 0)
							{
								TextColor(252);
								gotoXY(120, 26);
								cout << "TRA SACH THANH CONG !!!";
								Sleep(1000);
								gotoXY(120, 26);
								cout << "                           ";
								//Giam so luong sach
								docGia->data.SoLuongSachDangMuon--;
								slSach--;
								s1 = false;
								ChuyenTrangThaiSach(ds->List_DMS, k->data.MaSach, ttTra);
							}
							else if (ttTra == -1) break;
						}
						k = k->pNext;
					}
					XoaTrongKhungTraSach();
					VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
					for (int i = 0; i < 44; i++)
					{
						gotoXY(114, i);
						cout << "  ";
					}
					TextColor(241);
					VeKhungTraSach();
					XoaKhungThaoTac();
					if (s1 == false) Sta = 0;
					else if (s2 == false) Sta = 1;
					else if (s3 == false) Sta = 2;
					ShowCur(false);
				}
				gotoXY(25, 7);
				cout << "                                                           ";
				TextColor(241);

			}
		}
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= slSach) Sta--;
		else if (Sta >= qSach) {
			Sta--;
			Pos++;
		}
		if (Pos <= -1) Pos = 0;
		else if (slSach <= qSach) Pos = 0;
		else if (Pos + qSach >= slSach) Pos = slSach - qSach;
		i = 0, rong = 13;
		for (NODE_MUONTRA* k = docGia->data.List_MuonTra.pHead; i < qSach && k != NULL; k = k->pNext)
		{
			string ms = k->data.MaSach.substr(0, 6);
			DAUSACH* ds = binarySearchDauSach(listDS, ms);
			// Neu trang thai ben sach trong danh muc sach la 1
			// va kiem tra chua tra sach thi cho xuat hien sach dang muon
			if (KiemTraTrangThaiSach(ds, k->data.MaSach) == 1 && KiemTraNgayTra(k->data) == 0)
			{
				disTance = 2;
				if (Sta == i) TextColor(116);
				else TextColor(241);
				if (i == 0)
				{
					if (s1 == true)
					{
						if (Sta == 0) TextColor(193);
						else TextColor(207);
					}

				}
				else if (i == 1)
				{
					if (s2 == true)
					{
						if (Sta == 1) TextColor(193);
						else TextColor(207);
					}

				}
				else if (i == 2)
				{
					if (s3 == true)
					{
						if (Sta == 2) TextColor(193);
						else TextColor(207);
					}
				}
				//ma
				gotoXY(disTance, i + rong);
				int h = 0;
				for (; h < doDaiMa; h++)
					cout << " ";
				gotoXY(disTance + 1, i + rong);
				cout << ds->MaDauSach;
				disTance += doDaiMa + 1;
				//ten
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTen; h++)
					cout << " ";
				gotoXY(disTance + 5, i + rong);
				cout << ds->TenSach;
				disTance += doDaiTen + 1;
				// tacgia
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTacGia; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);

				cout << ds->TacGia;
				disTance += doDaiTacGia + 1;
				//the loai
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiTheLoai; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);
				cout << ds->TheLoai;
				disTance += doDaiTheLoai + 1;
				//so trang
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiSoTrang; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);
				cout << k->data.MaSach;
				disTance += doDaiSoTrang + 1;
				//so trang
				gotoXY(disTance, i + rong);
				h = 0;
				for (; h < doDaiNamXB; h++)
					cout << " ";
				gotoXY(disTance + 2, i + rong);
				cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
				i++;
			}
		}
		TextColor(241);
	}
}

//============================== MENU MUON TRA SACH ===============================================

// HIEN THI DOC GIA MUON MUON SACH
void MuonTraSach(TREE_DSDocGia& list_DG, LIST_DAUSACH& listDS)
{
	system("color f1");
	// MANG TUYEN TINH CON TRO DOC GIA DU DIEU KIEN MUON HOAT DONG 
	// VA DUNG DE XU LY KHI TIM KIEM DI CHUYEN LEN XUONG
	// 2 DANH SACH TUYEN TINH DOC GIA
	TT_TREE tt_Tree;
	KhoiTaoDanhSachDocGia_DuDieuKien_MuonTra(tt_Tree, list_DG);
	InsertionSort_TT_Tree_Theo_Ma(tt_Tree);
	char key[7] = "";
	system("cls");
start:
	VeKhungCH(0, 0, 175, 44, TRUE, BLUE);
	for (int i = 0; i < 44; i++)
	{
		gotoXY(114, i);
		cout << "  ";
	}

	VeKhungDocGiaMuonTra();
	TextColor(252);
	gotoXY(35, 3);
	cout << "DANH SACH DOC GIA TRONG THU VIEN";
	gotoXY(125, 2);
	cout << "MENU LUA CHON MUON TRA SACH";
	Ve_HOTKEY();
	int size = 0;
	int y = 19;
	int Sta = 0;
	int Pos = 0;
	int doDaiMa = 13;
	int doDaiHo = 37;
	int doDaiTen = 11;
	int doDaiPhai = 14;
	int doDaiTrangThai = 12;
	int doDaiGhiChu = 20;
	int disTance;
	int ngayQH;
	for (int i = 0, rong = 13; i < y && i < tt_Tree.n; i++)
	{
		disTance = 2;
		if (Sta == i) TextColor(116);
		else TextColor(241);
		//ma
		gotoXY(disTance, i + rong);
		int h = 0;
		for (; h < doDaiMa; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.MaThe;
		disTance += doDaiMa + 1;
		//ho
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiHo; h++)
			cout << " ";
		gotoXY(disTance + 7, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.Ho + " " + tt_Tree.arr[i + Pos]->data.Ten;
		disTance += doDaiHo + 1;
		// ten
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTen; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);

		cout << tt_Tree.arr[i + Pos]->data.Phai;
		disTance += doDaiTen + 1;
		//Phai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiPhai; h++)
			cout << " ";
		gotoXY(disTance + 3, i + rong);
		cout << tt_Tree.arr[i + Pos]->data.SoLuongSachDangMuon << " QUYEN";
		disTance += doDaiPhai + 1;
		//Trang Thai
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiTrangThai; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		if (tt_Tree.arr[i + Pos]->data.TrangThai == 1)
			cout << "HOAT DONG";
		else
			cout << "BI KHOA";
		disTance += doDaiTrangThai + 1;
		gotoXY(disTance, i + rong);
		h = 0;
		for (; h < doDaiGhiChu; h++)
			cout << " ";
		gotoXY(disTance + 2, i + rong);
		ngayQH = KiemTraQuaHan_1_DocGia(tt_Tree.arr[i + Pos]->data.List_MuonTra);
		if (ngayQH > 0) {
			TextColor(207);
			cout << "QUA HAN " << ngayQH << " NGAY";
			TextColor(241);
		}
		else
			cout << "CON LAI " << -ngayQH << " NGAY";
	}

	while (true)
	{
		TextColor(241);
		gotoXY(4, 9);
		cout << "TIM KIEM:\t";
		gotoXY(15 + size, 9);
		ShowCur(true);

		char k = getChar();
		ShowCur(false);
		if (k == -32)
		{
			ShowCur(false);
			k = getChar();
			if (k == KEYUP) Sta--;
			else if (k == KEYDOWN) Sta++;
			else continue;
		}
		else if (k == KEYENTER) {

			if (tt_Tree.arr[Sta + Pos] == NULL) continue;
			TextColor(252);
			gotoXY(25, 7);
			cout << "BAN CO MUON XEM THONG TIN DOC GIA MUON SACH KHONG? Y/N: ";
			char x = getChar();
			if (x == 'Y' || x == 'y')
			{
				gotoXY(25, 7);
				cout << "                                                            ";

				//NODE_TREE* node = TimNodedocGiaTrongTree(list_DG, tt_Tree.arr[Sta + Pos]->data.MaThe);
				gotoXY(135, 14);
				TextColor(252);
				cout << "THONG TIN MUON SACH";
				TextColor(241);
				gotoXY(118, 16);
				cout << "MA DOC GIA: " << tt_Tree.arr[Sta + Pos]->data.MaThe;
				gotoXY(118, 17);
				cout << "TEN DOC GIA: " << tt_Tree.arr[Sta + Pos]->data.Ho + " " + tt_Tree.arr[Sta + Pos]->data.Ten;
				TextColor(241);

				VeKhungQuyenSach_DangMuon();
				int tt = 0;
				for (NODE_MUONTRA* k = tt_Tree.arr[Sta + Pos]->data.List_MuonTra.pHead; k != NULL; k = k->pNext)
				{
					if (k->data.TrangThai == 0)
					{
						string ms = k->data.MaSach.substr(0, 6);
						DAUSACH* ds = binarySearchDauSach(listDS, ms);
						gotoXY(117, 23 + tt * 2);
						cout << tt + 1;
						gotoXY(121, 23 + tt * 2);
						cout << k->data.MaSach;
						gotoXY(135, 23 + tt * 2);
						cout << ds->TenSach;
						gotoXY(165, 23 + tt * 2);
						cout << k->data.NgayMuon.day << "/" << k->data.NgayMuon.month << "/" << k->data.NgayMuon.year;
						tt++;
					}
				}
				_getch();
				XoaKhungThaoTac();
				TextColor(241);
				gotoXY(15 + size, 9);
			}
			else
			{
				TextColor(241);
				if (x == -32 || x == 0)
				{
					x = getChar();

				}
				ShowCur(false);

				gotoXY(25, 7);
				cout << "                                                              ";

			}

		}
		else if (k == KEYESC) return;
		else if (k == 0)
		{
			k = getChar();
			// MUON SACH
			if (k == KEYF3)
			{
				if (list_DG, tt_Tree.arr[Sta + Pos]->data.SoLuongSachDangMuon == 3)
				{
					InCauThongBao("DOC GIA DA MUON 3 QUYEN SACH YEU CAU TRA SACH DE MUON TIEP!");
					continue;
				}
				ngayQH = KiemTraQuaHan_1_DocGia(tt_Tree.arr[Sta + Pos]->data.List_MuonTra);
				if (ngayQH > 0)
				{
					InCauThongBao("DOC GIA DA MUON SACH QUA HAN 7 NGAY YEU CAU TRA SACH DE MUON TIEP!");
					continue;
				}
				char select;
				gotoXY(25, 7);
				TextColor(252);
				cout << "BAN CO MUON MUON SACH KHONG? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{
					//MUON SACH
					MuonSach(listDS, tt_Tree.arr[Sta + Pos]);
					gotoXY(25, 7);
					cout << "                                           ";
					TextColor(252);
					gotoXY(35, 3);
					cout << "DANH SACH DOC GIA TRONG THU VIEN";
					gotoXY(125, 2);
					cout << "MENU LUA CHON MUON TRA SACH";
					TextColor(241);
					Ve_HOTKEY();
					VeKhungDocGiaMuonTra();
				}
				else
				{
					TextColor(241);
					if (select == -32 || select == 0)
					{
						select = getChar();

					}
					ShowCur(false);
					gotoXY(25, 7);
					cout << "                                           ";

				}
			}
			else if (k == KEYF5)
			{
				if (tt_Tree.arr[Sta + Pos]->data.SoLuongSachDangMuon == 0)
				{
					InCauThongBao("XIN LOI KHONG CO QUYEN SACH NAO DE TRA SACH !!!");
					continue;
				}
				ShowCur(true);
				char select;
				gotoXY(25, 7);
				TextColor(252);
				cout << "BAN CO MUON TRA SACH HAY KHONG? Y/N: ";
				select = getChar();
				if (select == 'Y' || select == 'y')
				{
					TextColor(241);
					gotoXY(25, 7);
					cout << "                                                  ";
					TraSach(tt_Tree.arr[Sta + Pos], listDS);
					ShowCur(false);
					XoaKhungThaoTac();
					TextColor(252);
					gotoXY(35, 3);
					cout << "DANH SACH DOC GIA TRONG THU VIEN";
					TextColor(241);
					Ve_HOTKEY();
					TextColor(252);
					gotoXY(125, 2);
					cout << "MENU LUA CHON MUON TRA SACH";
					gotoXY(15 + size, 9);

				}
				else
				{
					TextColor(241);
					if (select == -32)
					{
						select = getChar();
					}
					ShowCur(false);
					gotoXY(25, 7);
					cout << "                                                  ";
					continue;
				}
			}
			else if (k == 0)
			{
				continue;
			}
			else continue;
		}
		else
		{
			ShowCur(false);
			char f = k;
			if (f == KEYBACK)
			{
				gotoXY(15 + size, 9);
				if (size == 0) continue;
				key[--size] = '\0';
				gotoXY(15, 9);
				for (int k = strlen(key); k < 10; k++)
					cout << " ";
				gotoXY(15, 9);
				cout << key;
				Sta = 0;
				Pos = 0;
				XoaTrongKhungMuonTra();
			}
			else if (f == KEYESC) return;
			else if ((f < 58 && f > 47)) {
				if (strlen(key) == 6)
				{
					InCauThongBao("MA DOC GIA KHONG? VUOT QUA 6 SO");
					continue;
				}
				if (size == 26) continue;
				if ((f >= '0' && f <= '9'))
				{
					key[size++] = f;
					key[size] = '\0';
					gotoXY(15, 9);
					cout << key;
					for (int k = strlen(key); k < 10; k++)
						cout << " ";
					Sta = 0;
					Pos = 0;
					XoaTrongKhungMuonTra();
				}
			}
			gotoXY(0, 0);
		}

		TT_TREE tt_Tree_main;
		KhoiTaoDanhSachDocGia_DuDieuKien_MuonTra(tt_Tree_main, list_DG);
		InsertionSort_TT_Tree_Theo_Ma(tt_Tree_main);
		tt_Tree = TraLaiDS_DocGia(tt_Tree_main, key, size);

		gotoXY(15 + size, 9);
		gotoXY(15, 9);
		cout << "                                                     ";
		gotoXY(15, 9);
		cout << key;
		for (int k = strlen(key); k < 10; k++)
			cout << " ";
		if (Sta <= -1) {
			Sta = 0;
			Pos--;
		}
		else if (Sta >= tt_Tree.n) Sta--;
		else if (Sta >= y) {
			Sta--;
			Pos++;
		}

		if (Pos <= -1) Pos = 0;
		else if (tt_Tree.n <= y) Pos = 0;
		else if (Pos + y >= tt_Tree.n) Pos = tt_Tree.n - y;
		for (int i = 0, rong = 13; i < y && i < tt_Tree.n; i++)
		{
			disTance = 2;
			if (Sta == i) TextColor(116);
			else TextColor(241);
			//ma
			gotoXY(disTance, i + rong);
			int h = 0;
			for (; h < doDaiMa; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.MaThe;
			disTance += doDaiMa + 1;
			//ho
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiHo; h++)
				cout << " ";
			gotoXY(disTance + 7, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.Ho + " " + tt_Tree.arr[i + Pos]->data.Ten;
			disTance += doDaiHo + 1;
			// ten
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTen; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);

			cout << tt_Tree.arr[i + Pos]->data.Phai;
			disTance += doDaiTen + 1;
			//Phai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiPhai; h++)
				cout << " ";
			gotoXY(disTance + 3, i + rong);
			cout << tt_Tree.arr[i + Pos]->data.SoLuongSachDangMuon << " QUYEN";
			disTance += doDaiPhai + 1;
			//Trang Thai
			gotoXY(disTance, i + rong);
			h = 0;
			for (; h < doDaiTrangThai; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			if (tt_Tree.arr[i + Pos]->data.TrangThai == 1)
				cout << "HOAT DONG";
			else
				cout << "BI KHOA";

			disTance += doDaiTrangThai + 1;
			gotoXY(disTance, i + rong);
			doDaiGhiChu = 20;
			h = 0;
			for (; h < doDaiGhiChu; h++)
				cout << " ";
			gotoXY(disTance + 2, i + rong);
			ngayQH = KiemTraQuaHan_1_DocGia(tt_Tree.arr[i + Pos]->data.List_MuonTra);
			if (ngayQH > 0) {
				TextColor(207);
				cout << "QUA HAN " << ngayQH << " NGAY";
				TextColor(241);
			}
			else
				cout << "CON LAI " << -ngayQH << " NGAY";
		}
		TextColor(241);
	}
}
// CHON DOC GIA TRONG THU VIEN

//============================================== MAIN MENU =====================================
void mainMenu(LIST_DAUSACH& listDS, TREE_DSDocGia& listDG, LIST_MUONTRA& list_MTra) {
	// set console window.
	SetConsoleTitle(_T("QUAN LY THU VIEN"));
	//resizeConsole(1250, 768);
	resizeConsole(1290, 768);
	int  a = 1;

	while (true)
	{
		system("color f1");

		int i = MenuChonLua(a);
		if (i == 1)
		{
			clrscr();
			system("color f1");
			NODE_TREE* node = InDanhSachDocGia(listDG, listDS);
			a = i;
		}
		else if (i == 2)
		{
			clrscr();
			system("color f1");
			InsertionSortDauSach(listDS);
			InDanhSachDauSach(listDS);
			a = i;
		}
		else if (i == 3)
		{
			clrscr();
			system("color f1");
			InsertionSortDauSach(listDS);
			InDanhMucSach(listDS, listDG);
			a = i;
		}
		else if (i == 4)
		{
			clrscr();
			system("color f1");
			MuonTraSach(listDG, listDS);
			a = i;
		}
		else if (i == 5)
		{
			clrscr();
			InDanhSachDauSach_TheoSoLanMuon(listDS);
			_getch();
			a = i;
		}
		else if (i == 6)
		{
			clrscr();
			InDanhSachDocGia_QuaHan(listDS, listDG);
			_getch();
			a = i;
		}
		else if (i == 7)
		{
			clrscr();
			a = i;
			break;
		}
	}

}

