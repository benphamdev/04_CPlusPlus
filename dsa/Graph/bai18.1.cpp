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

multiset<int> res[1001];

int n, m, q;
map<int, int> mp;
int cnt = 0;
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
         mp[v] = cnt;
        for(int x : adj[v]){
            if(!visited[x]){
                q.push(x);
                visited[x] = true;
            }
        }
    }
}

void ex() {
    inp();
    for(int i = 1; i <= n; i++){
       if(!visited[i]){
            BFS(i);
            cnt++;
       }
    }

    cin >> q;
    while(q--){
        int s, t; cin >> s >> t;    
        if(mp[s] != mp[t]) cout << -1 << "\n";
        else cout << 1 << "\n";
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
