#include<bits/stdc++.h>
using namespace std;

bool Prime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
    	if(n%i==0)
    		return false;
    return n>1;		
}
int MinPrime(vector<int> a,int n)
{
	if(n==1)
	{
		if(Prime(a[0]))	
			return a[0];
		else
			return -1;	
	}
	if(Prime(a[n-1]))
		return a[n-1];	
	else
		return MinPrime(a,n-1);
}    

int main() {
	int n;cin>>n;
    vector<int> v (n);
    for(int i=0;i<n;i++)
    	cin>>v[i];
    sort(v.begin(),v.end(),greater<int>());
    int smallestPrime = MinPrime(v,n);
    if (smallestPrime == -1)
        cout << "Khong tim thay so nguyen to trong mang";
    else 
    	cout << "So nguyen to nho nhat trong mang la: " << smallestPrime;
}