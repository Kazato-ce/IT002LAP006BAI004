#include "NhanVien.h"
#include <iostream>
using namespace std;

void NhanVien::nhap() {
    cout << "Ma NV: "; cin >> maNV;
    cout << "Ho ten: "; cin.ignore(); getline(cin, hoTen);
    cout << "Tuoi: "; cin >> tuoi;
    cout << "SDT: "; cin >> sdt;
    cout << "Email: "; cin >> email;
    cout << "Luong co ban: "; cin >> luongCoBan;
}

void NhanVien::xuat() {
    cout << maNV << " | " << hoTen << " | " << tuoi << " | " << sdt
         << " | " << email << " | " << luongCoBan << " | ";
}
