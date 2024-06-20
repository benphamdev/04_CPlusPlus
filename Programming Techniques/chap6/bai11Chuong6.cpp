#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;
using  ll = long long;
const int sz = 100;

int n;
int A[sz];

void Dp()
{
	cin >> n;
	vector<vector<int>> L(n);
	for(int i = 0; i < n; i++)
	{
		cin >> A[i];
	} 
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < i; j++)
		{
			if(A[i] >= A[j] && L[i].size() < L[j].size() + 1)
			{
				L[i] = L[j];
			}
		}
		L[i].push_back(A[i]);
	}
	vector<int> best = L[0];
	for(auto x : L)
	{
		if(x.size() > best.size())
		{
			best = x;
		}
	}
	cout << "do dai day tang : " <<  best.size() << '\n';
	for(int x : best)
	{
		cout << x << " ";
	}
}

int main()
{
	Dp();
}
