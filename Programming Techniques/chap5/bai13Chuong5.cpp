#include<iostream>
#include<algorithm>

using namespace std;

int n1, k1, a1[100], b[100], isFinal1;
 
void initial1() 
{
	for(int i = 1; i <= n1; i++)
		cin >> b[i];
	for(int i = 1; i<= k1; i++)
		a1[i] = i;
}
 
void generate1() 
{
	int i = k1;
	while(i>=1 && a1[i] == n1-k1+i) 
	{
		i--;
	}
	if(i==0) 
	{
		isFinal1 = 0;
	} 
	else 
	{
		a1[i] ++;
		for(int j = i + 1 ; j <= k1 ; j++ ) 
		{
			a1[j] = a1[j-1] + 1;
		}
	}
}

void ex1() 
{
	cin >> n1 >> k1;
	isFinal1 = 1;
	initial1();
	while(isFinal1) 
	{
		for(int i = 1; i <= k1; i++) cout << b[a1[i]] << " ";
		cout<<endl;
		generate1();
	}
}
 
int main()
{
	ex1();
}