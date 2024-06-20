#include<iostream>
#include<iomanip>

using namespace std;

long long sum(int n)
{
	return 1ll*(n+1)*n/2;	
}

double sum1(int n)
{
	double ans = 0;
	for(int i = 1; i<=n ; i++)
		ans += 1.00000/sum(i);
	return ans;	
}
int main()
{
	int n;cin>>n;
	cout<<fixed<<setprecision(6)<<sum1(n);
}
