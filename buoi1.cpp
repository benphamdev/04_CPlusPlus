#include<iostream>
#include<fstream>
#include<sstream>
#include<iomanip>
#include<numeric>
#include<algorithm>
#include<iterator>
#include<climits>
#include<cmath>
#include<cstring>
#include<ctime>
#include<bitset>
#include<deque>
#include<complex>
#include<functional>
#include<list>
#include<map>
#include<queue>
#include<set>
#include<stack>
#include<string>
#include<utility>
#include<vector>

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
typedef pair<int,int> pi;
typedef vector <int> vi;

const int MOD = (int) 1e9+7;
const int INF = (int) 1e9+2804;
inline ll gcd(ll a,ll b){ll r;while(b){r=a%b;a=b;b=r;}return a;}
inline ll lcm(ll a,ll b){return a*b/gcd(a,b);}

void gotoFUTURE();

bool nt(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0) return false;
    }
    return n > 1;
}


void ex1(){

}
void ex(){
    int n, k; cin >> n >> k;
    int cnt = 0;
    int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    // liệt kê , đếm : số nguyên tố, sô thuận nghịch

    // for(int i = 0; i < n; i++) {
    //     if(nt(a[i])) cout << a[i] << " ";
    // }

    // cout << "\n";

    // for(int x : a) cout << x << " ";

    int res = INT_MAX;
    for(int i = 0; i < n; i++){
        // a[i]
        for(int j = i + 1; j < n; j++){
            // a[j]
            if(abs(a[i] - a[j]) < res){
                res = abs(a[i] - a[j]);
            }
            // cout << a[i] << " " << a[j] << endl;
        }
    }

    cout << res << "\n";
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

    // phần 1 : ôn lại c++ và stl, các kỹ thuật giải bài 
    // mảng, vector, xâu, set, map, pair, 
    // hai con trỏ , sliding window , mảng cộng dồn , mảng  hiệu 
    // đệ quy , lý thuyết tổ hợp, số
    
    // phần 2 : thuật toán 
    // - thuật toán sắp xếp tìm kiếm]
    // - giải thuật sinh, 
    // - quay lui , nhánh cận
    // - tham lam 
    // - chia để trị 
    // - quy hoạch động 
   
    // phần 3 : cấu trúc dữ liệu 
    // - đồ thị và các thuật toán trên đồ thị 
    // - ngăn xếp 
    // - hàng đợi 
    // - cây nhị phân 
    // - segment tree , fenwick

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
