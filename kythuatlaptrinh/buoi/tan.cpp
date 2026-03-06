#include <iostream>
using namespace std;
#include <vector>
	struct SinhVien {
		string hoten;
		int tuoi;
		bool gioitinh;
		string diachi;
		float diem;
	};
	int main() {
		SinhVien b;
		b.hoten = "Tan ";
		b.tuoi = 20;
		b.gioitinh = true;
		b.diachi = "Tay Ninh ";
		b.diem = 10; 
		SinhVien c;
		c.hoten = "Trang ";
		c.tuoi = 19;
		c.diachi = "Long An ";
		c.gioitinh = false;
		c.diem = 10;

		vector <SinhVien> mang;
		mang.push_back(b);
		mang.push_back(c);
		for (int i = 0; i < mang.size(); i++) {
			cout << "Sinh vien " << (i + 1) << endl;
			cout << "\t+ Ho ten :" << mang[i].hoten << endl;
			cout << "\t+ Tuoi :" << mang[i].tuoi << endl;
		}


}