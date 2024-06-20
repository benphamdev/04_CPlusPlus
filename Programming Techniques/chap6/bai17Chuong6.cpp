#include<iostream>

using namespace std;

int main()
{
	int n, w; cin >> n >> w;
	int A[n + 1], C[n + 1];
	for(int i = 1; i <= n; i++) cin >> A[i];
	for(int i = 1; i <= n; i++) cin >> C[i];
	int dp[w + 1];
	memset(dp, 0, sizeof(dp));
	for(int i = 1; i <= w; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			if(i >= A[j])
			{
				dp[i] = max(dp[i - A[j]] + C[j], dp[i]);
			}
		}
	}
	cout << dp[w] << "\n";
}