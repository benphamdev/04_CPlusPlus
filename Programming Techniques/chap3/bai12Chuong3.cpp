#include<bits/stdc++.h>

using namespace std;
#define ll long long

string tong(string a,string b)
{
	int n1 = a.size();
	int n2 = b.size();
	reverse(a.begin(),a.end());
	reverse(b.begin(),b.end());
	b = b+string(n1-n2,'0');
	string ans="";
	int rem = 0;
	for(int i=0;i<n1;i++)
	{
		int tmp = (a[i]-'0') + (b[i]-'0') + rem;
		ans.push_back(tmp%10 + '0');
		rem = tmp/10;
	}
	if(rem) ans.push_back(rem+'0');
	reverse(ans.begin(),ans.end());
	return ans;
}
string sum(ll n)
{
	string ans="0", tmp="0" ;
	for(int i=1;i<=n;i++)
	{
		string s = to_string(i);
		tmp = tong(tmp,s);
		ans = tong(ans,tmp);
	}
	return ans;
}
int main(){
	ios_base::sync_with_stdio(0);cin.tie(0);
	ll n;cin>>n;
	cout<<sum(n);
//	string a,b;cin>>a>>b;
//	cout<<tong(a,b);
}
