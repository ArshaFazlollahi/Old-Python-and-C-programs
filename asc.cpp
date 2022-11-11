#include<iostream>
#include<cstring>
#include<stdio.h>
#include<string>
using namespace std;

int main(){
	string x="";
	string yesno;
	char chr;
    //int y[10];
	int chartoasci;
	system ("CLS");	
	cout<<"char to asci=1 asci to char=2 "<<endl;
	cin>>chartoasci;
//	scanf("%d",chartoasci);
	if(chartoasci==1){
	cin.get();
	do
	{
		chr=getchar();	
		x=x+chr;
		
	}while(chr!='\n');
		for(int i=0;i<x.length()-1;i++){
			
		cout<< (int) x[i]<<" ";
		}
		cout<<"0";
	}
	else if(chartoasci==2){
		int y;
		do
		{
			cin>>y;
			chr=(char)y;
			x=x+chr;
		}while(y!=0);
		for(int i=0;i<x.length()-1;i++){
			cout<<x[i];
		}
		}
		cout<<endl;
		cin.get();
		cin.get();
}


