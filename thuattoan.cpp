#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPrime(ll n){
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return n > 1;
}

ll gcd (ll a, ll b) {
    return b ? gcd (b, a % b) : a;
}

ll gcdExtended(ll a, ll b, ll *x, ll *y) { 
    if (a == 0) { 
        *x = 0; 
        *y = 1; 
        return b; 
    } 
 
    ll x1, y1; 
    int gcd = gcdExtended(b%a, a, &x1, &y1); 
 
    *x = y1 - (b/a) * x1; 
    *y = x1; 
 
    return gcd; 
} 
 
tuple<int, int, int> extended_gcd(int a, int b){
    if (a == 0) {
        return make_tuple(b, 0, 1);
    }
 
    int gcd, x, y;
 
    // unpack tuple returned by function into variables
    tie(gcd, x, y) = extended_gcd(b % a, a);
 
    return make_tuple(gcd, (y - (b/a) * x), x);
} 
 
void modInverse(ll A, ll M){
    ll x, y;
    ll g = gcdExtended(A, M, &x, &y);
    if (g != 1)
        cout << "Inverse doesn't exist";
    else {
 
        // m is added to handle negative x
        int res = (x % M + M) % M;
        cout << "Modular multiplicative inverse is " << res;
    }
} 

int main(){
    ll a = 47, b = 2356 * 2550, x, y;
    // so nguyen to
   cout << a << " " << (isPrime(a) ? "la so nguyen to":"khong phai la so nguyen to") << "\n";
  
    // kiem tra nguyen to cung nhau
   cout << "(" <<a << " " << b << ") " << 
   (gcd(a, b) == 1 ? "nguyen to cung nhau" : "khong nguyen to cung nhau") 
   << "\n";
    
    // extend eclidean
    tuple<int, int, int> t = extended_gcd(a, b);
 
    ll gcd = get<0>(t);
     x = get<1>(t);
     y = get<2>(t);
 
    cout << "The GCD is " << gcd << endl;
    cout << "x = " << x << " y = " << y << endl;
    cout << a << "*" << x << " + " << b << "*" << y << " = " << gcd << endl;
 
    ll g = gcdExtended(a, b, &x, &y); 
    cout << "GCD(" << a << ", " << b 
         << ") = " << g << endl;
    
    // modulo inverse     
    modInverse(a, b);
}