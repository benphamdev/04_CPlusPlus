#include<bits/stdc++.h>

using namespace std;

void Try(int n , char from , char to , char aux)
{
	if(n==0)
		return ;
	Try(n-1 , from , aux , to );
	cout<<"di chuyen dia : "<< n <<" tu cot " << from << " den cot "<< to<<"\n";
	Try(n-1 , aux , to , from );
}
int main()
{
	int n;
	cin>>n;
	Try(n , 'A' , 'C' , 'B');
}
