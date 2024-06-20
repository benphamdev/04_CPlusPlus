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

class gamer{
    private:
        string username, password, name, inhour, outhour;
    public:
        friend istream& operator >> (istream&, gamer&);
        friend ostream& operator << (ostream&, gamer);
        bool operator < (gamer);
        int getGio();
        string getUsername(){
            return this->username;
        }
};

int xl(string s){
    int h = stoi(s.substr(0, 2)), m = stoi(s.substr(3));
    return h * 60 + m;
}
int gamer::getGio(){
    int in = xl(inhour), out = xl(outhour);
    return out - in;
}

bool gamer::operator < (gamer other){
    int x = getGio(), y = other.getGio();
    if (x != y) return x > y;
    return this->username < other.username;
}

bool cmp(gamer a, gamer b){
    int x = a.getGio(), y = b.getGio();
    if (x != y) return x > y;
    return a.getUsername() < b.getUsername();
}
istream& operator >> (istream& in, gamer& a){
    in >> a.username >> a.password; 
    in.ignore();
    getline(in, a.name);
    in >> a.inhour >> a.outhour;
    return in;
}
ostream& operator << (ostream& out, gamer a){
    out << a.username << ' ' << a.password << " " << a.name << " ";
    int x = a.getGio();
    int h = x / 60, m = x % 60;
    out << h << " gio " << m << " phut\n";
    return out;
}

void ex() {
    int TC;  TC = 1;
    while (TC --) {
        int n; cin >> n;
        gamer a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        sort(a, a + n);
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