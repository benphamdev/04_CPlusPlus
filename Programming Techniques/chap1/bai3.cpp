#include<bits/stdc++.h>

using namespace std;

struct tg 
{
	unsigned int gio,phut,giay;
};
tg nhap() 
{
	tg x;
	cin>>x.gio>>x.phut>>x.giay;
	return x;
}
void xuat(tg a) 
{
	cout<<a.gio<<':'<<a.phut<<':'<<a.giay<<endl;
}
int check(tg a) 
{
	if(0>a.gio || a.gio >=24) return 0;
	if(0>a.phut || a.phut >=60) return 0;
	if(0>a.giay || a.giay >= 60) return 0;
	return 1;
}
tg kc(tg a,tg b) 
{
	tg z;
	int s1 = a.gio*60*60 + a.phut *60+a.giay;
	int s2 = b.gio*60*60 + b.phut *60+b.giay;
	s1 = abs(s1-s2);
	z.giay = s1%60;
	z.phut = s1/60;
	z.gio  = z.phut/60;
	z.phut %=60;
	return z;
}
int main() 
{
	tg x,y;
	x = nhap();
	y = nhap();
	xuat(x);
	xuat(y);
	if(check(x)&&check(y)) 
	{
		tg z = kc(x,y);
		xuat(z);
	}
	return 0;
}



//tg kc2(tg a,tg b){
//	tg z;
//	if(a.giay>b.giay){
//		b.phut--;
//		b.giay +=60;
//	}
//	z.giay = b.giay - a.giay;
//	if(a.phut>b.phut){
//		b.gio--;
//		b.phut += 60;
//	}
//	z.phut = b.phut-a.phut;
//	if(a.gio>b.gio){
//		z.gio = a.gio - b.gio;
//	}
//	else z.gio = b.gio - a.gio;
//	return z;
//}


