#include<bits/stdc++.h>

using namespace std;

int X[100],n;

void inp()
{
	for(int i=1;i<=n;i++)
		cout<<X[i];
	cout<<"\n";	
}
void Try(int i)
{
	for(int j=0 ; j <= 1 ; j ++ )
	{
		X[i] = j;
		if(i==n) inp();
		else Try(i+1);
	}
}
int main()
{
	cin>>n;
	Try(1);
}
