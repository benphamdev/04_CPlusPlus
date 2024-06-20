#include<bits/stdc++.h>
using namespace std;
using  ll=long long;

struct Video {
	string ten,theloai,tendaodien,tennamdienvien,tennudienvien,nam,hang;
};
void nhapVideo(Video &x) {
	cout<<"nhap ten: ";
	getline(cin,x.ten) ;
	cout<<"the loai : ";
	getline(cin,x.theloai);
	cout<<"ten dao dien : ";
	getline(cin,x.tendaodien);
	cout<<"ten nam dv chinh : ";
	getline(cin,x.tennamdienvien);
	cout<<"ten nu dv chinh : ";
	getline(cin,x.tennudienvien);
	cout<<"nam sx : ";
	cin>>x.nam;
	cin.ignore();
	cout<<"hang sx : ";
	getline(cin,x.hang);
}
void xuatVideo(Video x) {
	cout<<"\nnhap ten: ";
	cout<<x.ten ;
	cout<<"\nthe loai : ";
	cout<<x.theloai;
	cout<<"\nten dao dien : ";
	cout<<x.tendaodien;
	cout<<"\nten nam dv chinh : ";
	cout<<x.tennamdienvien;
	cout<<"\nten nu dv chinh : ";
	cout<<x.tennudienvien;
	cout<<"\nnam sx : ";
	cout<<x.nam;
	cout<<"\nhang sx : ";
	cout<<x.hang;
	cout<<'\n';
}
void nhapVideo(Video a[],int n) {
	for(int i=0; i<n; i++) nhapVideo(a[i]);
}
void xuatVideo(Video a[],int n) {
	for(int i=0; i<n; i++) xuatVideo(a[i]);
}
void TimKiemTheLoai(Video a[],int n,string theloai) {
	for(int i=0; i<n; i++) {
		if(theloai==a[i].theloai) {
			xuatVideo(a[i]);
			cout<<'\n';
		}
	}
}
void TiemKiemDienVien(Video a[],int n,string ten) {
	for(int i=0; i<n; i++) {
		if(ten == a[i].tennamdienvien) {
			xuatVideo(a[i]);
			cout<<'\n';
		}
	}
}
void TiemKiemDaoDien(Video a[],int n,string ten) {
	for(int i=0; i<n; i++) {
		if(ten==a[i].tendaodien) {
			xuatVideo(a[i]);
			cout<<'\n';
		}
	}
}
int main() {
	int n;
	cout<<"nhap so luong video : ";
	cin>>n;
	cin.ignore();
	Video a[n];
	nhapVideo(a,n);
//	xuatVideo(a,n);
	cout<<"Nhap ten the loai : ";
	string tl;
	getline(cin,tl);
	TimKiemTheLoai(a,n,tl);
	cout<<"Nhap ten  nam dv  : ";
	string tl1;
	getline(cin,tl1);
	TiemKiemDienVien(a,n,tl1);
	cout<<"Nhap ten dao dien : ";
	string tl2;
	getline(cin,tl2);
	TiemKiemDaoDien(a,n,tl2);
}



