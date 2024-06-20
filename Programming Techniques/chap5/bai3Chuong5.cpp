#include<bits/stdc++.h>

using namespace std;

void inp(int A[],int n)
{
	for(int i = 0; i < n; i++) cin>>A[i];
}

int Search(int A[],int n)
{
	int best = INT_MIN ;
	for(int i = 0; i<n ; i++)
	{
		if(A[i]%2==0 && A[i]>best)
			best = A[i];
	}
	if(best==INT_MIN)
		return -1;
	for(int i = 0; i < n; i++)
	{
		if(A[i]&1 && A[i]>best)
			return A[i];
	}
	return -1;
}
int main()
{
	int n;cin>>n;
	int A[n];
	inp(A,n);
	cout<<Search(A,n);
}
