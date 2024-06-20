#include<iostream>

using namespace std;

int n , a[100] , ok ;

void ktao()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
		a[i] = 0;	
}
void sinh()
{
	int i = n;
	while(i >= 1 && a[i])
		a[i--] = 0;
	if(!i)
		ok = 0;
	else 
		a[i] = 1;	
}

bool check()
{
	int cnt = 0;
	for(int i = 1; i < n; i++)
	{
		if(!a[i] && a[i + 1])
			cnt++;
		if(cnt > 2)
			return false;	
	}
	return cnt == 2;
}
int main()
{
	ktao();
	ok = 1;
	while(ok)
	{
		if(check())
		{
			for(int i = 1; i <= n; i++)
				cout << a[i];
			cout << "\n";	
		}
		sinh();	
	}
}