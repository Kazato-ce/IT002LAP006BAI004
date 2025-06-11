#ifndef NHANVIEN_H
#define NHANVIEN_H

#include <string>
using namespace std;

class NhanVien {
protected:
    string maNV, hoTen, sdt, email;
    int tuoi;
    double luongCoBan;

public:
    virtual void nhap();
    virtual void xuat();
    virtual double tinhLuong() = 0;
    virtual string loaiNhanVien() = 0;
    virtual ~NhanVien() {}
};

#endif
