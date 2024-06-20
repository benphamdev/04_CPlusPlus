#include<bits/stdc++.h>

using namespace std;

#define size 13
int X[size], d1[size], A[size][size];
int n , cnt = 1;

bool check(int a[][size], int b[size], int cnt)
{
	for(int i = 1; i <= cnt; i++)
		for(int j = 1; j <= n; j++)
			if(a[i][j] == b[j])
				return false;
	return true;
}

void Try(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!d1[j] )
		{
			d1[j] = 1;
			X[i] = j;
			if(i==n  && check(A,X,cnt))
			{
				for(int k = 1; k <= n ; k++)
				{
					cout<<X[k]<<" ";
					A[cnt][k] = X[k];
				}
				cout<<"\n";
				cnt++;
			}
			else Try(i+1);	
			d1[j] = 0;
		}
	}
}

int main()
{
	cin>>n;
	Try(1);
}
