#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

void inp(int A[],int n)
{
	for(int i = 0; i < n; i++) cin>>A[i];
}
ll pow(int a , int b)
{
	ll res = 1;
	while(b)
	{
		if(b%2==1) res *= a;
		a *= a;
		b /= 2;	
	}
	return res;
}
bool check(int n)
{
	ll res = 0;
	int temp = n, A[100], i = 0 ,cnt = 0;
	while(n)
	{
		A[i++] = n % 10;
		n /= 10;
		cnt++;
	}
	for(int j = 0 ; j < i ; j++)
	{
		res += pow(A[j],cnt);
	}
	return res == temp;
}
ll sumOfElements(int A[],int n)
{
	ll sum = 0;
	for(int i = 0 ; i < n; i++)
	{
		if(check(A[i]))
			sum += A[i];
	}
	return sum;
}
int main()
{
	int n;cin>>n;
	int A[n];
	inp(A,n);
	cout<<sumOfElements(A,n);
}
