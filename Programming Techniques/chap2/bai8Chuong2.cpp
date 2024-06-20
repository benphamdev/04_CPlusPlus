#include<iostream>

using namespace std;

#define size 101

void nhap(float a[][size],int n,int m)
{

	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<m+2;j++)
		{
			if(i==0||i==n+1||j==0||j==m+1)
			{
				a[i][j] = -1e7;	
			}
			else cin>>a[i][j];
		}
	}
}

void xuat(float a[][size],int n,int m)
{
	for(int i=0;i<n+2;i++)
	{
		for(int j=0;j<m+2;j++)
		{
			cout<<a[i][j]<<' ';
		}
		cout<<'\n';
	}
}
int check(float a[][size],int i,int j)
{
	int x[4]={0,0,1,-1};
	int y[4]={1,-1,0,0};
	for(int k=0;k<4;k++)
	{
        if(a[i][j] <= a[i+x[k]][j+y[k]])
             return 0;
	}
    return 1;
}
void solve(float a[][size],int n,int m)
{
	int idx1=-1,idx2=-1;
	float best = 1e19;
	int ok=0;
	for(int i=1;i<n+1;i++)
	{
		for(int j=1;j<m+1;j++)
		{
			if(check(a,i,j) && a[i][j] <best)
			{
				best = a[i][j];
				idx1 = i;
				idx2 = j;
				ok=1;
			}
		}
	}
	if(!ok)
		cout<<-1;
	else
		cout<<idx1-1<<' '<<idx2-1;
}

void ex()
{
	size_t n,m;	cin>>n>>m;
	float a[size][size];
	nhap(a,n,m);
//	xuat(a,n,m);
	solve(a,n,m);
}
int main(){
	ex();
}
