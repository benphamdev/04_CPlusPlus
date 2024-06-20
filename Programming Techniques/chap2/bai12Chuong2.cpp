#include<iostream>

using namespace std;

#define size 102
void nhap(int A[][size],int &n,int &m)
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			cin>>A[i][j];
}

void xuat(int A[][size],int n,int m)
{
	cout<<'\n';
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<A[i][j]<<' ';
		}
		cout<<'\n';
	}			
}

void chuyengiatri(int A[][size],int n,int m)
{
	
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(A[i][j])
				A[i][j] = 9;
}

void taobaimin(int A[][size],int n,int m)
{
	chuyengiatri(A,n,m);
	int X[8] = {-1 , -1, -1 , 0 , 0 , 1 , 1 , 1 };
	int Y[8] = {-1 , 0 , 1 , -1 , 1 , -1, 0, 1 };
	for(int i=1;i<=n;i++)
		for(int j=1;j<=m;j++)
			if(A[i][j]==0)
				for(int k=0;k<8;k++)
					if(A[i+X[k]][j+Y[k]]==9)
	 					++A[i][j];
}

void ex()
{
	int n,m;
	int A[size][size];
	nhap(A,n,m);
	taobaimin(A,n,m);
	xuat(A,n,m);
}
int main(){
	ex();
}
