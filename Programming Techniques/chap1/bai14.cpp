#include<iostream>
#include<string>

using namespace std;

struct MayTinh {
	char LoaiMay;
	string NoiSanXuat;
	int ThoiGianBaoHanh;
};
void Nhap1MayTinh(MayTinh& x) {
	cout << "\nnhap loai may : ";
	cin >> x.LoaiMay;
	cin.ignore();
	cout << "\nnhap noi san xuat : ";
	getline(cin, x.NoiSanXuat);
	cout << "\nnhap thoi gian bao hanh : ";
	cin >> x.ThoiGianBaoHanh;
}
void Xuat1MayTinh(MayTinh x) {
	cout << "\nloai may : " << x.LoaiMay;
	cout << "\nnoi san xuat : " << x.NoiSanXuat;
	cout << "\nthoi gian bao hanh : " << x.ThoiGianBaoHanh;
}
void NhapDSMayTinh(MayTinh a[], int n) {
	for(int i=0; i<n; i++)
		Nhap1MayTinh(a[i]);
}
void XuatDSMayTinh(MayTinh a[], int n) {
	for (int i = 0; i < n; i++)
		Xuat1MayTinh(a[i]);
}
int count(MayTinh a[], int n) {
	int cnt = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].ThoiGianBaoHanh == 1) {
			++cnt;
		}
	}
	return cnt;
}
void check(MayTinh a[], int n) {
	int ok = 0;
	for (int i = 0; i < n; i++) {
		if (a[i].NoiSanXuat == "My") {
			Xuat1MayTinh(a[i]);
			ok = 1;
			cout << '\n';
		}
	}
	if (!ok) {
		cout << "khong co may nao ! ";
	}
}
int main() {
	int n;
	cout << "Nhap so luong may : ";
	cin >> n;
	cin.ignore();
	MayTinh a[1000];
	NhapDSMayTinh(a, n);
	//	xuatDs(a,n);
	cout << "so luong may bao hanh 1 nam : " << count(a, n);
	cout << '\n';
	cout << "may san xuat tai meo : ";
	check(a, n);
}



