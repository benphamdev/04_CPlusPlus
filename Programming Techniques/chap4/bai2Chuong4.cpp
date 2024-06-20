#include<iostream>

using namespace std;
#define size 100
int A[size];
void nhap(int n)
{
	for(int i=0;i<n;i++)
	 	cin>>A[i];
}
int fun(int n)
{
	if(n==1)
		return A[0];
	return A[n-1] + fun(n-1);			
}
int main(){
	int n;cin>>n;
	int A[n];
	nhap(n);
	cout<<fun(n);
}
