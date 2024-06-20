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
void inp(fstream &ir) {
	ir >> n >> m;
	FOR(i, 0, m) {
		int x, y, w; ir >> x >> y >> w;
		adj[x].pb({y, w});
		adj[y].pb({x, w});
	}
	ms(visited,false);// thuoc V
}
void  prim(int u, fstream  &ow) {
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
//	ow << "Length Minimum Spanning Tree : " << d << "\n";
//	for(edge it : mst) {
//		ow << it.x << " " << it.y << " " << it.w << " \n";
//	}
	for(int x : s)
		ow << x << " ";
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	fstream ir("input.txt", ios :: in);
	fstream ow("output.txt", ios :: out);
	inp(ir);
	prim(0, ow);
	ir.close();
	ow.close();
}

