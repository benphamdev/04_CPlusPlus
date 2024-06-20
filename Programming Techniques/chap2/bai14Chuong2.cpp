#include<bits/stdc++.h>

using namespace std;
	
void solve(int n)
{
	int a[n][n];
	int h1 = 0, h2 = n-1 , c1 = 0 , c2 = n-1;
	int cnt = 1;
	while( h1 <= h2 && c1 <= c2 )
	{
		for(int i = c1 ; i<=c2 ; i++ )
		{
			a[h1][i] = 	cnt++;
		}
		h1++;
		for(int i = h1 ; i<=h2 ; i++ )
		{
			a[i][c2] = cnt++;
		}
		c2--;
		if(h1 <= h2)
		{
			for(int i=c2 ;i>=c1;i--)
			{
				a[h2][i] = cnt++;
			}
			h2--;
		}
		if(c1 <= c2)
		{
			for(int i=h2;i>=h1;i--)
			{ 
				a[i][c1] = cnt++;
			}
			c1++;
		}
	}  
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<left<<setw(n/2)<<a[i][j]<<" ";
		}
		cout<<"\n";
	} 
}
int main(){
	int n;
	cout<<"Nhap n : ";cin>>n;
	solve(n);
}
