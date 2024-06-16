#pragma once
#include "CSanPham.h"
class CCDAmNhac: public CSanPham
{
private:
	string TenCaSi, TenSX;
public:
	void Nhap();
	void Xuat();
};

