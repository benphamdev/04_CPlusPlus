#include<iostream>
#include<bitset>

using namespace std;

int setBit(int n ,int k)
{
	return (n | (0x1 << k));
}

int clearBit(int n , int k)
{
	return (n & (~ (1 << k)));
}

int getBit(int n ,int k)
{
	return (n >> k) & 1;
}

int main()
{
	int a , k;
	cin >> a >> k;
	
	bitset<32> e(a);
	cout << e << "\n";

	bitset<32> c(setBit(a,k));
	cout << c << "\n"; 
	
	bitset<32> d(clearBit(a,k));
	cout << d << "\n";
	
	bitset<32> z(getBit(a,k));
	cout << z << "\n";
}