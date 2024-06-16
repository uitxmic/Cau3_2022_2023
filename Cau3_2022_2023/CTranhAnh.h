#pragma once
#include "CSanPham.h"
class CTranhAnh: public CSanPham
{
private:
	float ChieuRong, ChieuCao;
	string TenHoaSi;
public:
	void Nhap();
	void Xuat();
};

