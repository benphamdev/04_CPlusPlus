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

pi path[] = {{-1, 0}, {0, -1},  {1, 0}, {0, 1},
	{-1, -1}, {-1, 1}, {1, -1}, {1, 1}
};

void gotoFUTURE();

// tinh toan bieu thuc trung to 
//input : 
//4
//6*3+2-(6-4/2)
//100+99*22
//6*((4*3)+5)
//1-2
int pre(char c){
	if(c == '^') return 3;
	else if(c == '*' || c == '/') return 2;
	else if(c == '+' || c == '-') return 1;
	return 0;
} 
ll solve(ll a, ll b, char c){
	if(c == '+') return a + b;
	else if(c == '-') return a - b;
	else if(c == '*') return a * b;
	return a / b;
}
void ex() {
	int t;
	cin >> t;
	while(t--) {
		string s; cin >> s;
		stack<char> st1;
		stack<ll> st2;
		for(int i = 0; i < s.size(); i++){
			if(s[i] == '(') st1.push(s[i]);
			else if(isdigit(s[i])){
				ll tmp = 0;
				while(isdigit(s[i]) && i < s.size()){
					tmp = tmp * 10 + (s[i] - '0');
					i++;
				}
				st2.push(tmp);
				i--;
			}
			else if(s[i] == ')'){
				while(!st1.empty() && st1.top() != '('){
					ll operand1 = st2.top(); st2.pop();
					ll operand2 = st2.top(); st2.pop();
					st2.push(solve(operand2, operand1, st1.top()));
					st1.pop();
				}
				st1.pop();
			}
			else{
				while(!st1.empty() && pre(st1.top()) >= pre(s[i])){
					ll operand1 = st2.top(); st2.pop();
					ll operand2 = st2.top(); st2.pop();
					st2.push(solve(operand2, operand1, st1.top()));
					st1.pop();
				}
				st1.push(s[i]);
			}
		}
		while(!st1.empty()){
			ll operand1 = st2.top(); st2.pop();
			ll operand2 = st2.top(); st2.pop();
			st2.push(solve(operand2, operand1, st1.top()));
			st1.pop();
		}
		cout << st2.top() << "\n";
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
//#ifndef MOTIVATION
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//#endif
	ex();
}
