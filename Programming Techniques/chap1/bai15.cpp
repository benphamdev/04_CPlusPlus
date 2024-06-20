#include<iostream>
#include<string>
using namespace std;

struct LINHKIEN {
	string ten, quycach;
	char loai;
	float dongia;
};
void Nhap1LinhKien(LINHKIEN &x) {
	cout << "nhap ten linh kien : ";
	getline(cin, x.ten);
	cout << "nhap quy cach : ";
	cin >> x.quycach;
	cout << "nhap loai : ";
	cin >> x.loai;
	cout << "nhap don gia : ";
	cin >> x.dongia;
	cin.ignore();
}
void Xuat1LinhKien(LINHKIEN x) {
	cout << "\nten linh kien : " << x.ten;
	cout << "\nquy cach : " << x.quycach;
	cout << "\nloai : " << x.loai;
	cout << "\ndon gia : " << x.dongia;
}
void NhapDSLinhKien(LINHKIEN a[], int n) {
	for (int i = 0; i < n; i++) {
		Nhap1LinhKien(a[i]);
	}
}
void XuatDSLinhKien(LINHKIEN a[], int n) {
	for (int i = 0; i < n; i++) {
		Xuat1LinhKien(a[i]);
		cout << '\n';
	}
}
void SapXep(LINHKIEN a[], int n) {
	for(int i=0;i<n;i++) {
		for(int j=0; j<n-1-i; j++) {
			if (a[j].loai > a[j + 1].loai || (a[j].loai == a[j + 1].loai && a[j].ten > a[j + 1].ten)) {
				LINHKIEN tmp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = tmp;
			}
		}
	}
}
int count(LINHKIEN a[], int n) {
	int cnt = 0;
	for(int i=0;i<n;i++) {
		if (a[i].loai == 'a') {
			cnt++;
		}
	}
	return cnt >= 10;
}
int main() {
	int n;
	cout << "Nhap so luong linh kien : ";
	cin >> n;
	cin.ignore();
	LINHKIEN A[1000];
	NhapDSLinhKien(A, n);
//	XuatDSLinhKien(A, n);
	cout << "da sap xep theo yc:\n";
	SapXep(A, n);
	XuatDSLinhKien(A, n);
	if (count(A, n)) {
		cout << "\nda du\n";
	} else {
		cout << "\nchua\n";
	}
}



