#include<bits/stdc++.h>
using namespace std;

struct date 
{
	int d,m,y;
};
void in(date &x)
{
	cin>>x.d>>x.m>>x.y;
}
//void out(date x){
//	cout<<x.d<<":"<<x.m<<":"<<x.y;
//}
int isleapyear(int y) 
{
	if(y%400==0 || (y%4==0 && y%100 !=0)) return 1;
	return 0;
}
int countdaymonth(int y,int m) 
{
	if(m==2) {
		if(isleapyear(y)) 
		{
			return 29;
		}
		return 28;
	} 
	else 
	{
		if(m==4||m==6||m==9||m==11) return 30;
		return 31;
	}
}
int check(date x) 
{
	if(x.y<0) return 0;
	else if(x.m<0||x.m>12) return 0;
	else if(x.d<0||x.d>countdaymonth(x.y,x.m)) return 0;
	return 1;
}

//int day(int y,int m,int d){
//	int cnt = d;
//	for(int i=1;i<m;i++){
//		cnt += countdaymonth(y,i);
//	}
//	return cnt;
//}
//int countyear(int y,int m,int d){
//	int cnt = 0;
//	for(int i=1;i<y;i++){
//		if(isleapyear(i)) cnt +=366;
//		else cnt+=365;
//	}
//	cnt += day(y,m,d);
//	return cnt;
//}


const int monthDays[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
int countleapyear(date x) 
{
	if(x.m<=2) x.y--;
	return x.y/4 -x.y/100+x.y/400;
}
int count(date a,date b) 
{
	long int n1 = a.y *365 + a.d;
	long int n2 = b.y *365 + b.d;
	for(int i=0; i<a.m-1; i++)
		n1 += monthDays[i];
	n1+=countleapyear(a);
	for(int i=0; i<b.m-1; i++)
		n2 += monthDays[i];
	n2+=countleapyear(b);
	return abs(n1-n2);
}

int main() 
{
	date a,b;
	in(a);
	in(b);

	if(check(a)&&check(b)) 
	{
		cout<<count(a,b);
//		int dis1 = countyear(a.y,a.m,a.d);
//		int dis2 = countyear(b.y,b.m,b.d);
//		cout<<abs(dis1-dis2);
	}
	return 0;
}



