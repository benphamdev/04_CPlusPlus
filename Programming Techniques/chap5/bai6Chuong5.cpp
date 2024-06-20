#include<iostream>

using namespace std;

#define ll long long

ll F[1000001], n;

void  init() 
{
	F[0] = 0;
	F[1] = 1;
	for(int i = 2; i <= 100000; i++) 
	{
		if(i&1)
			F[i] = F[(i-1)/2] + F[(i-1)/2+1];
		else
			F[i] = F[i/2];
	}
}

int main() 
{
	ll n;
	cin >> n;
	init();
	cout << F[n];
}