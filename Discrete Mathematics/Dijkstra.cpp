#include<bits/stdc++.h>

using namespace std;

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

typedef pair<int,int> pi;
typedef vector <int> vi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
const int sz = 1001;

long long n, s, a[sz][sz];
int pre[sz];

void inp(){
	cin >> n >> s;
	FOR(i, 1, n + 1){
		FOR(j, 1, n + 1){
			cin >> a[i][j];
		}
	}
	FOR(i, 1, n + 1){
		pre[i] = s;
	}
}

int minDistance(int dist[], bool visited[]){
	int min = INT_MAX, min_index;
	for(int i = 1; i <= n; i++){
		if(!visited[i] && dist[i] <= min){
			min = dist[i];
			min_index = i;
		}
	}
	return min_index;
}

void Dijkstra(int s){
	int dist[sz];
	bool visited[sz];
	FOR(i, 1, n + 1){
		dist[i] = INT_MAX;
		visited[i] = false;
	}
	dist[s] = 0;
	FOR(i, 1, n){
		int u = minDistance(dist, visited);
		visited[u] = true;
		FOR(j, 1, n + 1){
			if(!visited[j] && dist[u] != INT_MAX && dist[j] > dist[u] + a[u][j]){
//				&& a[u][j]
				dist[j] = dist[u] + a[u][j];
				pre[j] = u;
			}
		}
	}
	FOR(i, 2, n + 1){
		cout << dist[i] << " " << pre[i] << "\n";
	}
}
int main(){
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	inp();
	Dijkstra(s);
}

//5 1
//10000 1 10000 10000 7
//10000 10000 1 4 8
//10000 10000 10000 2 4
//10000 10000 1 10000 10000
//10000 10000 10000 4 10000
