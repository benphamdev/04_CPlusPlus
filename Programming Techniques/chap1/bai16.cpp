#include<bits/stdc++.h>
using namespace std;

struct MatHang {
	string mahang, tenmathang  ;
	int soluong;
	float dongia;
	int soluongton;
	int thoigianbaohanh;
};
typedef struct MatHang mh;
void nhap1Mathang(mh &x) {
	cout<<"nhap ma hang : ";
	cin>>x.mahang;
	cin.ignore();
	cout<<"nhap ten mat hang : ";
	getline(cin,x.tenmathang);
	cout<<"nhap so luong  : ";
	cin>>x.soluong;
	cout<<"nhap don gia : ";
	cin>>x.dongia;
	cout<<"nhap so luong ton : ";
	cin>>x.soluongton;
	cout<<"nhap thoi gian bao hanh : ";
	cin>>x.thoigianbaohanh;
}
void xuat1Mathang(mh x) {
	cout<<"\nma hang : "<<x.mahang;
	cout<<"\nten mat hang : "<<x.tenmathang;
	cout<<"\nso luong  : "<<x.soluong;
	cout<<"\ndon gia : "<<x.dongia;
	cout<<"\nso luong ton : "<<x.soluongton;
	cout<<"\nthoi gian bao hanh : "<<x.thoigianbaohanh;
}
void nhapNhieuMathang(mh A[],int n) {
	for(int i = 0; i<n; i++) {
		nhap1Mathang(A[i]);
	}
}
void xuatNhieuMathang(mh A[],int n) {
	for(int i = 0; i<n; i++) {
		xuat1Mathang(A[i]);
		cout<<'\n';
	}
}
void sltonnhieu(mh A[],int n) {
	int ans = -1e9;
	for(int i=0; i<n; i++) {
		if(A[i].soluongton >ans) {
			ans = A[i].soluongton;
		}
	}
	for(int i=0; i<n; i++) {
		if(A[i].soluongton == ans) {
			xuat1Mathang(A[i]);
			cout<<'\n';
		}
	}
}
void sltonit(mh A[],int n) {
	int ans = 1e9;
	for(int i=0; i<n; i++) {
		if(A[i].soluongton < ans) {
			ans = A[i].soluongton;
		}
	}
	for(int i=0; i<n; i++) {
		if(A[i].soluongton == ans) {
			xuat1Mathang(A[i]);
			cout<<'\n';
		}
	}
}
void giacaonhat(mh A[],int n) {
	int ans = -1e9;
	for(int i=0; i<n; i++) {
		if(A[i].dongia > ans) {
			ans = A[i].dongia;
		}
	}
	for(int i=0; i<n; i++) {
		if(A[i].dongia == ans) {
			xuat1Mathang(A[i]);
			cout<<'\n';
		}
	}
}
void ktbaohanh(mh A[],int n) {
	int ans = -1e9;
	for(int i=0; i<n; i++) {
		if(A[i].thoigianbaohanh > 12){
		xuat1Mathang(A[i]);
			cout<<'\n';
		}
	}
}
void sort111(mh A[],int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=0; j<n-1-i; j++) {
			if(A[j].soluongton > A[j+1].soluongton) {
				mh tmp = A[j];
				A[j] = A[j+1];
				A[j+1] = tmp;
			}
		}
	}
}

int main() {
	int n;
	cout<<"nhap so luong mat hang : ";cin>>n;cin.ignore();
	mh A[1000];
	nhapNhieuMathang(A,n);
    xuatNhieuMathang(A,n);
    cout<<"\nmat hang so luong ton nhieu nhat : ";sltonnhieu(A,n);cout<<'\n';
    cout<<"\nmat hang so luong ton it nhat : ";sltonit(A,n);cout<<'\n';
    cout<<"\nmat hang gia tien cao nhat : ";giacaonhat(A,n);cout<<'\n';
    cout<<"\nmat hang bao hanh 12 thang : ";ktbaohanh(A,n);cout<<'\n';
    cout<<"\nsap xep : ";sort111(A,n);cout<<'\n';xuatNhieuMathang(A,n);
}



