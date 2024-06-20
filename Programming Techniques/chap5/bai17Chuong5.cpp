#include<iostream>

using namespace std;

int n , k , a[100] , ok ;

void ktao()
{
	cin >> n >> k ;
	for(int i = 1; i <= k; i++)
		a[i] = 1;
}

void sinh()
{
	int i = k;
	while(i >= 1 && a[i] == n) i--;
	if(!i)
		ok = 0;
	else
	{
		a[i]++;
		for(int j = i + 1; j <= k; j++)
			a[j] = 1;
	}	
}
// điều kiện để cấu hình là chỉnh hợp không lặp
// nếu không có điều kiện là nó là chỉnh hợp lặp
bool check()
{
	for(int i = 1; i <= k; i++)
		for(int j = i + 1; j <= k; j++)
			if(a[i] == a[j])
				return false;
	return true;			
}
int main()
{
	ktao();
	ok = 1;
	int cnt = 0;
	while(ok)
	{
		if(check())
		{
			for(int i = 1; i <= k; i++)
				cout << a[i] << " ";
			cnt++;	
			cout << "\n";
		}
		sinh();
	}
}