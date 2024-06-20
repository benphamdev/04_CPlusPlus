#include<bits/stdc++.h>

using namespace std;
using ll = long long; 

int n;
int A[1005];
ll dp[51][100005];

void in()
{
	cin >> n;
	ll sum = 0;
	for(int i = 1; i <= n; i++)
	{
		cin >> A[i];
		sum += A[i];
	}
	ll best = sum;
	sum /= 2;
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= sum; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if(j >= A[i])
				dp[i][j] = max(dp[i - 1][j - A[i]] + A[i], dp[i][j]);
		}
	}
	cout << dp[n][sum] << endl;
	cout << best - dp[n][sum] << "\n";
}
int main()
{
	in();
}
