#include "LapTrinhVien.h"
#include <iostream>
using namespace std;

void LapTrinhVien::nhap() {
    NhanVien::nhap();
    cout << "So gio OT: "; cin >> soGioOT;
}

void LapTrinhVien::xuat() {
    NhanVien::xuat();
    cout << soGioOT << " gio OT | Luong: " << tinhLuong() << endl;
}

double LapTrinhVien::tinhLuong() {
    return luongCoBan + soGioOT * 200000;
}

string LapTrinhVien::loaiNhanVien() {
    return "LapTrinhVien";
}
