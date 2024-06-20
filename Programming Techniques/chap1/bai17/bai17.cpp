#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;

void swap(int &a,int &b)
{
	int tmp=a;
	a=b;
	b=tmp;
}
void sort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{
		for(int j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(a[j],a[j+1]);
			}
		}
	}
}
void filewrite()
{
	fstream fout("SONGUYEN.INP",ios::out|ios::binary);
	if(fout)
	{
		int A[10];
		int n = 3;
		srand((unsigned)time(NULL));
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<10;j++)
			{
				A[j] = rand()%100;
				cout<<A[j]<<' ';
			}
			fout.write(reinterpret_cast<char *> (&A),sizeof(A));
			fout.write("\n",1);
			cout<<'\n';
		}
		fout.close();
	}
}
void fileread()
{
	fstream fin("SONGUYEN.INP",ios::in|ios::binary);
	fstream fout("SONGUYEN.OUT",ios::out|ios::binary);
	if(!fin)
	{
		cout<<"cannot open file";
		exit(0);
	}
	cout<<"==============================\n";
	int n = 0;
	int a[10000];
	while(1)
	{
		int b[10];
		fin.read(reinterpret_cast <char *>(&b),sizeof(b));
		char c;
		fin.read(reinterpret_cast<char *>(&c),sizeof(c));
		if(fin.eof())
		{
			break;
		}
		for(int i=0;i<10;i++)
		{
			a[n++] = b[i];
		}
	}
	fin.close();
	for(int i=0;i<n;i++)
	{	
		cout<<a[i]<<" ";
		if((i+1)%10==0)
		{
			cout<<'\n';
		}
	}
	cout<<"==============================\n";
	int m=0;
	if(fout)
	{	
		int c[10];
		for(int i=0;i<(n/10);i++)
		{
			for(int j=0;j<10;j++)
			{
				c[j] = a[m++];
			}
			sort(c,10);
			for(int k=0;k<10;k++)
			{
				cout<<c[k]<<' ';
			}
			fout.write(reinterpret_cast <char*> (&c),sizeof(c));
			fout.write("\n",1);
			cout<<'\n';
		}
		fout.close();
	}
}
int main(){
	filewrite();
	fileread();
}
