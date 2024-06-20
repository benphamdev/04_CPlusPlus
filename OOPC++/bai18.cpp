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

// 3
// Nguyen Manh Son
// Cong nghe phan mem
// Vu Hoai Nam
// Khoa hoc may tinh
// Dang Minh Tuan
// An toan thong tin

// GV02 Vu Hoai Nam KHMT
// GV01 Nguyen Manh Son CNPM
// GV03 Dang Minh Tuan ATTT


class gv{
    private:
        string ten, mon, mgv;
        static int cnt;
    public:
        gv(){}
        friend istream& operator >> (istream&, gv&);
        friend ostream& operator << (ostream&, gv);
        string getname(){
            return this->ten;
        }
        string getMa(){
            return this->mgv;
        }
};
int gv::cnt = 0;

string getName(string s){
    stringstream ss(s);
    string res = "", token;
    while(ss >> token) res = token; 
    return res;
}

bool cmp(gv a, gv b){
    if(getName(a.getname()) != getName(b.getname()))
        return getName(a.getname()) < getName(b.getname());
    return a.getMa() < b.getMa();
}

string convert(string s){
    string res = "";
    stringstream ss(s);
    string token;
    while(ss >> token)  res += toupper(token[0]);
    return res;
}

istream& operator >> (istream& in, gv& a){
    gv::cnt++;
    string tmp = to_string(gv::cnt);
    tmp = string(2 - tmp.size(), '0') + tmp;
    a.mgv = "GV" + tmp;
    getline(in, a.ten);
    getline(in, a.mon);
    a.mon = convert(a.mon);
    return in;
}
ostream& operator << (ostream& out, gv a){ 
    out << a.mgv << " " << a.ten << " " << a.mon << "\n";
    return out;
}

void ex(){
    int n; cin >> n;
    cin.ignore();
    gv a[n];
    FOR(i, 0, n) cin >> a[i];
    sort(a, a + n, cmp);
    FOR(i, 0, n) cout << a[i];
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