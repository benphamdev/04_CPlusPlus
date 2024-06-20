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

// 4
// B16DCCN011
// Nguyen Trong Duc Anh
// D16CNPM1
// sv1@stu.ptit.edu.vn
// B15DCCN215
// To Ngoc Hieu
// D15CNPM3
// sv2@stu.ptit.edu.vn
// B15DCKT150
// Nguyen Ngoc Son
// D15CQKT02-B
// sv3@stu.ptit.edu.vn
// B15DCKT199
// Nguyen Trong Tung
// D15CQKT03-B
// sv4@stu.ptit.edu.vn
// 1
// D15CQKT02-B

// DANH SACH SINH VIEN THEO LOP : D15CQKT02-B:
// B15DCKT150 Nguyen Ngoc Son D15CQKT02-B sv3@stu.ptit.edu.vn

class sv{
    private:
        string ma, ten, lop, email;
    public:
        sv(){}
        friend istream& operator >> (istream&, sv&);
        friend ostream& operator << (ostream&, sv);
        friend bool cmp(sv, sv);
        string getLop(){ 
            return this->lop;
        }
        bool operator < (sv another);
};

bool sv :: operator < (sv another){
    return ma < another.ma;
}
// bool cmp(sv a, sv b){
//     return a.getLop() < b.getLop();
// }
// bool cmp(sv a, sv b){
//     return a.lop < b.lop;
// }

istream& operator >> (istream &in, sv &a){
    in >> a.ma;
    in.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.email;
    return in;
}

ostream& operator << (ostream &out, sv a){
    out << a.ma << " " << a.ten << " " << a.lop << " " << a.email << "\n";
    return out;
}

void ex(){
    int n; cin >> n;
    
    // sv a[n];
    // for(int i = 0; i < n; i++) cin >> a[i];
    // int q; cin >> q;
    // while(q--){
    //     string tmp ;
    //     cin >> tmp;
    //     cout << "DANH SACH SINH VIEN LOP : " << tmp << ":\n";
    //     for(int i = 0; i < n; i++){
    //         if(a[i].getLop() == tmp) cout << a[i] << '\n';
    //     }
    // }

    map<string, vector<sv>> mp;
    while(n--){
        sv tmp;   cin >> tmp;
        mp[tmp.getLop()].push_back(tmp);
    }
    int q;  cin >> q;
    while(q--){
        string s;
        cin >> s;
        cout << "DANH SACH SINH VIEN THEO LOP : " << s << ":\n";
        for(auto it : mp[s]){
            cout << it << "\n";
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

void gotoFUTURE(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    #ifndef MOTIVATION
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ex();
}