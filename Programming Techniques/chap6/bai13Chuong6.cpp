#include<bits/stdc++.h>


using namespace std;

int C[1005][1005];
int n, k;

void inp()
{
	cin >> n >> k;
	for(int i = 0; i <= n; i++)
	{
		for(int j = 0; j <= min(i, k); j++)
		{
			if(j == 0 || j == i)
			{
				C[i][j] = 1;
			}
			else
			{
				C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
			}
		}
	}
	
	cout << C[n][k] << endl;
}
int main()
{
	inp();
}
