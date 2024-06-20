#include<bits/stdc++.h>

using namespace std;

void filewrite()
{
	fstream fout("SOCHAN.txt",ios::out);
	if(!fout)
	{
		cout<<"cannot open file";
		exit(0);
	}
	int i=0;
	while(i<=100)
	{
		fout<<i<<' ';
//		cout<<i<<' ';
		i+=2;
	}
	fout.close();
}

void fileread()
{
	fstream fin("SOCHAN.txt",ios::in);
	if(fin.fail())
	{
		cout<<"cannot open file";
		exit(0);
	}
	int a[52];
	int m=0;
	while(1)
	{	int x;
		fin>>x;
		a[m++] = x;
		if(fin.eof())
		{
			break;
		}
	}
	for(int i=0;i<51;i++)
	{
		cout<<a[i]<<' ';
		if(i==29)
		{
			cout<<'\n'<<'\n';
			
		}
	}
	fin.close();
}
int main(){
	filewrite();
	fileread();
}
