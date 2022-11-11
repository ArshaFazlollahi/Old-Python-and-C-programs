#include<iostream>
#include<cstring>
#include<math.h>

#define PI 3.14159265

using namespace std;

int main(){
	char sfh;
	float x;
	float y;
	char opr;
	char yn;
	bool a;
	bool q=true;
	do
	{	
		cout<<("a number plz : ");
		cin>>(x);
		
		cout<<("Enter an operator : ");
		cin>>(opr);		
		if(opr=='j'){
			cout<<sqrt(x);
		}
		else if(opr=='s'){
			cout<<sin(x*PI/180);
		}
		else if (opr!='j'){
			
		cout<<("another number plz : ");
		cin>>(y);
		


		switch ( opr ) {

			case '+' : 
				cout<<x+y;
	    	break;

	  		case '-' : 
				cout<<x-y;
    		break;

	  		case '*' : 
				cout<<x*y;
    		break;

	  		case '/' :
			 	if (y == 0) {
	 			cout<<"eror";	
	 			} 
				 else 
				cout<<x/y;	
    		break;

	  		default :
			  	cout<<"It was not an operator"; 
		}
		
			
		
		}
		cout<<endl;
	
		
		cout<<"Do you want to continue? [y/n]: ";
		cin>>yn;
		if(tolower(yn)=='y')
			a=true;
		else if(tolower(yn)=='n')
			a=false;


		
	}while(a);
}
