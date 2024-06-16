#include "CHoaDon.h"

void CHoaDon::Nhap()
{
	cout << "Nhap Ma Hoa don: ";
	cin.ignore();
	getline(cin, MaHD);
	cout << "Nhap Ngay lap Hoa don: ";
	cin.ignore();
	getline(cin, NgayLapHD);
	cout << "Nhap so san pham: ";
	cin >> SoSanPham;
	int loai;
	for (int i = 0;i < SoSanPham;i++)
	{
		cout << "Nhap thong tin san pham thu " << i + 1 << '\n';
		cout << "Nhap loai.\n";
		cout << "(0. Tranh Anh, 1. CD Am nhac): ";
		cin >> loai;
		if (loai == 0)
			ds[i] = new CTranhAnh;
		else
			ds[i] = new CCDAmNhac;
		ds[i]->Nhap();
	}
}

void CHoaDon::Xuat()
{
	cout << "Ma Hoa Don: " << MaHD << '\n';
	cout << "Ngay lap hoa don: " << NgayLapHD << '\n';
	for (int i = 0;i < SoSanPham;i++)
		ds[i]->Xuat();
}

float CHoaDon::TinhTien()
{
	float Tong = 0;
	for (int i = 0;i < SoSanPham;i++)
	{
		Tong += ds[i]->TinhTien();
	}
	return Tong;
}
