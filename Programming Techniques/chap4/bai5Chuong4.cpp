#include<bits/stdc++.h>

using namespace std;
using ll = long long ;

ll nCk(ll n, ll k)
{
	if(k==0||k==n)
		return 1;
	return nCk(n-1,k)+nCk(n-1,k-1);	
}
int main()
{
	ll n,k;cin>>n>>k;
	cout<<nCk(n,k);
}