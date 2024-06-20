#include<bits/stdc++.h>
using namespace std;
int phepnot(int x){
	if(x==0) return 1;
	return 0;
}
int phepsuy(int p,int q){
	if(p==1 && q==0) return 0;
	return 1;
}
void out(int a[][100],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++)
			cout<<a[i][j]<<" ";
		cout<<endl;
	}			
}
int a[100][100] = {0} ;
int columns;
void solve (int p,int q,int r,int rows,int columns){
	int res = rows ;
	for(int i = 0 ;i<columns ;i++){
		int tmp = res/2 , j=0;
		while(j<rows){
			int d=0;
			while(d<tmp){
				a[j++][i] = 1;
				++d;
			}
			d=0;
			while(d<tmp){
				a[j++][i] = 0;
				++d;
			}
		}	
		res/=2;
	}	
}
 
void phepand(int a[][100],int cot1,int  cot2 ,int hang,int &columns){
	for(int i=0;i<hang;i++){
		a[i][columns] = (a[i][cot1] & a[i][cot2]) ;
	}
	columns++;
}
 
void phepor(int a[][100],int cot1,int  cot2 ,int hang,int &columns){
	for(int i=0;i<hang;i++){
		a[i][columns] = (a[i][cot1] | a[i][cot2]) ;
	}
	columns++;
}
 
void phepxor(int a[][100],int cot1,int  cot2 ,int hang,int &columns){
	for(int i=0;i<hang;i++){
		a[i][columns] = (a[i][cot1] ^ a[i][cot2]) ;
	}
	columns++;
}
 
void phepnot1(int a[][100],int cot1,int hang){
	for(int i=0;i<hang;i++){
		a[i][columns] = phepnot(a[i][cot1]) ;
	}
	columns++;
}
 
void phepsuy1(int a[][100],int cot1,int  cot2 ,int hang,int &columns){
	for(int i=0;i<hang;i++){
		a[i][columns] = phepsuy(a[i][cot1] , a[i][cot2]) ;
	}
	columns++;
}
 
 
int check(int a[][100],int cot1,int hang){
	for(int i=0;i<hang-1;i++){
		if(a[i][cot1] != a[i+1][cot1]) return 0;
	}
	return 1;
}
 
int hang(int a[][100],int cot1,int hang){
	if(check(a,cot1,hang)){
		if(a[0][cot1]==1){
			cout<<"true constant \n";
		}
		else cout<<"false constant \n";
	}
	else cout<<"NO Constant \n";
}
void ex(){
	int p,q,r;
	cout<<"nhap so luong cot p : ";cin>>p;
	cout<<"nhap so luong cot q : ";cin>>q;
	cout<<"nhap so luong cot r : ";cin>>r;
	if(r != 0) columns = 3;
	else if(r==0)  columns = 2;
	if(q==0) columns = 1;
	int rows =(int) pow(2 , columns );
	solve(p,q,r,rows,columns);
	while(1){
		cout<<"-----------------------OPTION-----------------------\n"
			<<"1.phep and "<<"\n"
			<<"2.phep or "<<"\n"
			<<"3.phep xor "<<"\n"
			<<"4.phep not "<<"\n"
			<<"5.phep suy "<<"\n"
			<<"6.kiem tra hang "<<"\n"
			<<"7.cout bang gia tri "<<"\n"
			<<"0.exist"<<"\n"
			<<"----------------------------------------------------"<<"\n";
		int lc;cout<<"option : ";
		cin>>lc;
		if(lc==1){
			int cot1,cot2;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			cout<<"nhap cot 2 : " ;cin>>cot2;
			phepand(a,cot1,cot2,rows,columns);		
		}
		else if(lc==2){
			int cot1,cot2;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			cout<<"nhap cot 2 : " ;cin>>cot2;
			phepor(a,cot1,cot2,rows,columns);	
		}
		else if(lc==3){
			int cot1,cot2;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			cout<<"nhap cot 2 : " ;cin>>cot2;
			phepxor(a,cot1,cot2,rows,columns);	
		}
		else if(lc==4){
			int cot1;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			phepnot1(a,cot1,rows);
		}
		else if(lc==5){
			int cot1,cot2;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			cout<<"nhap cot 2 : " ;cin>>cot2;
			phepsuy1(a,cot1,cot2,rows,columns);	
		}
		else if(lc==6){
			int cot1;
			cout<<"nhap cot 1 : " ;cin>>cot1;
			hang(a,cot1,rows);
		}
		else if(lc==7){
			out(a,rows,columns);
		}
		else if(lc==0){
			break;
		}
	}
}
 
int main(){
	ex();
}