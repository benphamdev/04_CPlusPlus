#include<bits/stdc++.h>

using namespace std;

void pascal(int n)
{
	int A[n][n];
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j <= i; j++)
		{
			if(j == i || j == 0)
			{
				A[i][j] = 1;
			}
			else
			{
				A[i][j] = A[i - 1][j] + A[i - 1][j - 1];
			}
			cout << A[i][j] << " ";
		}
		cout << "\n";
	}
}
int main()
{
	int n ; cin >> n;
	pascal(n);
}
