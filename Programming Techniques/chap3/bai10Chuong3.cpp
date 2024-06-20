#include<iostream>

using namespace std;

void dem(string s)
{
	int cnt1 =0,cnt2= 0, cnt3= 0, cnt4 =0;
	for(int i=0;i<s.size();i++)
	{
		if(islower(s[i])) ++cnt1;
		else if(isupper(s[i])) ++cnt2;
		else if(isdigit(s[i])) ++cnt3;
		else ++cnt4;
	}
	cout<<cnt1<<" "<<cnt2<<' '<<cnt3<<' '<<cnt4;
}
int main(){
	string s;cin>>s;
	dem(s);
}
