#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) {
	a=abs(a);
	b=abs(b);
	while(b) {
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int lcm(int a,int b) {
	return a/gcd(a,b)*b;
}
typedef struct PHANSO {
	int tu,mau;
} ps;
void nhap(ps &x) {
	cin>>x.tu>>x.mau;
}
void xuat(ps x) {
	cout<<x.tu<<"/"<<x.mau<<'\n';
}
void rutgon(ps &a) {
	int l = gcd(a.tu,a.mau);
	a.tu /= l;
	a.mau /=l;
}
ps addFraction(ps a,ps b) {
	int mc = lcm(a.mau,b.mau);
	a.tu = a.tu*mc/a.mau;
	b.tu = b.tu*mc/b.mau;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}

int check(ps a) {
	if(a.tu==0) return 1;
	return 0;
}
int compareFraction(ps x,ps y) {
	int Y=x.tu*y.mau-x.mau*y.tu;
	if(Y==0) return 0;
	return (Y>0) ? 1:-1;
}

void in(ps a[],int n) {
	for(int i=0; i<n; i++)  nhap(a[i]);
}
void out(ps a[],int n) {
	for(int i=0; i<n; i++)  xuat(a[i]);
}
ps tong(ps a[],int n) {
	ps sum = a[0];
	for(int i=1; i<n; i++) sum = addFraction(sum,a[i]);
	rutgon(sum);
	return sum;
}

void maxFraction(ps a[],int n) {
	ps mf =a[0];
	for(int i=1; i<n; i++) {
		if(compareFraction(mf,a[i]) ==-1 ) {
			mf = a[i];
		}
	}
	xuat(mf) ;
}
void minFraction(ps a[],int n) {
	ps mf =a[0] ;
	for(int i=1; i<n; i++) {
		if(compareFraction(mf,a[i]) == 1) {
			mf= a[i];
		}
	}
	xuat(mf) ;
}
void sx(ps a[],int n) {
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(compareFraction(a[i],a[j])>0) {
				ps tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}
	}
}
int main() {
	ps a[51];
	int n;
	cin>>n;
	in(a,n);
	ps k = tong(a,n);
	cout<<"tong cac phan so : ";
	xuat(k);
	cout<<"phan so lon nhat la: ";
	maxFraction(a,n);
	cout<<"phan so nho nhat la: ";
	minFraction(a,n);
	sx(a,n);
	out(a,n);
}