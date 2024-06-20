#include<bits/stdc++.h>

using namespace std;
#define size 10

int Mark[size][size] , n , cnt = 0 , ok ;

int X[8] = { -2 , -2 , -1 , -1 ,  1 , 1 , 2 , 2};
int Y[8] = { -1 , 1 , -2 , 2 , -2 , 2 , -1 , 1};

void in()
{
	for(int i = 0 ; i<n ; i++)
	{
		for(int j = 0 ; j<n ; j++)
		{
			cout<<Mark[i][j]<<" ";
		}
		cout<<"\n";
	}		
	cout<<"\n";	
}
void Try(int a , int b)
{
	cnt++;
	Mark[a][b] = cnt ;
	for(int i = 0 ; i<8 ; i++ )
	{
		if(cnt == n*n)
		{
			in();
			ok = 1;
			return ;
		}
		int x =  a + X[i];
		int y =  b + Y[i];
		if( x >= 0 && x < n && y >= 0 && y < n && !Mark[x][y])
		{
			Try(x,y);
		}		
	}
	cnt--;
	Mark[a][b] = 0;	
}
int main()
{
	cin >> n;
	int a, b;
	cin>>a>>b;
	ok = 0;
	Try(a,b);
	if(!ok) cout<<-1;
}
