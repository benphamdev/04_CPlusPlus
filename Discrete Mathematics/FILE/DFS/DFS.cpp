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

int n, m;
vi adj[sz];
bool visited[sz];
vector<pi> ans;

void inp(fstream &ir) {
	ir >> n >> m;
	FOR(i, 0, m) {
		int x, y; ir >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms(visited, false);
}
void DFS(int i) {
	visited[i] = true;
	for(int x : adj[i]) {
		if(!visited[x]) {
			ans.pb({i,x});
			DFS(x);
		}
	}
}
void ex() {
	fstream ir("input.txt", ios::in);
	fstream ow("output.txt", ios::out);
	inp(ir);
	DFS(1);
	ow << '{';
	for(pi x : ans) {
		ow <<"(" << x.fi << ", " << x.se << ")";
		if(x != ans[ans.size() - 1]) ow << ";";
	}
	ow << '}';
	ir.close();
	ow.close();
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	ex();
}





