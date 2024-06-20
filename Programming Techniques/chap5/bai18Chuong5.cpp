#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b) 
{
	if(b == 0) return a;
	return gcd(b, a % b);
}

int n, k, A[100], ok ;

void init() 
{
	n = 10 ; k = 2; ok = 1;
	for(int i = 1; i <= k; i++)
		A[i] = i;
}
void next()
{
	int i = k;
	while(i >= 1 && A[i] == n - k + i)
		i--;
	if(!i) 
		ok = 0;
	else
	{
		A[i]++;
		for(int j = i + 1; j <= k; j++)
			A[j] = A[j - 1] + 1;
	}		
}

typedef struct fraction 
{
	int tu, mau;
	void in() 
	{
		cout << tu << "/" << mau << "\n";
	}
	void rutgon() 
	{
		int uc = gcd(tu, mau);
		tu /= uc;
		mau /= uc;
	}
} ft;

int compareFraction(ft a, ft b)
{
	int Y = a.tu * b.mau - b.tu * a.mau;
	if(!Y)	return 0;
	return Y > 1 ? 1 : -1;	
}

void sortFraction(ft a[], int n)
{
	for(int i = 0; i < n - 1; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			if(compareFraction(a[i] , a[j]) >= 0)
			{
				ft tmp = a[i];
				a[i] = a[j];
				a[j] = tmp;
			}
		}
	}
}

void out(ft a[], int n) 
{
	sortFraction(a,n);
	for(int i = 0; i < n; i++)
	{
		a[i].rutgon();
		a[i].in();
	}
}

int main() 
{
	fraction B[100];
	init();
	int j = 0;
	while(ok)
	{
		for(int i = 1; i <= k; i++)
		{
			B[j].tu = A[1];
			B[j].mau = A[2];
		}
		j++;	
		next();	
	}
	out(B,j);
}
