#pragma once
#include "CHoaDon.h"

class CHoaDon;

class CKhachHang
{
	string MaKH;
	string TenKH;
	string SDT;
	int SoHoaDon;
	CHoaDon* ds[100];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
};