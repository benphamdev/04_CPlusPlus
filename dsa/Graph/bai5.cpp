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

int n, m; 
int a[1005][1005];
vi adj[1005];
vector<pi> edge;

void ex() {
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++) cin >> a[i][j];
    }
    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){
            if(a[i][j] == 1){
                adj[i].pb(j);
                adj[j].pb(i);
                edge.pb({i, j});
            }
        }
    }
        
    for(auto it : edge){
        cout << it.fi << " " << it.se << "\n";
    }
    cout  << "\n";
    for(int i = 1; i <= n; i++){
        cout << i << " : ";
        for(int x : adj[i]){
            cout << x << ' ';
        }
        cout << "\n";
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
