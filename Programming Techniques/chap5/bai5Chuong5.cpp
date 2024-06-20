#include<iostream>
#include<bitset>

using namespace std;

#define  ui unsigned int

ui getbit(ui n,ui k)
{
	return (n >> k) & 1;
}

ui countBit(ui n)
{
	ui cnt = 0;
	for(ui i = 0; i < 32; i++)
	{
		if(getbit(n,i)) ++cnt;	
	}		
	return cnt;
}

int main()
{
	ui a ;
	cin >> a ;
	cout << countBit(a);
}