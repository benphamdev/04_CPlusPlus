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


typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector <int> vi;
const int MOD =(int) 1e9+7;
const int INF=(int) 1e9+2804;

// ma tran ke
// danh sach canh
// danh sach ke

// danh sach canh -> danh sach ke
const int s = 1001;

int n, m;
vi adj[1001];

int main() {
	cin >> n >> m;
	for(int i = 0; i < m; i++) {
		int x, y ;
		cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
	for(int i = 1; i <= n; i++){
		cout << i << " : ";
		sort(all(adj[i]));
		for(int x : adj[i]){
			cout << x << " ";
		}
		cout << "\n";
	}

}
//5 9
//1 2
//1 3
//1 4
//2 3
//2 4
//2 5
//3 4
//3 5
//4 5

