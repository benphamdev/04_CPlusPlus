#include<iostream>

using namespace std;

int X[100] , m , n;

int solve()
{
	int k = 0, best = 0;
	for(int i = 1; i <= m; i++)
	{
		if(X[i] == 0)
			k++;
		else
		{
			if(k == 0)
				return -1;
			if(best < k)
				best = k;
			k--;
		}
	}
	if(k==0)
		return best;
	return -1;	
}

void out()
{
	if(solve() == n)
	{
		for(int i = 1; i <= m; i++)
		{
			if(X[i] == 0)	
				cout<<'(';
			else 
				cout<<')';	
		}
		cout<<"\n";
	}
}

void Try(int i)
{
	for(int j = 0; j <= 1; j++)
	{
		X[i] = j;
		if(i == m-1)
			out();
		else 
			Try(i+1);
	}
}

int main()
{
	cin>>m>>n;
	X[1] = 0;X[m] = 1;
	Try(2);
}
