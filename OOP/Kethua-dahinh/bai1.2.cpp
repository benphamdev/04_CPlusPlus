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

void gotoFUTURE();

//A WINNER WHO NEVER GIVE UP !!!
//NO PAIN, NO GAIN !!!

class person{
	private:
		string name, address, ns;
	public:
		person(string name, string address, string ns){
			this->name = name;
			this->address = address;
			this->ns = ns;
		}
		void toString(){
			cout << this->name << " " << this->ns << " " << this->address << ' ';
		}
		void chuanhoa(){
			if(ns[2] != '/') ns = "0" + ns;
			if(ns[5] != '/') ns.insert(3, "0");
			stringstream ss(name);
			string temp, res = "";
			while(ss >> temp){
				res += toupper(temp[0]);
				FOR(i, 1, (int)sz(temp)) res += tolower(temp[i]);
				res += " ";
			}
			res.pop_back();
			name = res;
		}
};

class student : public person{
	private:
		string ma, lop;
		double gpa;
	public:
		student(string ma, string name, string address, string ns, string lop, double gpa) : person(name, address, ns){
			this->ma = ma;
			this->lop = lop;
			this->gpa = gpa;
		}
		void toString(){
			cout << ma << " ";
			person::toString();
			cout << this->lop << " " << fixed << setprecision(2) << gpa << "\n";
		}
};

void ex(string HOC = "A year begins in the spring. A young life begins.") {
	int TC;	 TC = 1;
	while (TC --> 0) {
		int n; cin >> n;
		vector<student> v;
		FOR(i, 1, n + 1){
			string name, ns, address, lop;
			double gpa;
			cin.ignore();
			getline(cin, name);
			string s; getline(cin, s);
			int pos = 0;
			while(!isalpha(s[pos])) pos++;
			ns = s.substr(0, pos);
			address = s.substr(pos);
			cin >> lop >> gpa;
			string ma = to_string(i);
			while(sz(ma) < 4) ma = "0" + ma;
			student tmp(ma, name, address, ns, lop, gpa);
			tmp.chuanhoa();
			v.push_back(tmp);			
		}
		for (auto it : v){
			it.toString();
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
	ios_base::sync_with_stdio(false);	cin.tie(nullptr);	cout.tie(nullptr);
	#ifndef MOTIVATION
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	ex();
}
