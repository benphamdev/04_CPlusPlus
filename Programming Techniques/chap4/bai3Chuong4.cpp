#include<bits/stdc++.h>

using namespace std;
using ll = long long ;

ll factorial(ll n)
{
	if(n<=1)
		return 1;
	return 1ll*n* factorial(n-1);	
}
int main()
{
	ll n;cin>>n;
	cout<<factorial(n);
}