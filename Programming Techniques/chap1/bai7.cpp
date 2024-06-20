#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 int gcd(int a,int b){int r;while(b){r=a%b;a=b;b=r;}return a;}
 int lcm(int a,int b){return a*b/gcd(a,b);}

struct fraction{
	int t,m;
};

struct hso{
	int ng;
	fraction k;
};
void xuat(hso x){
	cout<<x.ng<<" "<< x.k.t <<"/" <<x.k.m<< endl;
}
void in(hso &x){
	cin>>x.ng>>x.k.t>>x.k.m;
}

fraction changehs(hso a){
	fraction z ;
	z.t = a.ng*a.k.m+a.k.t;
	z.m = a.k.m;
	return z;
}
hso changefr(fraction a){
	hso x;
	x.ng= a.t/a.m;
	x.k.t = a.t%a.m;
	x.k.m = a.m;
	return x;
}
void rutgon(fraction &a){
	int l = gcd(a.t,a.m);
	a.t /= l;
	a.m/= l;
}
hso tong(hso x,hso y){
	fraction z1 = changehs(x);
	fraction z2 = changehs(y);
	int mc = lcm(z1.m,z2.m);
	z1.t = z1.t*mc/z1.m;
	z2.t = z2.t*mc/z2.m;
	z1.t += z2.t;
	z1.m = mc;
	rutgon(z1);
	hso z;
	z = changefr(z1);
	return z;
}
hso mul(hso x,hso y){
	fraction z1 = changehs(x);
	fraction z2 = changehs(y);
	z1.t *=z2.t;
	z1.m *=z2.m;
	rutgon(z1);
	hso z;
	z = changefr(z1);
	return z;
}
int main(){
	hso x,y;
	in(x);in(y);
	hso z1 = tong(x,y);
	hso z2 = mul(x,y);
	cout<<"tong :";xuat(z1);
	cout<<"tich :";xuat(z2);
	
}



