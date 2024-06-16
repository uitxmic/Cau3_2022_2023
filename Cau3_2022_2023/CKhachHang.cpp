#include "CKhachHang.h"

void CKhachHang::Nhap()
{
	cout << "Nhap Ma khach hang: ";
	cin.ignore();
	getline(cin, MaKH);
	cout << "Nhap Ten khach hang: ";
	cin.ignore();
	getline(cin, TenKH);
	cout << "Nhap SDT: ";
	cin.ignore();
	getline(cin, SDT);
	cout << "Nhap so hoa don: ";
	cin >> SoHoaDon;
	for (int i = 0;i < SoHoaDon;i++)
	{
		cout << "Nhap so hoa don thu " << i + 1 << '\n';
		ds[i] = new CHoaDon;
		ds[i]->Nhap();
	}
}

void CKhachHang::Xuat()
{
	cout << "Ma khach hang: " << MaKH << '\n';
	cout << "Ten Khach hang: " << TenKH << '\n';
	cout << "SDT: " << SDT << '\n';
	for (int i = 0;i < SoHoaDon;i++)
	{
		cout << "Thong tin hoa don thu " << i + 1 << '\n';
		ds[i]->Xuat();
	}
}

float CKhachHang::TinhTien()
{
	float Tong = 0;
	for (int i = 0;i < SoHoaDon;i++)
		Tong += ds[i]->TinhTien();
	return Tong;
}
