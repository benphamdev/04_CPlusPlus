#include<bits/stdc++.h>

using namespace std;

#define sz 10000

int n, m, x, y, best = INT_MAX, cnt = 0, ok ;

int a[sz][sz], b[sz][sz];
int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, -1, -1, -1, 0, 1, 1, 1};

vector<vector<int>> v;
vector<vector<int>> ans;

int getBit(int n, int k) 
{
	return (n & (1 << k));
}
void inp() 
{
	cin >> n >> m;
	srand(time(NULL));
	for(int i = 1; i <= n; i++) 
	{
		for(int j = 1; j <= m; j++) 
		{
			cin >> a[i][j];
//			a[i][j] = rand() % 255;
			b[i][j] = 1;
		}
	}
	cin >> x >> y;
}

void Try(int i, int j ,int cnt) 
{
	if(i == n ) 
	{
		if(best > cnt) 
		{
			best = cnt;
			ans = v;
			ok = 1;
		}
	}
	for(int k = 0; k < 8; k++) 
	{
		int i1 = i + dx[k],  j1 = j + dy[k];
		int l = getBit(a[i][j], k);
		if(l && i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= m && b[i1][j1]) 
		{
			vector<int> tmp;
			tmp.push_back(i1);
			tmp.push_back(j1);
			v.push_back(tmp);
			b[i1][j1] = 0;
			Try(i1, j1, cnt+1);
			b[i1][j1] = 1;
			tmp.pop_back();
			tmp.pop_back();
			v.pop_back();
		}
	}

}
int main() 
{
	#ifndef bt
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	inp();
	ok = 0;
//	for(int i = 1; i <= n; i++) {
//		for(int j = 1; j <= m; j++) {
//			cout << a[i][j] << " ";
//		}
//		cout << "\n";
//	}
	Try(x,y,0);
	if(!ok) 
	{
		cout << 0;
	} else 
	{
		cout << best + 1<< "\n";
		cout << x << " " << y << "\n";
		for(int i = 0; i < ans.size(); i++) 
		{
			for(int j = 0; j < ans[i].size(); j++) 
			{
				cout << ans[i][j] << " ";
			}
			cout << "\n";
		}
	}
}

//5 6
//1 2 3 4 5 6
//7 8 9 10 11 12
//13 14 15 16 17 18
//19 20 21 22 23 24
//25 26 27 28 29 30
//3 4