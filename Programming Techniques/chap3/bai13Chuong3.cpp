#include<bits/stdc++.h>

using namespace std;

#define s 100
int A[s] , n , cnt = 0;

void swap(int &a , int &b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

void inp()
{
	cin>>n;
	for(int i = 0; i < n; i++) cin>>A[i];
}
void sort()
{
	for(int i = 0; i < n - 1; i++)
	{
		int a = A[n-1];
		int idx = n - 1;
		for(int j = i + 1; j < n; j++)
		{
			if(A[j] <= a)
			{
				a = A[j];
				idx = j;
			}
		}
		if(a < A[i])
		{	
			++cnt;
			swap(A[i],A[idx]);
		}
	}
}
void out()
{
	for(int i = 0; i < n; i++) cout<<A[i]<<" ";
}
int main(){
	inp();
	sort();
	cout<<cnt<<"\n";
	out();
	
}

//5
//1 2 3 3 2 