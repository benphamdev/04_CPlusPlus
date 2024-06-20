#include<bits/stdc++.h>

using namespace std;

string sum(string a, string b)
{
	if(a.size() < b.size())
		swap(a, b);
	int n1 = a.size(), n2 = b.size();
	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());
	b += string(n1 - n2, '0');
	int rem = 0;
	string ans = "";
	for(int i = 0; i < n1; i++)
	{
		int tmp = (a[i] - '0') + (b[i] - '0') + rem;
		ans += (tmp % 10 + '0');
		rem = tmp / 10;
	}
	if(rem) ans += (rem + '0');
	reverse(ans.begin(), ans.end());
	return ans;
}
string Fb[100001];

void Fibo(int n)
{
	Fb[0] = '0';
	Fb[1] = '1';
	for(int i = 0; i < n; i++)
	{
		if(i >= 2)
		{
			Fb[i] = sum(Fb[i - 2] , Fb[i - 1]);
		}
		cout << Fb[i] << "\n";	
	}	
}
int main()
{
//	int n ; cin >> n;
//	Fibo(n);
	string a, b;cin >> a >> b;
	cout << sum(a, b);
}
