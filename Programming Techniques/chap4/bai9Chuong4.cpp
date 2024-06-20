#include<bits/stdc++.h>
using namespace std;

void inp(int A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int gcd(int a,int b)
{
	int r;
	while(b)
	{
	    r=a%b; 
		a=b;
		b=r;
	}
	return a;
}
int Mingcd(int A[],int n)
{
	int ans = A[0];
	for(int i=1;i<n;i++)
	{
		ans = gcd(ans,A[i]);
	}
	return ans;
}
int main()
{
	int n;cin>>n;
	int A[n];
	inp(A,n);
	cout<<Mingcd(A,n);
}
