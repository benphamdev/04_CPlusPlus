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
complex1 tich ( complex1 a, complex1 other){
	complex1 mul;
	mul.x = a.x*other.x - a.y*other.y;
	mul.y = a.x*other.y + a.y*other.x;
	return mul;
}
void in1(complex1 a[],int n){
	for(int i=0;i<n;i++) in(a[i]);
}
void xuat1(complex1 a[],int n){
	for(int i=0;i<n;i++) xuat(a[i]);
}
complex1 tong1 ( complex1 a[],int n){
	complex1 sum = a[0] ;
	for(int i=1;i<n;i++){
		sum = tong(a[i],sum);
	}
	return sum;
}
complex1 tich1 ( complex1 a[],int n){
	complex1 mul = a[0] ;
	for(int i=1;i<n;i++){
		mul = tich(a[i],mul);
	}
	return mul;
}	
int main(){
	int n;cin>>n;
	complex1 a[n];
	in1(a,n);
//	xuat1(a,n);
	complex1 z1 = tong1(a,n);	
	complex1 z3 = tich1(a,n);	
 
	cout<<"tong "<<n<<" so phuc :" ; xuat(z1);
	cout<<"tich "<<n<<" so phuc :" ; xuat(z3);
/
}



