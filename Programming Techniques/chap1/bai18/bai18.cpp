#include<iostream>
#include<fstream>
#include<ctime>

using namespace std;

void filewrite()
{
	fstream fout("SONGUYEN.txt",ios::out);
	if(fout.is_open())
	{
		int n = 10,cnt = 0;	
		int B[32768] = {1};
		srand(time(0));
		while(cnt<n)
		{
			int tmp = rand();
			if(B[tmp]==0)
			{
				B[tmp] = 1;
				fout<<tmp<<' ';
				++cnt;
			}
		}
		fout.close();
	}
}
int main(){
	filewrite();
}
