#include "CTranhAnh.h"

void CTranhAnh::Nhap()
{
	cout << "San pham la tranh anh.\n";
	CSanPham::Nhap();
	cout << "Nhap chieu rong: ";
	cin >> ChieuRong;
	cout << "Nhap chieu cao: ";
	cin >> ChieuCao;
	cout << "Nhap ten hoa si: ";
	cin.ignore();
	getline(cin, TenHoaSi);
}

void CTranhAnh::Xuat()
{
	cout << "San pham la tranh anh.\n";
	CSanPham::Xuat();
	cout << "Chieu rong: " << ChieuRong << '\n';
	cout << "Chieu cao: " << ChieuCao << '\n';
	cout << "Ten hoa si: " << TenHoaSi << '\n';
}
