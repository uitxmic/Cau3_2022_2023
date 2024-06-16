#pragma once
#include "CKhachHang.h"

class CCuaHang
{
private:
	int SoKhachHang;
	CKhachHang* ds[1000];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
	void NhieuNhat();
};

