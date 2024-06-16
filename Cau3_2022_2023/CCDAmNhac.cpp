#include "CCDAmNhac.h"

void CCDAmNhac::Nhap()
{
	cout << "San pham la CD Am nhac.\n";
	CSanPham::Nhap();
	cout << "Nhap ten ca si: ";
	cin.ignore();
	getline(cin, TenCaSi);
	cout << "Nhap ten nha san xuat: ";
	cin.ignore();
	getline(cin, TenSX);
}

void CCDAmNhac::Xuat()
{
	cout << "San pham la CD Am nhac.\n";
	CSanPham::Xuat();
	cout << "Ten ca si: " << TenCaSi << '\n';
	cout << "Ten nha san xuat: " << TenSX << '\n';
}
