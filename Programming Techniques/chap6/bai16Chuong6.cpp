#include<bits/stdc++.h>

using namespace std;
using  ll = long long;

int dp[1005][1005];
int mark[1005];

int main()
{
	int n, w; cin >> n >> w;
	int A[n + 1], C[n + 1];
	for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++) cin >> C[i];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if(j >= A[i])
				dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + C[i]);
		}
	}
	cout << dp[n][w] << "\n";
	int res = dp[n][w];
	int wt = w;
	for(int i = n; i >= 1 && res > 0; i--)
	{
		if(dp[i][wt] == dp[i - 1][wt])	continue;
		else 
		{
			mark[i] = 1;
			res -= C[i];
			wt -= A[i];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		if(mark[i]) cout << A[i] << ' ';
	}
}
