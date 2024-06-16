#include "CCuaHang.h"

void CCuaHang::Nhap()
{
	cout << "Nhap so khach hang: ";
	cin >> SoKhachHang;
	for (int i = 0;i < SoKhachHang;i++)
	{
		cout << "Nhap thong tin khach hang thu " << i + 1 << '\n';
		ds[i] = new CKhachHang;
		ds[i]->Nhap();
	}
}

void CCuaHang::Xuat()
{
	cout << "So khach hang: " << SoKhachHang << '\n';
	for (int i = 0;i < SoKhachHang;i++)
	{
		cout << "Thong tin khach hang thu " << i + 1 << '\n';
		ds[i]->Xuat();
	}
}

float CCuaHang::TinhTien()
{
	float Tong = 0;
	for (int i = 0;i < SoKhachHang;i++)
		Tong += ds[i]->TinhTien();
	return Tong;
}

void CCuaHang::NhieuNhat()
{
	CKhachHang* nn;
	nn = ds[0];
	for (int i = 0;i < SoKhachHang;i++)
	{
		if (ds[i]->TinhTien() >= nn->TinhTien())
			nn = ds[i];
	}
	cout << "Thong tin khach hang mua nhieu nhat: \n";
	nn->Xuat();
}
