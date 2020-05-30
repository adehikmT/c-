#include <iostream>
#include <conio.h>

using namespace std;

void p(){
	char a;
	do{
		cout<<"exit y/t? ";
		cin>>a;
	}while(a!='y');
}

void menu(){
	int a;
	do{
		cout<<"1. ok";
		cout<<"\n2. ko";
		cout<<"\n3. exit";
		cin>>a;
		if(a==1){
			system("cls");
			p();
		}else if(a==2){
			
		}
	}while(a!=3);
}

int main(){
menu();	
getch();
}
