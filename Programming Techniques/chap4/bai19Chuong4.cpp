#include<bits/stdc++.h>
using namespace std;

int X[100] , c[100] , d1[101] , d2[101];
int n ,cnt = 0;

void inkq()
{
	int A[100][100];
	memset(A , 0 , sizeof(A));
	for(int i=1 ;i<= n;i++)
		A[i][X[i]] = 1;
	for(int i=1; i<=n;i++)
	{
		for(int j = 1; j<= n;j++)	
			cout<<A[i][j];
		cout<<endl;
	}
}
void Try(int i)
{
	for(int j = 1; j <= n ; j++)
	{
		if(!c[j] && !d1[i - j +n] && !d2[i + j -1])
	    {
	    	c[j] = d1[i - j + n] = d2[i + j - 1] = 1;
	    	X[i] = j;
	    	if(i==n)
	    	{
	    		inkq();
	    		cout<<endl;
			}
			else Try(i+1);
			c[j] = d1[i - j + n] = d2[i + j -1] = 0;
		}
	}
}
int main()
{
	n=8;
	Try(1);
}
