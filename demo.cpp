#include<bits/stdc++.h>

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
typedef pair <int,int> pi;
typedef vector <int> vi;
typedef vector <ll> vll;
typedef vector <pi> vpi;

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

//A WINNER WHO NEVER GIVE UP !!!
//NO PAIN, NO GAIN !!!

int in[1001], level[1001], mark[10001];
int n;

void inp() {
	int n;
	do {
		cout << "nhap n > 0 : ";
		cin >> n;
	} while(n <= 0);
	int sum = 0;
	for(int i = 0; i < n; i++) sum += i;
	cout << "tong = " << sum << "\n";
	int tmp = 0;
	for(int i = 1; i < sqrt(n); i++) {
		if(n % i == 0 && n / i % 2 == 0)
			tmp = max(n / i, tmp);
	}
	if(tmp == 0)
		cout << "khong tim thay";
	else
		cout << tmp;
}
void test() {
	int TC;
	cin >> TC;
	while (TC --> 0) {
		inp();
	}
}

int32_t main() {
	test();
}
