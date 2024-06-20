#include<iostream>

using namespace std;

void in(int A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int timkiem(int A[],int n,int x)
{
	int l = 0,r = n-1;
	while(l<=r)
	{
		int m = l+(r-l)/2;
		if(A[m]==x)
			return true;
		else if(A[m]<x)
			l = m+1;
		else
			r = m-1;			
	}
	return false;
}
void ex()
{
	int n,x;cin>>n>>x;
	int A[n];
	in(A,n);
	if(timkiem(A,n,x))
	{
		cout<<"tim thay";
	}
	else
		cout<<"khong tim thay";
}
int main()
{
	ex();
}
