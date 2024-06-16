#include "CSanPham.h"

void CSanPham::Nhap()
{
	cout << "Nhap Ma so: ";
	cin.ignore();
	getline(cin, MaSo);
	cout << "Nhap hoa Tieu De: ";
	cin.ignore();
	getline(cin, TieuDe);
	cout << "Nhap gia ban: ";
	cin >> GiaBan;
}

void CSanPham::Xuat()
{
	cout << "Ma so: " << MaSo << '\n';
	cout << "Tieu De: " << TieuDe << '\n';
	cout << "Gia ban: " << GiaBan << '\n';
}

float CSanPham::TinhTien()
{
	return GiaBan;
}


