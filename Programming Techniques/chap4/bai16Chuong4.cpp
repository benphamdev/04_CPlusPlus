#include<bits/stdc++.h>

using namespace std;
const int size = 100;

int A[size][size] , X[size] , n , best = 1e9 , res = 0;
bool visited[size];


void inp()
{
	cin>>n;
	memset(visited, false , sizeof(visited));
	for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin>>A[i][j];
}

void Try(int i)
{
	for(int j = 2; j <= n; j++)
	{
		if(!visited[j])
		{
			visited[j] = true;
			X[i] = j;
			res += A[X[i-1]][X[i]];
			if(i == n)
			{
				best = min(best, res + A[X[n]][1]);
			}
			else 
				Try(i+1);
			visited[j] = false;
			res -= A[X[i-1]][X[i]];	
		}
	}
}	
int main()
{
	inp();
    if(n==1)
        cout<<0;
    else
    {
        X[1] = 1;
        Try(2);
        cout<<best;
    }
	
}
