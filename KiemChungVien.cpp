#include "KiemChungVien.h"
#include <iostream>
using namespace std;

void KiemChungVien::nhap() {
    NhanVien::nhap();
    cout << "So loi phat hien: "; cin >> soLoiPhatHien;
}

void KiemChungVien::xuat() {
    NhanVien::xuat();
    cout << soLoiPhatHien << " loi | Luong: " << tinhLuong() << endl;
}

double KiemChungVien::tinhLuong() {
    return luongCoBan + soLoiPhatHien * 50000;
}

string KiemChungVien::loaiNhanVien() {
    return "KiemChungVien";
}
