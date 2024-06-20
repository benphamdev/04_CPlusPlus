#include<bits/stdc++.h>

using namespace std;

int main()
{
	string x, y;
	cin >> x >> y;
	int n = x.size(), m = y.size();
	int L[n + 1][m + 1];
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= m; j++)
		{
			if(i == 0 || j == 0)
			{
				L[i][j] = 0;
			}
			else
			{
				if(x[i - 1] != y[j - 1])
				{
					L[i][j] = max(L[i][j - 1], L[i - 1][j]);
				}
				else
				{
					L[i][j] = L[i - 1][j - 1] + 1;
				}
			}
		}
	}
	cout << L[n][m];
}
