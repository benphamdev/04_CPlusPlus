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

int n, m, a[sz][sz], ck = 0, ck1 = 0;
vector<pi> cssch, cssnh;
vi vong, dinhtreo, dinhcolap;

void inp(fstream &ir) {
	ir >> n >> m;
	FOR(i, 0, n)//n la so dinh
	FOR(j, 0, m)// m la so canh
	ir >> a[i][j];
}
bool check() {//check canh song song cung huong
	int ans = 0;
	FOR(i, 0, m) {
		int idx1 = -1, idx2 = -1, ok = 0;
		FOR(j, 0, n) {
			FOR(k, j + 1, n) {
				if(a[j][i] == 1 && a[k][i] == -1) {
					idx1 = j;
					idx2 = k;
					ok = 1;
					break;
				}
			}
			if(ok) {
				break;
			}
		}
		FOR(l, i + 1, m) {
			if(a[idx1][l] && a[idx2][l] == -1) {
				cssch.pb({idx1,idx2});
				ans = 1;
			}

		}
	}
	return ans == 1;
}

bool check2() {//check canh song song nguoc huong
	int ans = 0;
	FOR(i, 0, m) {
		int idx1 = -1, idx2 = -1, ok = 0;
		FOR(j, 0, n) {
			FOR(k, j + 1, n) {
				if((a[j][i] == -1 && a[k][i] == 1) || (a[j][i] == 1 && a[k][i] == -1)) {
					idx1 = j;
					idx2 = k;
					ok = 1;
					break;
				}
				else if()
			}
			if(ok) {
				break;
			}
		}
		FOR(l, i + 1, m) {
			if(a[idx1][l] == 1 && a[idx2][l] == -1 && a[idx1][i] == -1) {
				cssnh.pb({idx1,idx2});
				ans = 1;
			}
			else if(a[idx1][l] == -1 && a[idx2][l] == 1 && a[idx1][i] == 1){
				cssnh.pb({idx1,idx2});
				ans = 1;
			}
		}
	}
	return ans == 1;
}
bool check1() {//check xem co vong khong
	int ok = 0;
	FOR(i, 0, m) {
		int cnt = 0 ;
		FOR(j, 0, n) {
			if(a[j][i]) cnt++;
		}
		if(cnt == 1) {
			FOR(j, 0, n) {
				if(a[j][i]) {
					vong.pb(j);
					break;
				}
			}
			ok = 1;
		}
	}
	return ok == 1;
}
void solve() {
	FOR(i, 0, n ) {
		int cnt = 0, cnt1 = 0;
		FOR(j, 0, m ) {
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
void ex(fstream &ow) {
	if(check()) {
		ow << "canh song song cung huong: \n";
		for(pi it : cssch)
			ow << it.fi << " " << it.se << "\n";
	} else ow << "ko co canh //\n";
	if(check2()) {
		ow << "canh song song nguoc huong: \n";
		for(pi it : cssnh)
			ow << it.fi << " " << it.se << "\n";
	} else ow << "ko co canh //\n";
	if(check1()) {
		ow << "vong tai dinh : \n";
		for(int x : vong)
			ow << x << " ";
		ow << " \n";
	} else ow << "ko co vong \n";
//	if(sz(dinhtreo) != 0) {
//		ow << "dinh treo :\n";
//		for(int x : dinhtreo)
//			ow << x << " ";
//		ow << " \n";
//	} else ow << "ko co dinh treo \n";
//	if(sz(dinhcolap) == 0) {
//		ow << "ko co dinh co lap\n";
//	} else {
//		ow << "dinh co lap :\n";
//		for(int x : dinhcolap)
//			ow << x << " ";
//		ow << " \n";
//	}
}
int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	fstream ir("input.txt", ios :: in);
	fstream ow("output.txt", ios :: out);
	inp(ir);
//	solve();
	ex(ow);
	ir.close();
	ow.close();
}
