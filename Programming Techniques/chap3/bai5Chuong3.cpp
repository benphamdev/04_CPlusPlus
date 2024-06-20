#include<iostream>
#include<iomanip>

using namespace std;

double tong(int n){
	double res = 1;
	long long tmp = 1;
	for(int i=1;i<=n;i++){
		tmp *= 1ll*i;
		res += 1.00/tmp;
	}
	return res;
}
int main(){
	int n;cin>>n;
	cout<<fixed<<setprecision(2)<<tong(n);
}
