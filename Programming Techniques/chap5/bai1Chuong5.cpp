#include<bits/stdc++.h>

using namespace std;

void chuyen(int n)
{
	int A[100];
	int cnt = 0;
	while(n)
	{
		A[cnt++] = n%2;
		n /= 2;
	}
	for(int i = cnt-1; i >= 0; i--)
	{
		cout<<A[i];
	}
}
int main()
{
	int n;cin>>n;
	for(int i=1; i <= n ; i++)
	{
		chuyen(i);
		cout<<endl;
	}
}
