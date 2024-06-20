#include<bits/stdc++.h>

using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t,x) (t.find(x))!=t.end())
#define sz(a) int((a).size())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef pair<int,int> pi;
typedef vector <int> vi;

const int sz = 1001;

struct edge {
	int x, y, w;
};

int n, m;
vector<pi> adj[sz];
bool visited[sz];
vi s;
void inp() {
	cin >> n >> m;
	FOR(i, 0, m) {
		int x, y, w; cin >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}
	ms(visited,false);// thuoc V
}
void  prim(int u) {
	vector<edge> mst;
	int d = 0;
	visited[u] = true;// thuoc v(mst)
	s.pb(u);
	while(sz(mst) < n - 1) {
		int x, y, minW = INT_MAX;
		FOR(i, 0, n ) {
			if(visited[i]) {
				for(pi it : adj[i]) {
					if(!visited[it.first] && it.second < minW) {
						x = i;
						y = it.first;
						minW = it.second;
					}
				}
			}
		}
		d += minW;
		visited[y] = true;
		s.pb(y);
		mst.pb({x, y, minW});
	}
//	cout << "Length Minimum Spanning Tree : " << d << "\n";
//	for(edge it : mst) {
//		cout << it.x << " " << it.y << " " << it.w << " \n";
//	}
	for(int x : s)
		cout << x << " ";
}

int main() {
	inp();
	prim(0);
}

//6 9
//1 2 9
//1 3 4
//2 3 1
//2 4 6
//2 5 3
//3 5 2
//4 5 3
//4 6 10
//5 6 8


//6 9
//0 1 1
//0 2 2
//0 4 2
//1 3 2
//2 3 4
//2 4 4
//2 5 3
//3 5 6
//4 5 3