#include<bits/stdc++.h>

using namespace std;
using  ll = long long;

#define ms(s, n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t, x) (t.find(x) !=t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define FORd(i, a, b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector <int> vi;
typedef pair<ll, ll> pll;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b) {
    ll r;
    while(b) {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
inline ll lcm(ll a,ll b) {
    return a*b/gcd(a,b);
}

void gotoFUTURE();

vector<int> adj[1001];
bool visited[1001];
vi res;

int n, m, s;

void inp(){
	cin >> n >> m;
	for(int i = 0; i < m; i++){
		int x, y; cin >> x >> y;
		adj[x].pb(y);
		adj[y].pb(x);
	}
}
void BFS(int s){
	queue<int> q;
	q.push(s);
	visited[s] = true;
	while(!q.empty()){
		int v = q.front();
		q.pop();
//		cout << v << " ";
		res.pb(v);
		sort(all(adj[v]));
		for(int x : adj[v]){
			if(!visited[x]){
				q.push(x);
				visited[x] = true;
			}
		}
	}
}

// cho do thi vo huong n dinh, m canh
//liet ke cac dinh thuoc cung 1 thanh phan lien thong 
//theo thu tu tu be den lon

//input : 
//9 7
//1 2
//2 3
//2 4
//3 5
//6 7
//7 8
//8 6
//output :
//1 2 3 4 5
//6 7 8
//9
void ex() {
	inp();
	int cnt = 0;
	for(int i = 1; i <= n; i++){
		if(!visited[i]){
			res.clear();
			BFS(i);
			sort(all(res));
			for(int x : res){
				cout << x  << " ";
			}
			cout << "\n";
		}
	}
}
int32_t main() {
    cin.tie(0) -> sync_with_stdio(0);
    cout << fixed << setprecision(15);

    bool MULTITEST = 0;

    int OLPChuyenTin2023 = 1;
    if (MULTITEST)
        cin >> OLPChuyenTin2023;
    while (OLPChuyenTin2023 --> 0) {
        gotoFUTURE();
    }
    return 0;
}

void gotoFUTURE() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
	#ifndef MOTIVATION
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
    ex();
}
