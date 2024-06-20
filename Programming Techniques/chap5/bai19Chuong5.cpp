#include<bits/stdc++.h>

using namespace std;

int n, a[100], ok, cnt;

void inp() 
{
	cin >> n;
	a[1] = n;
	cnt = 1;
}

void sinh() 
{
	int i = cnt;
	while(i >= 1 && a[i] == 1) i--;
	if(i == 0) ok = 0;
	else 
	{
		a[i]--;
		int sum = cnt - i + 1;
		int d = sum / a[i] , j = i + 1;
		while(j <= i + d)
		{
			a[j] = a[i];
			j++;
		}
		if(sum % a[i] != 0)
		{
			a[j] = sum % a[i];
			cnt = j;
		}
		else cnt = j - 1;
	}
}
int main() 
{
	inp();
	ok = 1;
	while(ok)
	{
		for(int i = 1; i <= cnt ; i++)
			cout << a[i] << " ";
		cout << "\n";
		sinh();
	}
}

