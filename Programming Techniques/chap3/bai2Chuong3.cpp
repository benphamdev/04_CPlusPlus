#include<iostream>

using namespace std;

long long sum(int n)
{
	long long ans = 0;
	int i = 1;
	while(n>0)
	{
		ans +=  i * n;
		i++;
		n--;
	}
	return ans;
}

int main(){
	int n;cin>>n;
	cout<<sum(n);
}
