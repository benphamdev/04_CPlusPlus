#include<bits/stdc++.h>
#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<numeric>
#include<algorithm>
#include<iterator>
#include<climits>
#include<cmath>
#include<cstring>
#include<ctime>
#include<bitset>
#include<deque>
#include<complex>
#include<functional>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

using namespace std;
using  ll = long long;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t,x) (t.find(x))!=t.end())
#define sz(a) int((a).size())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORd(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair
#define endl "\n"

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector <int> vi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a*b/gcd(a,b);}

int n, m, A[100][100];

void inp()
{
	cin >> n >> m ;
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	} 
}

void xuat()
{
	for(int i = 0; i < n; i++)
	{
		int maxrow = INT_MIN;
		int idx1 = -1;
		for(int j = 0; j < m; j++)
		{
			if(A[i][j] > maxrow)
			{
				maxrow = A[i][j];
				idx1 = j;	
			}
		}
		int mincol = INT_MAX;
		for(int k = 0; k < n; k++)
		{
			if(A[k][idx1] < mincol)
			{
				mincol = A[k][idx1];
			}
		}
		if(mincol == maxrow)
		{
			cout << mincol << "\n";
		}
	}
}

int main()
{
	inp();
	xuat();
}
