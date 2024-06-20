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
void chuanhoa(string &x);
// A WINNER IS A DREAMER WHO NEVER GIVES UP !!!

class nv{
    private:
        string name, gt, ns, dc, mst, hd;
        
        static string ma;
    public:
        friend istream& operator >> (istream &in, nv &a);
        friend ostream& operator << (ostream &out, nv a);   
        string getNs();
        string getMst();
};

string nv::ma = "00001";

string nv::getNs(){
    return this->ns;
}
string nv::getMst(){
    return this->mst;
}
istream& operator >> (istream &in, nv &a){
    getline(in, a.name);
    in >> a.gt >> a.ns;
    in.ignore();
    getline(in, a.dc);
    in >> a.mst >> a.hd;    
    chuanhoa(a.ns);
    chuanhoa(a.hd);
    return in;
}

ostream& operator << (ostream &out, nv a){
    out << a.ma << " " << a.name << " " << a.gt << " " << a.getNs() << " " << a.dc  << " " << a.mst << " " << a.hd;
    return out;
}
void chuanhoa(string &s){
    if(s[2] != '/') s += "0";
    if(s[5] != '/') s.insert(3, "0");
} 
void ex(){
    nv a; 
    cin >> a;
    cout << a;
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