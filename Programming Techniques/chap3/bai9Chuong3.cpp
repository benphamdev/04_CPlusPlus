#include<iostream>

using namespace std;

void nhap(int A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
void xuat(int A[],int n)
{
	for(int i=0;i<n;i++)
		cout<<A[i]<<' ';
}
void swap(int &a,int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}
void sapxep(int A[],int n)
{
	for(int i=0;i<n-1;i++)
		for(int j=i+1;j<n;j++)
			if(A[i]<A[j])
				swap(A[i],A[j]);	
}
int timkiem(int A[],int n,int x)
{
	if(A[0]<=x)
	{
		return 0;
	}
	else if(A[n-1] >= x)
	{
		return n-1;
	}
	for(int i=0;i<n;i++)
	{
		if(A[i] <=x )
		{
			return i;
		}
	}
}
void chen(int A[],int &n,int x)
{
	int vt = timkiem(A,n,x);
	for(int i = n ; i>vt ; i--)
	{
		A[i] = A[i-1];
	}
	A[vt] = x;
	n++;
}

int main(){
	int n,x;cin>>n;
	int A[n+1];
	nhap(A,n);	cin>>x;
	sapxep(A,n);
	chen(A,n,x);
	xuat(A,n);
}
//3
//2 1 4
//3
