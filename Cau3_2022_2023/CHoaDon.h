#pragma once
#include "CSanPham.h"
#include "CTranhAnh.h"
#include "CCDAmNhac.h"
#include "CKhachHang.h"

class CHoaDon
{
private:
	string MaHD, NgayLapHD;
	int SoSanPham;
	CSanPham* ds[1000];
public:
	void Nhap();
	void Xuat();
	float TinhTien();
};

