#include<bits/stdc++.h>
using namespace std;

string mul(string a,string b) 
{
	int n1 = a.size(),  n2 = b.size();
	reverse(begin(a) , end(a));
	reverse(begin(b) , end(b));
	vector<int> ans(n1+n2 , 0);
	for(int i = 0; i < n1; i++) 
	{
		int rem = 0;
		int j = 0;
		for(j; j < n2; j++) 
		{
			int tmp = (a[i]-'0') * (b[j]-'0') + rem + ans[i+j];
			ans[i + j] = tmp % 10;
			rem = tmp/10;
		}
		if(rem > 0)
			ans[i+j] += rem;
	}
	while(ans.back() == 0 && ans.size() > 1) 
		ans.pop_back();
	reverse(begin(ans),end(ans));
	string res = "";
	for(int i=0; i < ans.size(); i++) 
		res.push_back((ans[i]+'0'));
	return res;
}

int main() 
{
	string a,b;
	cin>>a>>b;
	cout<<mul(a,b);
}