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

void inp(fstream &ir) {
	ir >> n;
	FOR(i, 0, n)
	FOR(j, 0, n)
	ir >> a[i][j];
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
	fstream ow("output.txt", ios::out);
	if(ck) {
		ow << "Canh song song : \n";
		for(pi it : ss)
			ow << it.fi << " " << it.se << "\n";
	} else ow << "Khong co canh song song \n";
	if(ck1) {
		ow << "Vong tai dinh : \n";
		for(int x : vong)
			ow << x << " ";
		ow << " \n";
	} else ow << "Khong co vong \n";
	if(sz(dinhtreo) != 0) {
		ow << "Dinh treo :\n";
		for(int x : dinhtreo) 
			ow << x << " ";
		ow << " \n";
	} else ow << "Khong co dinh treo \n";
	if(sz(dinhcolap) == 0) {
		ow << "Khong co dinh co lap\n";
	} else {
		ow << "Dinh co lap :\n";
		for(int x : dinhcolap)
			ow << x << " ";
		ow << " \n";
	}
}
int main() {
	ios_base::sync_with_stdio(false); cin.tie(nullptr);
	fstream ir("input.txt", ios::in);
	inp(ir);
	solve();
	ex();
}
