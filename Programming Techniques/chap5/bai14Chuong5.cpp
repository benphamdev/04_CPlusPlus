#include<iostream>

using namespace std;

int solve(int n)
{
	if(n <= 1)
		return n;
	if(n&1)
		return solve(n/2) + solve(n/2 + 1);	
	else
		return solve(n/2);	
}
int main()
{
	int n ; cin >> n;
	cout << solve(n);
}