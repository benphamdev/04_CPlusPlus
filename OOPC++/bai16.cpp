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

// 2
// nguyen vAN a
// D20CQCN01-B
// 2/12/2002
// 3.19
// ngUYEN quAng hAI
// D20CQCN02-B
// 2/2/2003
// 4

// B20DCCN002 Nguyen Quang Hai D20CQCN02-B 02/02/2003 4.00
// B20DCCN001 Nguyen Van A D20CQCN01-B 02/12/2002 3.19

class sv{
    private:
        string msv, ten, ns, lop;
        double gpa;    
        static int cnt;  
    public:     
        sv(){
            msv = ten = lop = "";
            gpa = 0;
        }
        friend istream& operator >> (istream&, sv&);
        friend ostream& operator << (ostream&, sv);
        // friend bool cmp(sv, sv);
        // friend bool orperator < (sv, sv);
        double getGpa(){
            return gpa;
        }
};
int sv::cnt = 0;

// bool cmp(sv a, sv b){
//     return a.gpa > b.gpa;
// }
bool cmp(sv a, sv b){
    return a.getGpa() > b.getGpa();
}
string chuanHoa(string s){
    stringstream ss(s);
    string token;
    string res = "";
    while(ss >> token) {
        res += toupper(token[0]);
        for(int i = 1; i < token.size(); i++) res += tolower(token[i]);
        res += " ";
    }
    res.erase(res.length() - 1);
    return res;
}
istream& operator >> (istream& in, sv& a){
    sv::cnt++;
    string temp = to_string(sv::cnt);
    a.msv = "B20DCCN" + string(3 - temp.size(), '0') + temp;
    cin.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.ns >> a.gpa;
    if(a.ns[2] != '/') a.ns = "0" + a.ns;
    if(a.ns[5] != '/') a.ns.insert(3, "0");
    a.ten = chuanHoa(a.ten);
    return in;
}
ostream& operator << (ostream& out, sv a){
    out << a.msv << " " << a.ten << " " << a.lop << " " << a.ns << " " << fixed << setprecision(2) << a.gpa << "\n";
    return out;
}

void ex(){
    sv ds[50];
    int N, i; cin >> N;
    FOR(i, 0, N) cin >> ds[i];
    sort(ds, ds + N, cmp);
    FOR(i, 0, N) cout << ds[i];
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