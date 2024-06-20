#include<bits/stdc++.h>

using namespace std;

const int sz = 10;

void inp(int A[][sz], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> A[i][j];		
		}
	}
}

void out(int A[][sz], int n, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cout << A[i][j] << " ";		
		}
		cout << "\n";
	}
}

void multiplyMatrix(int A[][sz], int  B[][sz], int C[][sz], int n, int p, int m)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
		 	C[i][j] = 0;
		  	for(int k = 0; k < p; k++)
			{
   			    C[i][j] += A[i][k]*B[k][j]; 			
			}	
		}
	}
}

int main()
{
 	int n, p, m;
 	cin >> n >> p >> m;
 	int A[sz][sz], B[sz][sz], C[sz][sz];
 	inp(A, n , p);
 	inp(B, p , m);
 	multiplyMatrix(A, B, C, n, p, m);
 	out(C, n , m);
}
