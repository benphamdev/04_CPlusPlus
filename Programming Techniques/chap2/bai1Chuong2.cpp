#include<iostream>
using namespace std;
void nhap(int A[],int n)
{
	for(int i=0;i<n;i++) cin>>A[i];
}

int timkiem(int A[],int n,int x)
{
	A[n]=x;
	int i=0;
	while(A[i]!=x)
		i++;
	if(i<n) return 1;
	return 0;
}

void ex()
{
	int n;cin>>n;
	int A[n+1];
	nhap(A,n);
	int x;cout<<"Nhap x : ";cin>>x;
	if(timkiem(A,n,x))
	{
		cout<<"tim thay ";
	}
	else cout<<"khong tim thay";
}

int main()
{
	ex();
}