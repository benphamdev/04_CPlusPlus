#include<bits/stdc++.h>


using namespace std;

int n, w;
int dp[1005][1005];
int A[1005];
bool mark[1005];

void inp()
{
	cin >> n >> w;
	for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= w; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if(j >= A[i])
			{
				dp[i][j] = max(dp[i][j], dp[i - 1][j - A[i]] + A[i]);
			}
		}
	}
	cout << dp[n][w] << endl;
	int res = dp[n][w];
	memset(mark, false, sizeof(mark));

	for(int i = n; i > 0 && res > 0; i--)
	{
		if(dp[i][res] == dp[i - 1][res]) continue;
		if(dp[i][res] > dp[i - 1][res]) 
		{
			mark[i] = true;
		}
		res = dp[i][res] - A[i];
	}
	
	for(int i = 1; i <= n; i++)
	{
		if(mark[i]) cout << A[i] << " ";
	}
}

int main()
{
	inp();
}
