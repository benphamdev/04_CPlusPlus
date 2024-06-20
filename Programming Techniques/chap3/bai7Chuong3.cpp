#include<iostream>

using namespace std;

long long fb(int n)
{
	if(n<=1)
		return n;
	return fb(n-2)+fb(n-1);	
}
int main(){
	int n;cin>>n;
	cout<<fb(n);
}
