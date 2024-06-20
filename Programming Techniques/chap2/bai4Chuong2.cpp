#include<iostream>

using namespace std;

void nhap(int A[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>A[i][j];
		}	
	}
}

void xuat(int A[][100],int n,int m)
{
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cout<<A[i][j]<<' ';
		}
		cout<<'\n';	
	}
}

void xuat1(int a[],int n)
{
	for(int i=0;i<n;i++) cout<<a[i]<<" ";
}

void solve(int B[],int A[][100],int n,int m)
{
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			B[cnt++] = A[i][j];
		}
	}
}

void ex()
{
	int n,m;cin>>n>>m;
	int A[n][100],B[m*n];
	nhap(A,n,m);
//	xuat(A,n,m);
	solve(B,A,n,m);
	xuat1(B,m*n);
}
int main(){
	ex();
}