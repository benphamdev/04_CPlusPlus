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
	private :
		string ma, name, ns, address;
	public:
		person(){};
		person(string ma, string name, string ns, string address){
			this->ma = ma;
			this->name = name;
			this->ns = ns;
			this->address = address;
		}
		void chuanhoa(){
			if(ns[2] != '/') ns = "0" + ns;
			if(ns[5] != '/') ns.insert(3, "0");
			stringstream ss(name);
			string token, res = "";
			while(ss >> token) {
				res += toupper(token[0]);
				FOR(i, 1, (int)(sz(token))) res += tolower(token[i]);
				res += " ";
			}
			res.erase(sz(res) - 1);
			name = res;
		}
		void toString(){
			cout << ma << " " << name << " " << ns << " " << address << " ";
		}
};

class sv : public person{
	private:
		string lop;
		double gpa;
	public:
		sv() : person() {}
		sv(string ma, string name, string ns, string address, string lop, double gpa) : person(ma, name, ns, address){
			this->lop = lop;
			this->gpa = gpa;
		}
		void toString(){
			person::toString();
			cout << lop << " " << fixed << setprecision(2) << gpa << "\n";
		}
};

class gv : public person{
	private:
		string khoa;
		ll luong;
	public:
		gv() : person() {}	
		gv(string ma, string name, string ns, string address, string khoa, ll luong) : person(ma, name, ns, address) {
			this->khoa = khoa;
			this->luong = luong;
		}
		void toString(){
			person::toString();
			cout << khoa << " " << luong << "\n";
		}
};
void ex(string HOC = "A year begins in the spring. A young life begins.") {
	int TC;	TC = 1;
	while (TC --> 0) {
		int n; cin >> n;
		vector<gv> a;
		vector<sv> b;
		for(int i = 0; i < n; i++){
			string ma, name, ns, address;
			cin >> ma;	cin.ignore();
			getline(cin, name);
			cin >> ns; cin.ignore();
			getline(cin, address);
			if(ma.substr(0, 2) == "GV"){
				string khoa; getline(cin, khoa);
				ll luong; cin >> luong;
				gv tmp(ma, name, ns, address, khoa, luong);
				tmp.chuanhoa();
				a.pb(tmp);
			}
			else{
				string lop; cin >> lop;
				double gpa; cin >> gpa;
				sv k(ma, name, ns, address, lop, gpa);
				k.chuanhoa();
				b.push_back(k);
			}
		}
		
		cout << "DANH SACH GIAO VIEN :\n";
		for(auto it : a)
			it.toString();
			
		cout << "DANH SACH SINH VIEN :\n";
		for(auto it : b)
			it.toString();	
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
	ios_base::sync_with_stdio(false);	cin.tie(nullptr);	cout.tie(nullptr);
	#ifndef MOTIVATION
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ex();
}
