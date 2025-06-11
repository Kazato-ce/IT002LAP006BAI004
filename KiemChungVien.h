#ifndef KIEMCHUNHVIEN_H
#define KIEMCHUNHVIEN_H

#include "NhanVien.h"

class KiemChungVien : public NhanVien {
private:
    int soLoiPhatHien;
public:
    void nhap() override;
    void xuat() override;
    double tinhLuong() override;
    string loaiNhanVien() override;
};

#endif
