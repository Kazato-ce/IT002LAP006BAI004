#ifndef LAPTRINHVIEN_H
#define LAPTRINHVIEN_H

#include "NhanVien.h"

class LapTrinhVien : public NhanVien {
private:
    int soGioOT;
public:
    void nhap() override;
    void xuat() override;
    double tinhLuong() override;
    string loaiNhanVien() override;
};

#endif
