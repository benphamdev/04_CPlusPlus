#include<iostream>
#include<algorithm>

using namespace std;

int n2, a2[100], b[100], ok;
 
void khoitao() 
{
	for(int i=1; i<=n2; i++)
	{
		cin >> b[i];
		a2[i] = i;
	} 
}
 
void sinh() 
{
	int i = n2 - 1;
	while(i>=1 && a2[i]>a2[i+1]) --i;
	if(i == 0) 
	{
		ok = 0;
	} 
	else 
	{
		int j = n2;
		while(a2[i] > a2[j]) --j;
		swap(a2[i], a2[j]);
		int l = i+1, r = n2; 
		reverse(a2 + i + 1, a2 + n2 + 1);
	}
}
 
void ex2() 
{
	cin>>n2;
	ok = 1;
	khoitao();
	while(ok) 
	{
		for(int i=1; i <= n2; i++) 
		{
			cout << b[a2[i]] << " ";
		}
		cout<<"\n";
		sinh();
	}
}

int main()
{
	ex2();
}