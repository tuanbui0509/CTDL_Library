#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <string.h>
#include <windows.h>

//constant
#define MAX_DAUSACH  100

// Cac HotKey
// Quay con tro ve 1 don vi char
#define KEYBACK 8
// OK
#define KEYENTER 13
// thoat truc tiep va ve Menu chinh
#define KEYESC  27
// Di len
#define KEYUP 72
// Di xuong
#define KEYDOWN 80
// Di qua trai
#define KEYLEFT 75
// Di qua phai 
#define KEYRIGHT 77
// Luu
#define KEY_F2 60
// Xoa
#define KEYF3 61
// Hieu chinh
#define KEYF4 62
// Them
#define KEYF5 63

// sap xep theo ten
#define KEYF6 64
// sap xep theo ma
#define KEYF7 65
// liet ke sach doc gia dang muon
#define KEYF8 66
// Save
#define KEY_F10 68
// Cuon page xuong duoi
#define PAGE_DOWN 81
// Cuon page len tren
#define PAGE_UP 73
// Khoang trang
#define SPACE  32
//  Tim kiem
#define KEY_F9 67

// Tro ve
#define TAB 9

// thay unsigned int thanh uint
//typedef unsigned int uint;

// ma mau
#define AQUA 3
#define PURPLE 5
#define LIGHT_AQUA 11
#define LIGHT_YELLOW 14
#define LIGHT_GREEN 10 
#define BLACK 0
#define WHITE 7
#define GREEN 2
#define BRIGHT_WHITE 15
#define BLUE 1
#define LIGHT_RED 12


// size man hinh
#define GWIDTH 1100
#define GHEIGHT 650

// vi tri in ten, mssv, lop
#define xTen 53
#define yTen 22

// vitri khung loading
#define xLoading 15
#define yLoading 33


// vi tri menu chinh
#define xMainMenu 10
#define yMainMenu 12

// vi tri dong chu chay
#define xChuChay 45
#define yChuChay 30

//toa do max
#define xMax 132
#define yMax 35

//goc toa do
#define xOrdinal 0
#define yOrdinal 0

// Max Ma doc gia
#define Max_MADG 99999
// Min Ma doc Gia
#define Min_MADG 0

// toa do x cua SubMainMenus
#define xSubMainMenus1 40
#define xSubMainMenus2 52
#define xSubMainMenus3 52


// toa do y cua  bang hien thi
#define yDisplay 2

#define yDisplayMT 18

#define yDisplayTop10 5

// toa do t cua cac hoat key F2, F3, F4, F10
#define yHotkey 35

// vi tri Tieu de 
#define xTitle 97
#define yTitle 5

// chieu dai dai nhat cua ten
#define MAX_TEN 7

// chieu dai dai nhat cua ho 
#define MAX_HO 16

//chieu dai dai nhat cua ten sach
#define MAX_TENSACH 24

// chieu dai dai nhat cua ten tac gia
#define MAX_TENTG 17

// chieu dai dai nhat cua ISBN
#define MAX_ISBN 4

// chieu dai dai nhat cua the loai sach
#define MAX_THELOAISACH 11

// the de nhap trang thai va nhap phai
#define NHAP_TRANG_THAI 1
#define NHAP_PHAI 0

// vi tri dong chu thong bao
#define X_NOTIFY 74
#define Y_NOTIFY 19

// vi tri subMainMenu4 

#define xINDOCGIA 80
#define yINDOCGIA 20


// so luong dong xuat hien trong 1 bang thong tin
#define NUMBER_LINES  29

void resizeConsole(int width, int height)
{
	HWND console = GetConsoleWindow();
	RECT r;
	GetWindowRect(console, &r);
	MoveWindow(console, r.left, r.top, width, height, TRUE);
}

int wherex(void)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	return screen_buffer_info.dwCursorPosition.X + 1;
}

int wherey(void)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);
	return screen_buffer_info.dwCursorPosition.Y + 1;
}

// HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(
		GetStdHandle(STD_OUTPUT_HANDLE),
		coord
	);
}

void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
	SetConsoleCursorInfo(handle, &cursor);
}

void SetColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	wAttributes &= 0xfff0;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

void SetBGColor(WORD color)
{
	HANDLE hConsoleOutput;
	hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);

	CONSOLE_SCREEN_BUFFER_INFO screen_buffer_info;
	GetConsoleScreenBufferInfo(hConsoleOutput, &screen_buffer_info);

	WORD wAttributes = screen_buffer_info.wAttributes;
	color &= 0x000f;
	color <<= 4;
	wAttributes &= 0xff0f;
	wAttributes |= color;

	SetConsoleTextAttribute(hConsoleOutput, wAttributes);
}

void cls(HANDLE hConsole)
{
	COORD coordScreen = { 0, 0 };    // home for the cursor 
	DWORD cCharsWritten;
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	DWORD dwConSize;

	// Get the number of character cells in the current buffer. 

	if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
		return;
	dwConSize = csbi.dwSize.X * csbi.dwSize.Y;

	// Fill the entire screen with blanks.

	if (!FillConsoleOutputCharacter(hConsole, (TCHAR) ' ',
		dwConSize, coordScreen, &cCharsWritten))
		return;

	// Get the current text attribute.
	if (!GetConsoleScreenBufferInfo(hConsole, &csbi))
		return;

	// Set the buffer's attributes accordingly.
	if (!FillConsoleOutputAttribute(hConsole, csbi.wAttributes,
		dwConSize, coordScreen, &cCharsWritten))
		return;

	// Put the cursor at its home coordinates.
	SetConsoleCursorPosition(hConsole, coordScreen);
}

void clrscr()
{
	HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
	cls(hCon);
}

//bool GetKey(int key)
//{
//	return GetAsyncKeyState(key);
//}

//void normalTextColor() {
//	SetColor(LIGHT_YELLOW);
//}
//
//void normalBGColor()
//{
//	SetColor(LIGHT_YELLOW);
//	SetBGColor(AQUA);
//}

char getCursorChar()    /// Function which returns character on console's cursor position 
{
	char c = '\0';
	CONSOLE_SCREEN_BUFFER_INFO con;
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	if (hcon != INVALID_HANDLE_VALUE &&
		GetConsoleScreenBufferInfo(hcon, &con))
	{
		DWORD read = 0;
		if (!ReadConsoleOutputCharacterA(hcon, &c, 1,
			con.dwCursorPosition, &read) || read != 1
			)
			c = '\0';
	}
	return c;
}


char readChar(int x, int y)  /// Function which reads character at specific coordinates
{
	gotoXY(x, y);
	char ccccc = getCursorChar();
	return ccccc;
}

void TextColor(int color)
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color);
}


//Ham an thanh cuon
void remove_scrollbar()
{

	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO info;
	GetConsoleScreenBufferInfo(handle, &info);
	COORD new_size =
	{
		info.srWindow.Right - info.srWindow.Left + 1,
		info.srWindow.Bottom - info.srWindow.Top + 1
	};
	SetConsoleScreenBufferSize(handle, new_size);
	system("color F0");
}
