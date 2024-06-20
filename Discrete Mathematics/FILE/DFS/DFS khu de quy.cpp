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

void inp() {
	cin >> n >> m;
	FOR(i, 0, m) {
		int x, y;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	ms(visited,false);
}

void DFS(int u) {
	stack<int> st;
	st.push(u);
	visited[u] = true;
	while(!st.empty()) {
		int dinh = st.top();st.pop();
		cout << dinh << " ";
		for(int x : adj[dinh]) {
			if(!visited[x]){
				st.push(x);
				visited[x] = true;
			}
		}
	}
}

void ex() {
	inp();
	DFS(1);
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	ex();
}
//8 11
//1 2
//1 3
//1 8
//2 4
//2 8
//3 4
//3 6
//4 5
//5 6
//5 8
//6 7




