#include<bits/stdc++.h>
using namespace std;

long long sum(int n){
    long long res = 0 , tmp = 1;
    for(int i=1;i<=n;i++){
        tmp *= i;
        res += tmp;
    }
    return res;
}
int main(){
    int n;cin>>n;
    cout<<sum(n);
}