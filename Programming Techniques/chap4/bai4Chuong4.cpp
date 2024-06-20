#include<iostream>

using namespace std;
#define size 100
int A[size];
void nhap(int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}

bool timkiem(int n , int l , int r , int x)
{
	if(l>r)
		return false;
	int m = (l+r)/2;
	if(A[m]==x)
		return true;
	else if(A[m]<x)
		timkiem(n,m+1,r,x);
	else
		timkiem(n,l,m-1,x);	
}
int main()
{
	int n,x;
	cin>>n>>x;
	nhap(n);
	cout<<timkiem(n,0,n-1,x);
}