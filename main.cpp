#include <iostream>
#include <vector>
#include <iomanip>
#include "NhanVien.h"
#include "LapTrinhVien.h"
#include "KiemChungVien.h"

using namespace std;

void nhapDanhSach(vector<NhanVien*>& ds) {
    int n, loai;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    for (int i = 0; i < n; ++i) {
        cout << "\n1. Lap trinh vien | 2. Kiem chung vien\nChon loai NV: ";
        cin >> loai;
        NhanVien* nv = nullptr;
        if (loai == 1) nv = new LapTrinhVien();
        else nv = new KiemChungVien();
        nv->nhap();
        ds.push_back(nv);
    }
}

void xuatDanhSach(const vector<NhanVien*>& ds) {
    cout << "\nDanh sach nhan vien:\n";
    for (auto nv : ds) nv->xuat();
}

double tinhLuongTB(const vector<NhanVien*>& ds) {
    double tong = 0;
    for (auto nv : ds) tong += nv->tinhLuong();
    return tong / ds.size();
}

void xuatLuongThapHonTB(const vector<NhanVien*>& ds) {
    double tb = tinhLuongTB(ds);
    cout << "\nNhan vien co luong < trung binh (" << tb << "):\n";
    for (auto nv : ds)
        if (nv->tinhLuong() < tb)
            nv->xuat();
}

void xuatMaxLuong(const vector<NhanVien*>& ds) {
    double maxL = ds[0]->tinhLuong();
    for (auto nv : ds)
        if (nv->tinhLuong() > maxL)
            maxL = nv->tinhLuong();
    cout << "\nNhan vien luong cao nhat:\n";
    for (auto nv : ds)
        if (nv->tinhLuong() == maxL)
            nv->xuat();
}

void xuatMinLuong(const vector<NhanVien*>& ds) {
    double minL = ds[0]->tinhLuong();
    for (auto nv : ds)
        if (nv->tinhLuong() < minL)
            minL = nv->tinhLuong();
    cout << "\nNhan vien luong thap nhat:\n";
    for (auto nv : ds)
        if (nv->tinhLuong() == minL)
            nv->xuat();
}

void lapTrinhVienLuongCaoNhat(const vector<NhanVien*>& ds) {
    double maxL = -1;
    for (auto nv : ds)
        if (nv->loaiNhanVien() == "LapTrinhVien")
            maxL = max(maxL, nv->tinhLuong());
    cout << "\nLap trinh vien luong cao nhat:\n";
    for (auto nv : ds)
        if (nv->loaiNhanVien() == "LapTrinhVien" && nv->tinhLuong() == maxL)
            nv->xuat();
}

void kiemChungVienLuongThapNhat(const vector<NhanVien*>& ds) {
    double minL = 1e9;
    for (auto nv : ds)
        if (nv->loaiNhanVien() == "KiemChungVien")
            minL = min(minL, nv->tinhLuong());
    cout << "\nKiem chung vien luong thap nhat:\n";
    for (auto nv : ds)
        if (nv->loaiNhanVien() == "KiemChungVien" && nv->tinhLuong() == minL)
            nv->xuat();
}

int main() {
    vector<NhanVien*> ds;
    nhapDanhSach(ds);
    xuatDanhSach(ds);
    xuatLuongThapHonTB(ds);
    xuatMaxLuong(ds);
    xuatMinLuong(ds);
    lapTrinhVienLuongCaoNhat(ds);
    kiemChungVienLuongThapNhat(ds);

    for (auto nv : ds) delete nv;
    return 0;
}
