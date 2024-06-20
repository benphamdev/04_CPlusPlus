#include<bits/stdc++.h>

using namespace std;

void filewrite()
{
	fstream fout("SONGUYEN.txt",ios::out);
	if(fout)
	{	
		srand(time(0));
		int n=10;
		for(int i=0;i<n;i++)
		{
			int x = rand();
			fout<<x<<' ';
		}	
		fout.close();
	}
}
void fileread()
{
	fstream fin("SONGUYEN.txt",ios::in);
	fstream fout1("SOCHAN.txt",ios::out);
	fstream fout2("SOLE.txt",ios::out);
	if(!fin)
	{
		cout<<"cannot open file";
		exit(0);
	}
	while(1)
	{
		int x;
		fin>>x;
		if(fin.eof())
		{
			break;
		}
		if(x%2==0)
		{
			fout1<<x<<' ';
		}
		else
		{
			fout2<<x<<' ';
		}
	}
	fin.close();
	fout1.close();
	fout2.close();
}

int main(){
	filewrite();
	fileread();
}
