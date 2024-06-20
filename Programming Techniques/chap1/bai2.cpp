#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) 
{
	a=abs(a);
	b=abs(b);
	while(b) 
	{
		int r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int lcm(int a,int b) 
{
	return a/gcd(a,b)*b;
}
typedef struct PHANSO 
{
	int tu,mau;
} ps;
void nhap(ps &x) 
{
	cin>>x.tu>>x.mau;
}
void xuat(ps x) 
{
	cout<<x.tu<<'/'<<x.mau<<"\n";
}
void rutgon(ps &a) 
{
	int l = gcd(a.tu,a.mau);
	a.tu /= l;
	a.mau /=l;
}
ps addFraction(ps a,ps b) 
{
	int mc = lcm(a.mau,b.mau);
	a.tu = a.tu*mc/a.mau;
	b.tu = b.tu*mc/b.mau;
	a.tu += b.tu;
	a.mau = mc;
	rutgon(a);
	return a;
}
ps subtractFraction(ps a,ps b) 
{
	int mc = lcm(a.mau,b.mau);
	a.tu = a.tu*mc/a.mau;
	b.tu = b.tu*mc/b.mau;
	a.tu-=b.tu;
	a.mau=mc;
	rutgon(a);
	return a;
}
int check(ps a) 
{
	if(a.tu==0) return 1;
	return 0;
}
ps multiplyFraction(ps a,ps b) 
{
	a.tu *= b.tu;
	a.mau *= b.mau;
	rutgon(a) ;
	return a;
}
void divideFraction(ps a,ps b) 
{
	if(check(b)||check(a)) 
	{
		cout<<0;
		return ;
	}
	a.tu*=b.mau;
	a.mau*=b.tu;
	rutgon(a);
	xuat(a);
}
int compareFraction(ps x,ps y) 
{
	int Y=x.tu*y.mau-x.mau*y.tu;
	if(Y==0) return 0;
	return (Y>0) ? 1:-1;
}
ps nghichdao(ps a) {
	int tmp = a.tu;
	a.tu = a.mau;
	a.mau = tmp;
	return a;
}

void in(ps a[],int n) 
{
	for(int i=0; i<n; i++)  nhap(a[i]);
}
void out(ps a[],int n) 
{
	for(int i=0; i<n; i++)  xuat(a[i]);
}
ps tong(ps a[],int n) 
{
	ps sum = a[0];
	for(int i=1; i<n; i++) sum = addFraction(sum,a[i]);
	rutgon(sum);
	return sum;
}
ps hieu(ps a[],int n) 
{
	ps diff =a[0];
	for(int i=1; i<n; i++) diff = subtractFraction(diff,a[i]);
	rutgon(diff);
	return diff;
}
void tich(ps a[],int n) 
{
	ps mul ;
	mul.tu =1;
	mul.mau=1;
	for(int i=0; i<n; i++) mul = multiplyFraction(mul,a[i]);
	if(check(mul)) 
	{
		cout<<0<<"\n";
		return ;
	}
	xuat(mul);
}

void maxFraction(ps a[],int n) 
{
	ps mf;
	for(int i=0; i<n; i++) 
	{
		if(compareFraction(mf,a[i]) == -1) 
		{
			mf= a[i];
		}
	}
	xuat(mf) ;
}


int main() {
	ps a[51];
	int n;
	cin>>n;
	in(a,n);
	ps k = tong(a,n);
	ps z = hieu(a,n);
	cout<<"tong cac phan so : ";
	xuat(k);
	cout<<"hieu cac phan so : ";
	xuat(z);
	cout<<"tich cac phan so : ";
	tich(a,n);
	cout<<"phan so lon nhat la: ";
	maxFraction(a,n);
	out(a,n);

}