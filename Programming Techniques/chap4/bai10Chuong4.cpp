#include<bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	return a>b?a:b;
}
void inp(int A[],int n)
{
	for(int i=0;i<n;i++)
		cin>>A[i];
}
int tanxuat(int A[],int n)
{
	int ans = INT_MIN, idx = -1;
	for(int i=0;i<n-1;i++)
	{
		int cnt = 0;
		for(int j=i+1;j<n;j++)
		{
			if(A[i]==A[j])
				++cnt;
		}
		if(ans<cnt)
		{
			ans = cnt;
			idx = i;
		}
		else if(ans == cnt && A[i] < A[idx])
			idx = i;
	}
	return idx;
}
int main()
{
	int n;cin>>n;
	int A[n];
	inp(A,n);
	int idx = tanxuat(A,n);
	cout<<A[idx];
}
