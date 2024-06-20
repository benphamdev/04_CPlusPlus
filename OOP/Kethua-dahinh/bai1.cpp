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

#if __cplusplus >= 201402L
#include <shared_mutex>
#endif

#if __cplusplus >= 201703L
#include <any>
#include <charconv>
// #include <execution>
#include <filesystem>
#include <optional>
#include <memory_resource>
#include <string_view>
#include <variant>
#endif

#if __cplusplus > 201703L
#include <bit>
// #include <compare>
// #include <span>
// #include <syncstream>
#include <version>
#endif

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
#define mp make_pair
#define endl "\n"

typedef unsigned long long ull;
typedef long double ld;
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pi> vpi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b) {ll r;while(b) {r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b) {return a*b/gcd(a,b);}

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
            {-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

void gotoFUTURE();

//A WINNER WHO NEVER GIVE UP !!!
//NO PAIN, NO GAIN !!!

class person{
    private:
        string ten, ns, dc;
    public:
        person(){
            ten = ns = dc = "";
        }
        person(string ten, string ns, string dc){
            this->ten = ten;
            this->ns = ns;
            this->dc = dc;
        }
        void toString(){
            cout << ten << " " << ns << " " << dc << " ";
        }
        void chuanhoa(){
            if(ns[2] != '/') ns = "0" + ns;
            if(ns[5] != '/') ns.insert(3, "0");
            stringstream ss(ten);
            string token, res = "";
            while(ss >> token){
                res += toupper(token[0]);
                for(int i = 1; i < token.size(); i++) res += tolower(token[i]);
                res += " ";
            }
            res.erase(res.length() - 1);
            ten = res;
        }
        
        friend istream& operator >> (istream& in, person &x){
            in.ignore();
            getline(in, x.ten);
            string s;
            getline(in, s);
            int idx = 0;
            while(!isalpha(s[idx])) idx ++;
            x.ns = s.substr(0, idx);
            x.dc = s.substr(idx);
            
            return in;
        } 
        friend ostream& operator << (ostream& out, person x){    
            out << x.ten << " " << x.ns << " " << x.dc << " ";        
            return out;
        }
};

int cnt = 1;

class student : public person{
    private:
        string ma, lop;
        double gpa;
    public:
        
        void toString(){
            cout << ma << " ";
            person::toString();
            cout << gpa << ' ' << lop << "\n";
        }
        
        friend istream& operator >> (istream& in, student &x){
            in >> static_cast<person&>(x);
            string s = to_string(cnt++);
            x.ma = string(4 - sz(s), '0') + s;
            in >> x.lop >> x.gpa;
            return in;
        }
        
        friend ostream& operator << (ostream& out, student x){
            out << x.ma << " ";
            out << static_cast<person&>(x);
            out << x.lop << " " <<  
            fixed << setprecision(2) << x.gpa << "\n";
            return out;
        }
};
void ex(string HOC = "A year begins in the spring. A young life begins.") {
    int TC;     TC = 1;
    while (TC --> 0) {
        int n; cin >> n;
        student a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        for(int i = 0; i < n; i++) {
            a[i].chuanhoa();
            cout << a[i];
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

void gotoFUTURE() {
   ios_base::sync_with_stdio(false);    cin.tie(nullptr);    cout.tie(nullptr);
   #ifndef MOTIVATION
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
   #endif
    ex();
}
