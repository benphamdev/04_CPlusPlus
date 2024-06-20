#include<bits/stdc++.h>

using namespace std;

string reverse(string &s)
{
	int l = 0, r = s.size() - 1;
	while(l < r)
	{
		char tmp = s[l];
		s[l] = s[r];
		s[r] = tmp;
		l++; r--;
	}
	return s;
}
int main()
{
	string s;
	getline(cin, s);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp)
	{
		reverse(tmp);
		cout << tmp << " ";
	}
}
