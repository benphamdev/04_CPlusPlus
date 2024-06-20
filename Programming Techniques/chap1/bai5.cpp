#include<bits/stdc++.h>
using namespace std;

struct complex1{
	int x,y;// x+yi

};
void in(complex1 &a){
	cin>>a.x>>a.y;
}
void xuat(complex1 a ){
	cout<<a.x<<"+"<<a.y<<'i'<<'\n';
}

complex1 tong ( complex1 a, complex1 other){
	complex1 sum;
	sum.x = a.x+other.x;
	sum.y = a.y+other.y;
	return sum;
}
complex1 hieu ( complex1 a, complex1 other){
	complex1 diff;
	diff.x = a.x-other.x;
	diff.y = a.y-other.y;
	return diff;
}
complex1 tich ( complex1 a, complex1 other){
	complex1 mul;
	mul.x = a.x*other.x - a.y*other.y;
	mul.y = a.x*other.y + a.y*other.x;
	return mul;
}	
int main(){
	complex1 x,y;
	in(x);in(y);
	complex1 z1 = tong(x,y);	
	complex1 z2 = hieu(x,y);	
	complex1 z3 = tich(x,y);	
 
	cout<<"tong 2 so phuc :" ; xuat(z1);
	cout<<"hieu 2 so phuc :" ; xuat(z2);
	cout<<"tich 2 so phuc :" ; xuat(z3);
 
}



