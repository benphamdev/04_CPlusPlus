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
typedef pair<int,int> pi;
typedef vector <int> vi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a*b/gcd(a,b);}

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
			{-1, -1}, {-1, 1}, {1, -1}, {1, 1}};

void gotoFUTURE();

// bien doi bieu thuc tien to ve trung to
// 'A' string(1, 'A') -> "A"

void ex(){
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		stack<string> st;
		for(int i = sz(s) - 1; i >= 0; i--){
			if(isalpha(s[i])){
				// day ki tu vao trong stack
				st.push(string(1, s[i]));	
			}
			else{
				string operand1 = st.top(); st.pop();
				string operand2 = st.top(); st.pop();
				string res = "(" + operand1 + s[i] + operand2 + ")";
				st.push(res);
			}
		}
		cout << st.top() << "\n";
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
