#pragma once
#include <iostream>
#include <string>
using namespace std;

class CSanPham
{
protected:
	string MaSo, TieuDe;
	float GiaBan;
public:
	virtual void Nhap();
	virtual void Xuat();
	float TinhTien();
};

