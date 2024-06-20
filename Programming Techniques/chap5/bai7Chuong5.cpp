#include<bits/stdc++.h>

using namespace std;

int F[1000001];

void sieve()
{
	fill(F,F+1000002,1);
	F[0] = F[1] = 0;
	for(int i = 2; i <= 1000; i++)
		if(F[i])
			for(int j = i*i; j <= 1000000; j += i)
				F[j] = 0;		
}

int main()
{
	int n;
	cin >> n;
	sieve();
	for(int i = 2; i <= n; i++)
		if(F[i])
			cout << i << " ";		
}
