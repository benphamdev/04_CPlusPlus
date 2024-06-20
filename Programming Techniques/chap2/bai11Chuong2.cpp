#include<iostream>
#include<algorithm>

using namespace std;

void reverse(int a[],int n) 
{
	int l=0,r=n-1;
	while(l<r)
	 {
		int tmp = a[l];
		a[l] = a[r];
		a[r] = tmp;
		++l;--r;
	}
}

void tinhtong(string a,string b)
 {

	if(a.size()<b.size())
	{
		swap(a,b);
	}
	int len1=a.size();
	int len2=b.size();
	int X[len1]	, Y[len1] , Z[len1+1];
	for(int i=0; i<len1; i++) X[i]=a[i]-'0';
	for(int i=0; i<len2; i++) Y[i]=b[i]-'0';
	reverse(X,len1);
	reverse(Y,len2);
	for(int i=len2;i<len1;i++) Y[i] = 0;
	int nho = 0 , n=0 ;
	for(int i=0;i<len1;i++)
	{
		int tmp = X[i] + Y[i] +nho;
		Z[n++] = tmp%10;
		nho = tmp/10;
	}
	if(nho) Z[n++] = nho;
	for(int i=n-1;i>=0;i--)
	{
		cout<<Z[i];
	}
}

void tinhhieu(string a,string b)
{
	int flag = 1;
	if(a.size()>b.size() || a.size()==b.size() && a>b)	
		flag = 0;
	else 
		swap(a,b);
		
	int len1=a.size();
	int len2=b.size();
	int X[len1]	, Y[len1] , Z[len1];
	for(int i=0; i<len1; i++)   X[i]=a[i]-'0';
	for(int i=0; i<len2; i++)   Y[i]=b[i]-'0';
	reverse(X,len1) ; 
	reverse(Y,len2);
	for(int i=len2;i<len1;i++) Y[i] = 0;
	int nho = 0 , n=0 ;
	for(int i=0;i<len1;i++)
	{
		int tmp = X[i] - Y[i] - nho;
		if(tmp<0)
		{
			nho = 1;
			tmp +=10;
		}
		else nho=0;
		Z[n++] = tmp;
	}
	int ok=0;
	for(int i=n-1;i>=0;i--)
	{
		if(!ok && Z[i])
			ok=1;
		if(ok&&flag)
		{
			cout<<'-';
			flag = 0;
		} 
		if(ok)
			cout<<Z[i];	
	}
	if(!ok) cout<<0;
}

void ex()
{
	string a,b;
	cout<<"nhap so a :";cin>>a;
	cout<<"nhap so b :";cin>>b;
	cout<<"tong cua 2 so : ";tinhtong(a,b);cout<<'\n';
	cout<<"hieu cua 2 so : ";tinhhieu(a,b);
}
int main() 
{	
	ex();
}
