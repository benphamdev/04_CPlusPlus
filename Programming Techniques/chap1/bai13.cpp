#include<iostream>
#include<string>

using namespace std;

struct Sach {
	string MaSSach, TenSach, TacGia;
	int SL;
};
void Nhap1Sach(Sach& x) {
	cout << "nhap ma sach : ";
	cin >> x.MaSSach;
	cin.ignore();
	cout << "nhap ten sach : ";
	getline(cin, x.TenSach);
	cout << "Nhap tac gia : ";
	getline(cin, x.TacGia);
	cout << "Nhap so luong : ";
	cin >> x.SL;
	cin.ignore();
}
void Xuat1Sach(Sach x) {
	cout << "\nma sach : ";
	cout << x.MaSSach;
	cout << "\nten sach : ";
	cout << x.TenSach;
	cout << "\ntac gia : ";
	cout << x.TacGia;
	cout << "\nso luong : ";
	cout << x.SL;
}
void NhapDSSach(Sach a[], int n) {
	for(int i=0; i<n; i++) {
		Nhap1Sach(a[i]);
	}
}
void XuatDSSach(Sach a[], int n) {
	for(int i=0; i<n; i++) {
		Xuat1Sach(a[i]);
		cout << '\n';
	}
}

void TimKiem(Sach a[], int n, string s) {
	int ok = 0;
	for(int i=0; i<n; i++) {
		if (a[i].TenSach == s) {
			Xuat1Sach(a[i]);
			cout << '\n';
			ok = 1;
		}
	}
	if (!ok) cout << "Khong Tim Thay ! ";
}
int countBook(Sach a[], int n) {
	int cnt = 0;
	for(int i=0; i<n; i++) {
		cnt += a[i].SL;
	}
	return cnt;
}
int main() {
	int n;
	cout << "nhap so luong sach : ";
	cin >> n;
	cin.ignore();
	Sach A[n];
	NhapDSSach(A, n);
	XuatDSSach(A, n);
	cout << "Nhap ten sach can tim : ";
	string s;
	getline(cin, s);
	TimKiem(A, n, s);
	cout << "\nSo luong sach : " << countBook(A, n);
}



