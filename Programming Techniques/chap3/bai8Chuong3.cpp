#include<iostream>

using namespace std;

int sum(double A){
	double sum = 0;
	for(int i=1;;i++){
		sum += (double)1/i;
		if(sum>A)
			return i;
	}
}

int main(){
	double A;cin>>A;
	cout<<sum(A);
}
