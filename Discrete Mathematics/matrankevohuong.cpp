#include<bits/stdc++.h>

using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t,x) (t.find(x))!=t.end())
#define sz(a) int((a).size())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define FORd(i,a,b) for(int i=(a)-1;i>=(b);i--)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef pair<int,int> pi;
typedef vector <int> vi;

const int sz = 1001;

int n, a[sz][sz], ck = 0, ck1 = 0;
vector<pi> ss;
vi vong, dinhtreo, dinhcolap;

void inp() {
	cin >> n;
	FOR(i, 0, n)
	FOR(j, 0, n)
	cin >> a[i][j];
}

void solve() {
	FOR(i, 0, n ) {
		int cnt = 0, cnt1 = 0;
		FOR(j, 0, n ) {
			if(a[i][j] >= 2 && i != j && i < j) {
				ck = 1;
				ss.pb({i,j});
			} else if(a[i][j] >= 1 && i == j) {
				ck1 = 1;
				vong.pb(i);
			}
			if(a[i][j] != 0) {
				cnt1 = 1;
			}
			if(a[i][j] >= 1) {
				cnt++;
			}
		}
		if(!cnt1)
			dinhcolap.pb(i);
		if(cnt == 1)
			dinhtreo.pb(i);
	}
}
void ex() {
	if(ck) {
		cout << "canh song song : \n";
		for(pi it : ss)
			cout << it.fi << " " << it.se << "\n";
	} else cout << "ko co canh //\n";
	if(ck1) {
		cout << "vong tai dinh : \n";
		for(int x : vong)
			cout << x << " ";
		cout << " \n";
	} else cout << "ko co vong \n";
	if(sz(dinhtreo) != 0) {
		cout << "dinh treo :\n";
		for(int x : dinhtreo) 
			cout << x << " ";
		cout << " \n";
	} else cout << "ko co dinh treo \n";
	if(sz(dinhcolap) == 0) {
		cout << "ko co dinh co lap\n";
	} else {
		cout << "dinh co lap :\n";
		for(int x : dinhcolap)
			cout << x << " ";
		cout << " \n";
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	inp();
	solve();
	ex();
}


//4
//0 1 0 0
//1 0 2 0
//0 2 1 0
//0 0 0 0

//4
//0 1 1 0
//1 0 0 2
//1 0 0 0
//0 2 0 2