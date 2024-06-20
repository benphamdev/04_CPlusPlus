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

void nhap1(int a[],int n,int m)
{
	for(int i=0;i<n*m;i++) cin>>a[i];
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
			A[i][j] = B[cnt++];
		}
	}
}

void ex()
{
	int n,m;
	cout<<"nhap n : ";cin>>n;
	cout<<"nhap m : ";cin>>m;
	int A[m*n],B[n][100];
	cout<<"nhap mang 1 chieu co so phan tu la "<<m*n<<":"<<"\n";nhap1(A,n,m);
	cout<<"mang 2 chieu can tim la : \n";solve(A,B,n,m);
	xuat(B,n,m);
}
int main(){
	ex();
}