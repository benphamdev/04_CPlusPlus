#include<iostream>

using namespace std;

#define size 1002

void nhap(int A[],int n) 
{
	for(int i=0; i<n; i++)
		cin>>A[i];
}

void xuat(int A[size],int n) 
{
	for(int i=0; i<n; i++)
		cout<<A[i]<<' ';
	cout<<"\n";
}

int timkiemvitri(int A[size],int n,int target) 
{
	for(int i=0; i<n; i++) 
	{
		if(A[i]==target)
			return i;
	}
	return -1;
}

void them(int A[size],int &n,int target)
{
	A[n] = target;
	n++;
}

void them1(int A[size],int &n, int index, int target)
{

	for(int i=n; i>index; i--) 
	{
		A[i] = A[i-1];
	}
	n++;
	A[index] = target;
}

void xoa(int A[size], int &n, int index) 
{
	for(int i = index ; i < n ; i++) {
		A[i] = A[i+1];
	}
	--n;
}

void SuaPhanTu(int A[size],int a,int b) 
{
	A[a] = b;
}

void ex() 
{
	int n, x, a, b, k,l,t;
	cout<<"Nhap so luong phan tu trong mang : ";
	cin>>n;
	int A[n];
	nhap(A,n);
	cout<<"nhap vi tri can them : ";
	cin>>k;
	cout<<"nhap gia tri can them : ";
	cin>>x;
	them1(A,n,k,x);
	xuat(A,n);
	cout<<"Nhap vi tri can sua : ";
	cin>>a;
	cout<<"Nhap gia tri muon sua : ";
	cin>>b;
	SuaPhanTu(A,a,b);
	xuat(A,n);
	cout<<"Nhap vi tri can xoa : ";
	cin>>l;
	xoa(A,n,l);
	xuat(A,n);
	cout<<"nhap vi tri can tim kiem : ";
	cin>>t;
	cout<<timkiemvitri(A,n,t)<<'\n';
}

int main() {
	ex();
}




