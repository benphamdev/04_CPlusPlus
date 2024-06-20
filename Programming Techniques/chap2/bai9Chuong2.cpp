#include<iostream>
#include<string>

using namespace std;

void chuyen10sang2(int n)
{
	int A[100];
	int d=0;
	while(n)
	{
		A[d++] = n%2;
		n/=2;
	}
	for(int i=d-1;i>=0;i--)
	{
		cout<<A[i];
	}
}
void chuyen10sang8(int n)
{
	int A[100];
	int d=0;
	while(n)
	{
		A[d++] = n%8;
		n/=8;
	}
	for(int i=d-1;i>=0;i--)
	{
		cout<<A[i];
	}
}
void chuyen10sang16(int n)
{
	char A[100];
	int d=0;
	while(n)
	{
		int r=n%16;
		if(r<=9)	
			A[d++] = r+'0';
		else 
			A[d++] = r-10+'A';
		n/=16;	
	}
	for(int i=d-1;i>=0;i--)
	{
		cout<<A[i];
	}
}


int main()
{
	int n;
	cin>>n;
	chuyen10sang2(n);
	cout<<endl;
	chuyen10sang8(n);
	cout<<endl;
	chuyen10sang16(n);
}
