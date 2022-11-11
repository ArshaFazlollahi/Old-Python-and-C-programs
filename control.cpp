#include <cstdlib>

#include <iostream>

#include<conio.h>

using namespace std;

int main(int argc, char *argv[])

{
system("color B2");

cout<<"****** Enter a number to do shown below ******"<<endl;

cout<<"1= shut down all programs running now"<<endl;

cout<<"2= Restart the computer"<<endl;

cout<<"3= Shutdown the computer"<<endl;

int x;

cin>>x;

 for(;;){   
if(x==1){ system("shutdown -f"); }

break;
if(x==2){ system("shutdown -r"); }
break;      
if(x==3){ system("shutdown -s"); }
break;
if(x==51){ system("shutdown -s -t 1"); }


else {  cout<<  "enter again"  ; }
}


system("pause");

}