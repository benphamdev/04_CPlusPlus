#include<bits/stdc++.h>

using namespace std;

#define ms(s,n) memset(s,n,sizeof(s))
#define all(a) a.begin(),a.end()
#define present(t,x) (t.find(x))!=t.end())
#define sz(a) int((a).size())
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define pb push_back
#define pf push_front
#define fi first
#define se second
#define mp make_pair

typedef pair<int,int> pi;
typedef vector <int> vi;

const int sz = 1001;

struct edge{
	int x, y, w;
	bool operator < (const edge other){
		return w < other.w;
	}
};

int n, m;
int parent[sz], s[sz];
vector<edge> canh;

void makeSet(){
	FOR(i, 1, n + 1){
		parent[i] = i;
		s[i] = 1;
	}
}

int find(int v){
	if(v == parent[v]) return v;
	return parent[v] = find(parent[v]);
}

bool Union(int a, int b){
	a = find(a); b = find(b);
	if(a == b) return false;
	if(s[a] < s[b]) swap(a, b);
	parent[b] = a;
	s[a] += s[b];
	return true;
}

void inp(fstream &ir){
	ir >> n >> m;
	FOR(i, 0, m){
		int x, y, w; ir >> x >> y >> w;
		canh.pb({x,y,w});
	}
}

void Kruskal(fstream &ow){
	vector<edge> mst;
	int d = 0;
	sort(all(canh));
//	for(auto it : canh){
//		ow << it.x << " " << it.y  << " " << it.w << " \n";
//	}
	FOR(i, 0, m){
		if(sz(mst) == n - 1) break;
		edge e = canh[i];
		if(Union(e.x,e.y)){
			mst.pb(e);
			d += e.w;
		}
	}
	if(sz(mst) != n - 1){
		ow << "do thi khong lien thong\n";
	}
	else{
		ow << "Length Minimum spanning tree : " << d << "\n" << "{ "; 
		for(auto it : mst){
			ow  << "(" << it.x << ", " << it.y << ", " << it.w <<")" << " ";
			// overloading operator moi su dung duoc so sanh
		}
		ow << "}";
	}
}

int main() {
	ios_base::sync_with_stdio(false);cin.tie(nullptr);
	fstream ir("input.txt", ios::in);
	fstream ow("output.txt", ios::out );
	inp(ir);
	makeSet();
	Kruskal(ow);
	ir.close();
	ow.close();
}




