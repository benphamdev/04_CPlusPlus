#include <bits/stdc++.h>

using namespace std;
using  ll = long long;

#define ms(s, n) memset(s, n, sizeof(s))
#define all(a) a.begin(), a.end()
#define present(t, x) (t.find(x) != t.end())
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
typedef pair <ll, ll> pll;
typedef vector <int> vi;
typedef vector <ll, ll> vll;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a*b/gcd(a,b);}

void gotoFUTURE();

// A WINNER IS A DREAMER WHO NEVER GIVES UP !!!
// NO PAIN, NO GAIN !!!

class person{
    protected:
        string name, ns, address;
    public:
        person(){}
        person(string name, string ns, string address){
            this->name = name;
            this->ns = ns;
            this->address = address;
        }
        void chuanHoa(){
            if(ns[2] != '/') ns = "0" + ns;
            if(ns[5] != '/') ns.insert(3, "0");
            stringstream ss(name);
            string tmp, res = "";
            while(ss >> tmp){
                res += toupper(tmp[0]);
                FOR(i, 1 , (int)(sz(tmp))) res += tolower(tmp[i]);
                res += " ";
            }
            res.pop_back();
            name = res;
        }
        void toString(){
            cout << name << " " << ns << " " << address << " ";
        }
};
vector<string> solve(string s){
    stringstream ss(s);
    string token;
    vector<string> v;
    while(ss >> token){
        v.push_back(token);
    }
    return v;
}
class student : public person{
    private:
        string ma, lop;
        double gpa;
    public:
        student() : person(){};
        student(string ma, string name, string ns, string address, string lop, double gpa) : person(name, ns, address){
            this->ma = ma;
            this->lop = lop;
            this->gpa = gpa;
        }
        void toString(){
            cout << ma << " ";
            person::toString();
            cout << lop << " " << fixed << setprecision(2) << gpa << "\n";
        }
        friend bool cmp (student a, student b);
};
bool cmp (student a, student b){
    vector<string> s = solve(a.name), s1 = solve(b.name) ;
    if(s.back() != s1.back()) 
    	return s.back() < s1.back();
    if(s[0] != s1[0]) 	
		return s[0] < s1[0];
	string res = "", res1 = "";
	for(int i = 1; i < s.size() - 1; i++) res += s[i];
	for(int i = 1; i < s1.size() - 1; i++) res1 += s1[i];
	return res < res1;
}
void ex() {
    int TC;  TC = 1;
    while (TC --) {
        int n; cin >> n;
        vector<student> v;
        FOR(i, 1, n + 1){
            string name, ns, address, lop; double gpa;
            cin.ignore();
            getline(cin, name);
            cin >> ns;
            cin.ignore();
            getline(cin, address);
            cin >> lop >> gpa;
            string ma = to_string(i);
            while(sz(ma) < 4) ma = "0" + ma;
            student tmp(ma, name, ns, address, lop, gpa);
            tmp.chuanHoa();
            v.push_back(tmp);
        }
        stable_sort(v.begin(), v.end(), cmp);
        for(auto it : v)
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

void gotoFUTURE(){
    ios_base::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
    #ifndef MOTIVATION
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ex();
}