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

typedef unsigned long long ull;
typedef long double ld;
typedef pair<int,int> pi;
typedef vector <int> vi;
const int MOD =(int) 1e9+7;
const int INF=(int) 1e9+2804;

// ma tran ke
// danh sach canh
// danh sach ke

// danh sach ke -> ma tran ke
const int s = 1001;

int n;
int a[s][s];
vi adj[s];
vector<pi> edge;
int main() {
	cin >> n;cin.ignore();
	FOR(i, 1, n + 1) {
		string s , tmp;
		getline(cin, s);
		stringstream ss(s);
		while(ss >> tmp) {
			if(stoi(tmp) > i){
				edge.pb({i , stoi(tmp)});
			}
		}
	}
	for(auto it : edge){
		cout << it.first << " " << it.second << "\n";
	}
}
//5
//0 1 1 1 0
//1 0 1 1 1
//1 1 0 1 1
//1 1 1 0 1
//0 1 1 1 0

//5 9
//1 2
//1 3
//1 4
//2 3
//2 4
//2 5
//3 4
//3 5
//4 5

//5
//2 3 4
//1 3 4 5
//1 2 4 5
//1 2 3 5
//2 3 4