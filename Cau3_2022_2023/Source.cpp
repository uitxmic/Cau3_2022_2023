#include <iostream>
#include "CCuaHang.h"

using namespace std;

int main()
{
	CCuaHang CH;
	CH.Nhap();
	CH.Xuat();
	cout << "Tong thu nhap cua cua hang: " << CH.TinhTien() << '\n';
	CH.NhieuNhat();
	return 0;
}