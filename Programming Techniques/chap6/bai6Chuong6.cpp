#include<bits/stdc++.h>

using namespace std;

int n;
int A[100];
int B[100];

void inp()
{
	cin >> n;
	for(int i = 0; i < n; i++)
		cin >> A[i];
	int cnt = 0, d = 1, res = 0;
	for(int i = 1; i < n; i++)
	{
		if(A[i] > A[i - 1])
		{
			d++;
		}
		else if(d > 1)
		{
			for(int j = 0; j < d; j++)
			{
				cout << A[i - d + j] << " ";	
			}	
			cout << "\n";
			d = 1;
		}	
	}
	if(d >= 1)
	{
		for(int j = 0; j < d; j++)
		{
			cout << A[n - d + j] << " ";
		}
	}
}
int main()
{
	inp();
}
