#include<iostream>
#include<string>

using namespace std;

void chuanhoa(string &s)
{
	int n = s.size();
	while(s[0]==' ')
	{
		s.erase(0,1);
	}
	while(s[n-1] == ' ')
	{
		s.erase(n-1,1);
		n--;
	}
	int i = s.find("  ");
	while(i!=string::npos)
	{
		s.replace(i,2," ");
		i = s.find("  ");
	}
	s[0] = toupper(s[0]);
}
void ex()
{
	string s;getline(cin,s);
	chuanhoa(s);
	cout<<s;
}
int main(){
	ex();
}
