#include<bits/stdc++.h>

using namespace std;

int chuyen10sang2(int n)
{
	if(n == 0)
		return n;
	chuyen10sang2(n/2);	
	cout << n % 2;
}

int main()
{
	int n; cin >> n;
	for(int i = 1; i <= n; i++)
	{
		chuyen10sang2(i);
		cout << "\n";
	}
}
