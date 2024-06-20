#include<bits/stdc++.h>

using namespace std;

const int maxn = 1001;
int X[maxn] ,n ;
int A[maxn];

void inp()
{
	cin>>n;
	for(int i = 1; i <= n; i++){
		cin >> A[i];
	}
}

void Try(int i ,int pos , int cnt )
{
	if(cnt <= n)
	{
		if(cnt == 0)  
			cout<<"{}"<<"\n";
		else 
			cout<<"{";
		for(int j = 1; j <= cnt ;j++)
		{
			cout << X[j];
			if(j != cnt ) 
				cout<<" ; ";
			else 
				cout<<"}"<<"\n";
		}
	}
	for(int j = pos ; j <= n ; ++j)
	{
		X[i] = A[j];
		Try(i + 1 , j + 1 , cnt + 1);
	}
}
int main()
{
	inp();
	Try(1,1,0);
}






