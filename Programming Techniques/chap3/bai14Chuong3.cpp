#include<iostream>

using namespace std;
using ll = long long;


int main()
{
	int n;cin>>n;
	int A[n];
	for(int i = 0; i <= n; i++) cin >> A[i];
	int s = A[0];
	int x = 1;
	for(int i = 1; i <= n; i++)
	{
		x *= x;
		s += A[i] * x;
	}
	cout<<s;
}
