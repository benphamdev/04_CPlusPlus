#include<iostream>

using namespace std;

void nhap(int a[],int n)
{
	for(int i=0;i<n;i++) 
		cin>>a[i];
}

void xuat(int a[],int n)
{
	for(int i=0;i<n;i++)
		 cout<<a[i]<<" ";
}

void tron(int a[],int b[],int c[],int n,int m)
{
	int i=0,j=0,k=0;
	while( i<n && j<m )
	{
		c[k++] = a[i++];
		c[k++] = b[j++];		
	}
	while(i<n)
		c[k++] = a[i++];	
	while(j<m)	
		c[k++] = b[j++];
}

void ex()
{
	int n,m;
	cout<<"nhap so phan tu mang 1 : ";cin>>n;
	cout<<"nhap so phan tu mang 2 : ";cin>>m;
	int A[n],B[m],C[m+n];
	nhap(A,n);nhap(B,m);
	tron(A,B,C,n,m);
	xuat(C,m+n);
}
int main(){
	ex();
}
