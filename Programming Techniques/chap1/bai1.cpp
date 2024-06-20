#include<bits/stdc++.h>
using namespace std;

struct DATE 
{
	string ngay,thang,nam;
};
void nhap(DATE &a)
 {
	cout<<"ngay : ";
	cin>>a.ngay;
	cout<<"thang : ";
	cin>>a.thang;
	cout<<"nam : ";
	cin>>a.nam;
}
void xuat(DATE a) 
{
	cout<<a.ngay<<"-"<<a.thang<<"-"<<a.nam;
}
struct HOCSINH 
{
	string MSHS,hoten,diachi,phai;
	DATE ngaysinh;
	double diemtb;
};
typedef struct HOCSINH hs;

void nhap1(hs &x) 
{
	cout<<"\nNhap mshs: ";
	cin>>x.MSHS;
	cin.ignore();
	cout<<"Nhap hoten: ";
	getline(cin,x.hoten);
	cout<<"Nhap ngay sinh \n";
	nhap(x.ngaysinh);
	cin.ignore();
	cout<<"Nhap dia chi: ";
	getline(cin,x.diachi);
	cout<<"Nhap phai: ";
	cin>>x.phai;
	cout<<"Nhap diem trung binh:";
	cin>>x.diemtb;
}

void xuat1(hs x) 
{
	cout<<"\nmshs: "<<x.MSHS;
	cout<<"\nhoten: "<<x.hoten;
	cout<<"\nngay sinh: ";
	xuat(x.ngaysinh);
	cout<<"\ndia chi: "<<x.diachi;
	cout<<"\nphai: "<<x.phai;
	cout<<"\ndiem trung binh:"<<x.diemtb;
}

void nhapds(hs a[],int n) 
{
	for(int i=0; i<n; i++) 
	{
		cout<<"Nhap thong tin hoc sinh thu "<<i+1<<":";
		nhap1(a[i]);
	}
}

void xuatds(hs a[],int n) 
{
	for(int i=0; i<n; i++) 
	{
		cout<<"\nThong tin hoc sinh thu "<<i+1<<":";
		xuat1(a[i]);
		cout<<"\n";
	}
}

int count_gpa(hs a[],int n) 
{
	int cnt=0;
	for(int i=0; i<n; i++) 
	{
		if(a[i].diemtb>=5) ++cnt;
	}
	return cnt;
}

int main() {
	hs a[51];
	int n;
	cout<<"so luong hoc sinh :";
	cin>>n;
	cin.ignore();
	nhapds(a,n);
	xuatds(a,n);
	cout<<"so luong hoc sinh len lop la : "<<count_gpa(a,n);
}

