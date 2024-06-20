#include<bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)

struct SinhVien {
	string masinhvien;
	string ten;
	string namsinh;
	double toan,li,hoa;
};
void nhap(SinhVien &x) {
	cout<<"masinhvien : ";
	cin>>x.masinhvien;
	cin.ignore();
	cout<<"ten : ";
	getline(cin,x.ten);
	cout<<"nam sinh : ";
	cin>>x.namsinh;
	cout<<"nhap diem toan : ";
	cin>>x.toan;
	cout<<"nhap diem li : ";
	cin>>x.li;
	cout<<"nhap diem hoa : ";
	cin>>x.hoa;
}
void xuatSinhvien(SinhVien x) {
	cout<<"masinhvien : ";
	cout<<x.masinhvien;
	cout<<"\nten : ";
	cout<<x.ten;
	cout<<"\nnam sinh : "<<x.namsinh;
	cout<<"\ndiem toan : ";
	cout<<x.toan;
	cout<<"\ndiem li : ";
	cout<<x.li;
	cout<<"\ndiem hoa : ";
	cout<<x.hoa;
	cout<<"\ndiem tb : ";
	cout<<fixed<<setprecision(2)<<(x.toan+x.li+x.hoa)/3;
	cout<<"\n";
}
void nhapds(SinhVien a[],int n) {
	for(int i=0; i<n; i++)	nhap(a[i]);
}
void xuatDSSinhVien(SinhVien a[],int n) {
	for(int i=0; i<n; i++)	xuatSinhvien(a[i]);
}
void timkiem(SinhVien a[],int n) {
	SinhVien res = a[0];
	double tmp2 = (a[0].toan+a[0].li+a[0].hoa)/3;
	FOR(i,1,n) {
		double tmp1 = (a[i].toan+a[i].li+a[i].hoa)/3;
		if(tmp1>tmp2) {
			res = a[i];
		}
	}
	xuatSinhvien(res);
}
void sapxep1(SinhVien a[],int n) { //selection sort
	for(int i=0; i<n-1; i++) {
		int idx = i;
		for(int j=i+1; j<n; j++) {
			double tmp1 = (a[idx].toan+a[idx].li+a[idx].hoa)/3;
			double tmp2 = (a[j].toan+a[j].li+a[j].hoa)/3;
			if(tmp2 < tmp1) {
				idx = j;
			}
		}
		SinhVien tmp = a[i];
		a[i] = a[idx];
		a[idx] = tmp;
//		swap(a[i],a[idx]);
	}
}
//void sapxep2(SinhVien a[],int n){
//	sort(a,a+n,[](SinhVien x,SinhVien y){
//		double tmp1 = (x.toan+x.li+x.hoa)/3;
//		double tmp2 = (y.toan+y.li+y.hoa)/3;
//		return tmp1<tmp2;
//	});
//}
void sapxep2(SinhVien a[],int n) { //direction sort
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i].toan<a[j].toan) {
				swap(a[i],a[j]);
			}
		}
	}
}

void tiemkiem1(SinhVien a[],int n) {
	for(int i=0; i<n; i++) {
		double tmp1 = (a[i].toan+a[i].li+a[i].hoa)/3;
		if(tmp1 >= 5 && a[i].toan>3 && a[i].li>3 && a[i].hoa>3) {
			xuatSinhvien(a[i]);
			cout<<"\n";
		}
	}
}

void timkiem2(SinhVien a[],int n) {
	int m = 1e9,idx;
	int b[1000];
	int z = 0;
	for(int i=0; i<n; i++) {
		int n1 = stoi(a[i].namsinh);
		if(n1 < m) {
			m = n1;
			idx = i;
		}
//		else b[z++] = i;
	}
//	FOR(i,0,z){
	xuatSinhvien(a[idx]);
//	}
}
void tiemkiem3(SinhVien a[],int n,string s) {
	for(int i=0; i<n; i++) {
		if(a[i].ten==s) {
			xuatSinhvien(a[i]);
		}
	}
}
int main() {
	int n;
	cout<<"nhap so luong sinh vien : ";
	cin>>n;
	SinhVien ds[n];
	nhapds(ds,n);
//	xuatDSSinhVien(ds,n);
//	cout<<"\namsinhinh vien co diem cao nhat : ";timkiem(ds,n);
//	cout<<"sap xep diem tb: ";
//	cout<<"sap xep mon toan : \n";	sapxep2(ds,n);
//	cout<<"tim kiem SinhVien co diem lon hon 5 :";tiemkiem1(ds,n);
//	xuatDSSinhVien(ds,n);
//	cout<<"tiem kiem sinh vien lon tuoi nhat : \n";timkiem2(ds ,n);
	cout<<"nhap ten can tim kiem :" ;
	string s;
	cin>>s;
	tiemkiem3(ds,n,s);
}



