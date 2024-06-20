#include<bits/stdc++.h>

using namespace std;

const int sz = 100;
int n;
int A[sz];

void inp()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	int best = 0, d = 1;
	for(int i = 1; i < n; i++)
	{
		if(A[i] > A[i - 1])
		{
			d++;
		}
		else
		{
			int sum = 0;
			for(int j = 0; j < d; j++)
			{
				sum += A[i - d + j];
			}
			best = max(sum, best);
			d = 1;
		}
	}
	if(d > 1)
	{
		int sum = 0;
		for(int j = 0; j < d; j++)
		{
			sum += A[n - d + j];
		}
		best = max(sum, best);
	}
	cout << best << endl;	
}
int main()
{
	inp();
}
