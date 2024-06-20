#include<iostream>

using namespace std;

bool namnhuan(int y)
{
	if( y%4==0 && y%100!=0||y%400==0)  
		return true;
	return false;	 
}

int demngaytrongthang(int y,int m)
{
	if(m==2)
	{
		if(namnhuan(y)) 
			return 29;
		return 28;	
	}
	else
	{
		if(m==4||m==6||m==9||m==11)
			return 30;
		return 31;	
	}
}
int check(int y,int m,int d)
{
	if(y<0) return 0;
	else if(m>12||m<0) return 0;
	else if(d>demngaytrongthang(y,m)||d<0) return 0;
	return 1;
}
void xuatngayketiep(int y,int m,int d)
{
	if(check(y,m,d))
	{
		if(d==demngaytrongthang(y,m))
		{
			cout<<1;
			if(m==12)
			{
				cout<<" "<<1<<" "<<y+1;
			}
			else
			{
				cout<<" "<<m+1<<" "<<y;
 			}
		}		
		else
			cout<<d+1<<" "<<m<<" "<<y;
	}
	else
		cout<<-1;
}

void ex()
{
	int y,m,d;
	cout<<"Nhap nam : ";cin>>y;
	cout<<"Nhap thang : ";cin>>m;
	cout<<"Nhap ngay : ";cin>>d;
	cout<<"ngay tiep theo cua ngay da nhap la : ";xuatngayketiep(y,m,d);
}
int main(){
	ex();
}
