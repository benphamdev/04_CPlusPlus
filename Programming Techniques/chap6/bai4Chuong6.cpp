#include<bits/stdc++.h>

using namespace std;

const int sz = 1001;
int n;
int A[sz];
bool used[sz + 1];

void inp()
{
	memset(used, false , sizeof(used));
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> A[i];
	}
	for(int i = 0; i < n; i++)
	{
		if(used[A[i]] == false)
		{
			cout << A[i] << " ";
			used[i] = true;
		}
	}
}
int main()
{
	inp();
}
