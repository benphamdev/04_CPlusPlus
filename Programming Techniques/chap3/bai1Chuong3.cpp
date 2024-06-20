#include<iostream>

using namespace std;

long long pow(int n,int p)
{
	if(p==0) return 1;
	long long x = pow(n,p/2);
	if(p%2==1)
		return 1ll * x * x * n;
	return 1ll * x * x;	
}
int main()
{
	int n,p;cin>>n>>p;
	cout<<pow(n,p);	
}
