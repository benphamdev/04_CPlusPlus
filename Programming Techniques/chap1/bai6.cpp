#include<bits/stdc++.h>
using namespace std;
using  ll=long long;

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
	cout<<x.tu<<'/'<<x.mau<<"\n";
}
// ý b
void rutgon(ps &a) {
	int l = gcd(a.tu,a.mau);
	a.tu /= l;
	a.mau /=l;
}

//ý a
ps add_fraction(ps a,ps b) {
	int mc = lcm(a.mau,b.mau);
	a.tu = a.tu*mc/a.mau;
	b.tu = b.tu*mc/b.mau;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}
ps subtract_fraction(ps a,ps b) {
	int mc = lcm(a.mau,b.mau);
	a.tu = a.tu*mc/a.mau;
	b.tu = b.tu*mc/b.mau;
	a.tu-=b.tu;
	a.mau=mc;
	rutgon(a);
	return a;
}
int check(ps a) {
	if(a.tu==0) return 1;
	return 0;
}
ps multiply_fraction(ps a,ps b) {
	a.tu *= b.tu;
	a.mau *= b.mau;
	rutgon(a) ;
	return a;
}
void divide_fraction(ps a,ps b) {
	if(check(b)||check(a)) {
		cout<<0;
		return ;
	}
	a.tu*=b.mau;
	a.mau*=b.tu;
	rutgon(a);
	xuat(a);
}
// quy dong
ps quydong(ps x, ps y){
	int mc = lcm(x.mau,y.mau);
	x.tu = x.tu*mc/x.mau;
	x.mau = mc;
	return x;
}
int compare_fraction(ps x,ps y) {
	int Y=x.tu*y.mau-x.mau*y.tu;
	if(Y==0) return 0;
	return (Y>0) ? 1:-1;
}
int main() {
	ps x,y;
	nhap(x);nhap(y);
	ps z = quydong(x,y);
	xuat(z);
}



