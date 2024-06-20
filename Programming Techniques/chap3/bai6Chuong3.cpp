#include<iostream>
#include<iomanip>
#include<cmath>

using namespace std;

double tong(int n,int x){
	double res = 1;
	long long tmp = 1;
	for(int i=1;i<=n;i++){
		tmp *= i;
		res += (1.00)*pow(x,i)/tmp;
	}
	return res;
}
int main(){
	int n,x;cin>>x>>n;
	cout<<fixed<<setprecision(2)<<tong(n,x);
}
