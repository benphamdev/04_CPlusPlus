#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll sum(char A[])
{
	ll ans = 0;
	for(int i=0;i<strlen(A);i++)
	{
		ll tmp = 0;
		while(isdigit(A[i]))
		{
			tmp = tmp* 10 + (A[i]-'0');
			i++;
		}
		ans += tmp;
		
	}
	return ans;
}
int main(){
	char A[100001];
	cin>>A;
	cout<<sum(A);
}
