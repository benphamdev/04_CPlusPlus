#include<bits/stdc++.h>

using namespace std;

const int sz= 100 ;

int n ,X[sz], A[sz];
bool used[sz];

void inp()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> A[i];
	}
}
void in()
{
	for(int i = 1 ; i<=n ; i++)
	{
		cout<<X[i]<<' ';
	}
	cout<<"\n";
}
void Try(int i)
{
	for(int j = 1 ; j <= n ; j++)
	{
		if(!used[j])
		{
			X[i] = A[j];
			used[j] = 1;
			if(i==n) 
				in();
			else 
				Try(i+1);
			used[j] = 0;	
		}
	
	}
}
int main()
{
	inp();
	Try(1);
}
