#include<bits/stdc++.h>
// C
#ifndef _GLIBCXX_NO_ASSERT
#include <cassert>
#endif
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>

#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdalign>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cuchar>
#endif

// C++
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>

#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <codecvt>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif

// #if __cplusplus >= 201402L
// #include <shared_mutex>
// #endif

// #if __cplusplus >= 201703L
// #include <any>
// #include <charconv>
// // #include <execution>
// #include <filesystem>
// #include <optional>
// #include <memory_resource>
// #include <string_view>
// #include <variant>
// #endif

// #if __cplusplus > 201703L
// #include <bit>
// // #include <compare>
// // #include <span>
// // #include <syncstream>
// #include <version>
// #endif

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

const int maxn = 1005;
int n, m;
int s, t, u, v;
vi adj[maxn];
bool visited[maxn];
int indegree[maxn];
int parent[maxn][maxn];
int color[maxn];
int height[maxn] = {0};
int a[maxn][maxn];

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
            {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
void inp() {
    cin >> n >> s >> t >> u >> v;
    FOR(i, 1, n + 1) {
        FOR(j, 1, n + 1) cin >> a[i][j];
    }
    ms(parent, 0);
}
void dfs(int u) {
    visited[u] = true;
    for(int v : adj[u]) {
        if(!visited[v]) {
            dfs(v);
        }
    }
}

void bfs(int i, int j) {
    queue<pi> q;
    q.push({i, j});
    a[i][j] = 0;
    while(!q.empty()) {
        pi top = q.front(); q.pop();
        if(u == top.fi && v == top.se) return;
        for(int k = 0; k < 8; k++){
            int i1 = top.fi + path[k].fi, j1 = top.se + path[k].se;   
            if(i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1] == 1){
                parent[i1][j1] = parent[top.fi][top.se] + 1;
                q.push({i1, j1});
                a[i1][j1] = 0;            
            }
        }
    }
}
void ex() {
    inp();
    bfs(s, t);
    if(!parent[u][v]) cout << -1;
    else cout << parent[u][v];
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
// #ifndef MOTIVATION
//     freopen("input.txt", "r", stdin);
//     freopen("output.txt", "w", stdout);
// #endif
    ex();
}
