#include<bits/stdc++.h>
using namespace std;

struct td{
	int i,j;
};
void nhap(td &x){
	cin>>x.i>>x.j;
}
void xuat(td x){
	cout<<'('<<x.i<<';'<<x.j<<')'<<"\n";
}
td dx1(td x){
	td z;
	z.i = (-1)*x.i;
	z.j = x.j;
	return z;
}
td dx2(td x){
	td z;
	z.i = x.i;
	z.j =(-1)* x.j;
	return z;
}

td dx3(td x){
	td z;
	z.i = (-1)*x.i;
	z.j =(-1)* x.j;
	return z;
}
double distance(td x,td y){
	return (double)sqrt(pow((x.i-y.i),2)+pow((x.j-y.j),2));
}
int main(){
	td x,y;
	nhap(x);nhap(y);
	cout<<"Diem doi xung qua tung do : ";xuat(dx1(x));
	cout<<"Diem doi xung qua hoanh do : ";xuat(dx2(x));
	cout<<"Diem doi xung qua tam : ";xuat(dx3(x));
	cout<<"khoang cach 2 diem :"<<fixed<<setprecision(2)<<distance(x,y)<<"\n";
	xuat(x);xuat(y);
}



