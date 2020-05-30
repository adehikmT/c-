#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main(){
	char str[5][20],t[20];
	int a,b;
	cout<<"Enter your cahr : ";
	for(a=0;a<5;a++){
		cin>>str[a];
	}
	for(a=1;a<5;a++){
      for(b=1;b<5;b++){
      	if(strcmp(str[b-1],str[b])>0){
      		strcpy(t,str[b-1]);
      		strcpy(str[b-1],str[b]);
      		strcpy(str[b],t);
		  }
	  }
	}
	cout<<"Hasil "<<endl;
	for(a=0;a<5;a++){
		cout<<str[a]<<endl;
	}
	getch();
}
