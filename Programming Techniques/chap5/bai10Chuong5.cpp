#include<bits/stdc++.h>

using namespace std;

int n, a[100], isFinal;
 
void initial() 
{
	for(int i=1; i<=n; i++) a[i] = 0;
}
 
void generate() 
{
	int i = n;
	while(i>=1 && a[i]==1) 
	{
		a[i] = 0;
		i--;
	}
	if(i==0) 
	{
		isFinal = 0;
	} else 
	{
		a[i] = 1;
	}
}
 
void ex() 
{
	cin >> n;
	initial();
	isFinal = 1;
	while(isFinal) 
	{
		for(int i = 1; i <= n; i++) cout << a[i] << " ";
		cout << "\n";
		generate();
	}
}

int main()
{
	ex();
}
