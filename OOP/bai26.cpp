#include <bits/stdc++.h>
// C
#include <climits>
#include <cmath>
#include <cstring>
#include <ctime>
// C++
#include<algorithm>
#include<bitset>
#include<complex>
#include<deque>
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

using namespace std;
using  ll = long long;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
#define sz(a) int((a).size())
#define FOR(i, a, b) for(int i=(a);i<(b);i++)
#define FORd(i, a, b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second

typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pi;
typedef pair <ll, ll> pll;
typedef vector <int> vi;
typedef vector <ll, ll> vll;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a*b/gcd(a,b);}

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
            {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};
void gotoFUTURE();

// A WINNER IS A DREAMER WHO NEVER GIVES UP !!!
// NO PAIN, NO GAIN !!!

class nv{
    private:
        string ten, gt, ns, dc, mst, hd;
        int ma;
    public:
        friend istream& operator >> (istream&, nv&);
        friend ostream& operator << (ostream&, nv);
        friend bool cmp(nv, nv);
};

void chuanhoa(string &s){
    if (s[2] != '/') s = "0" + s;
    if (s[5] != '/') s.insert(3, "0");
}
int cnt = 1;
istream& operator >> (istream& in, nv &x){
    x.ma = cnt++;
    in.ignore();
    getline(in, x.ten);
    in >> x.gt >> x.ns;
    in.ignore();
    getline(in, x.dc);
    in >> x.mst >> x.hd;  
    chuanhoa(x.ns);
    chuanhoa(x.hd);
    return in;
}
ostream& operator << (ostream& out, nv x){
    out << setfill('0') << setw(5) << x.ma << " "
    << x.ten << " " << x.gt << " " << x.ns << " " << x.dc 
    << " " << x.mst << " " << x.hd << "\n";
    return out;
}
// loc
// bool cmp(nv a, nv b){
//     int d1 = (a.ns[0] - '0') * 10 + (a.ns[1]), m1 = (a.ns[3] - '0') * 10 + (a.ns[4]), y1 = stoi(a.ns.substr(6));
//     int d2 = (b.ns[0] - '0') * 10 + (b.ns[1]), m2 = (b.ns[3] - '0') * 10 + (b.ns[4]), y2 = stoi(b.ns.substr(6));
//     if (y1 != y2) return y1 < y2;
//     if (m1 != m2) return m1 < m2;
//     if (d1 != d2) return d1 < d2;
//     return a.ma < b.ma;
// }
// cach vinh
string solve(string s){
    stringstream ss(s);
    string res = "", token;
    while(getline(ss, token, '/')){
        res = token + res;
    }
    return res;
}
bool cmp(nv a, nv b){
    string s1 = solve(a.ns), s2 = solve(b.ns);
    if (s1 != s2) 
        return s1 < s2;
    return a.ma < b.ma;
}
void ex() {
    int TC;  TC = 1;
    while (TC --) {
        int n; cin >> n;
        nv a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n, cmp);
        for(int i = 0; i < n; i++) cout << a[i];  
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

void gotoFUTURE(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    #ifndef MOTIVATION
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ex();
}