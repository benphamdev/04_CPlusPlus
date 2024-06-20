#include<iostream>

using namespace std;
using ll = long long;

int count (ll n)
{
	int res = 0;
	for(int i = 5; i <= n; i += 5)
	{
		int tmp = i;
		while(tmp % 5 == 0)
		{
			tmp /= 5;
			res ++;
		}
	}
	return res;
}
int main()
{
	ll n;cin>>n;
	cout<<count(n);
}
