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
typedef pair<ll, ll> pll;
typedef vector <int> vi;


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

int n, m, s, t; 
vi adj[1001];
bool visited[1001];// danh dau 
int parent[1001];// luu vet

void inp(){
    cin >> n >> m >> s >> t;
    FOR(i, 0, m){
        int x, y; cin >> x >> y;
        adj[x].pb(y);
        adj[y].pb(x);
    }
    ms(visited, false);
}

void BFS(int u){
    queue<int> q;
    q.push(u);
    visited[u] = true;
    while(!q.empty()){
        int v = q.front();q.pop();
        sort(all(adj[v]));
        for(int x : adj[v]){
            if(!visited[x]){
                parent[x] = v;
                visited[x] = true;
                q.push(x);
            }
        }
    }
}
void ex() {
    inp();
    BFS(s);
    if(!visited[t]) cout << -1;
    else{
        vi path;
        while(t != s){
            path.push_back(t);
            t = parent[t];
        }
        path.pb(t);
        reverse(all(path));
        for(int x : path) cout << x << " ";
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

    ex();
}
