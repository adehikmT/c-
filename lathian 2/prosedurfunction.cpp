#include <iostream>
#include <conio.h>

using namespace std;

int luas(int s){
	return s*s;
}


void persegi(){
	int s;
	char opsi;
	do{
	system("cls");
	cout<<"Menu Persegi";
	cout<<"\nMasukan Sisi :";
	cin>>s;
	cout<<"LUas="<<luas(s);
	cout<<"\nINgin Hitung Lagi y/t?";
	cin>>opsi;
	}while(opsi!='y');
}

void SP(){
	char opsi;
	int arr[5],a,tmp,opt=0;
	bool loop=true;
	do{
		cout<<"Sorting dan Find\n";
		for(a=0;a<5;a++){
			cout<<"Masukan nilai ke-"<<a+1<<" :";
			cin>>arr[a];
		}
		cout<<"Data Sebelum Di urutkan :";
		for(a=0;a<5;a++){
		cout<<arr[a];
		}
		
		while(loop){
			loop=false;
			opt++;
			for(a=0;a<5-opt;a++){
				if(arr[a]>arr[a+1]){
					tmp=arr[a];
					arr[a]=arr[a+1];
					arr[a+1]=tmp;
					loop=true;
				}
			}
		}
		cout<<"\nData Urut: ";
		for(a=0;a<5;a++){
		cout<<arr[a];
		}
		cout<<"\nINgin Hitung Lagi y/t?";
		cin>>opsi;
	}while(opsi!='y');
}

void MenuUtama(){
    int pilih;
	do{
		system("cls");
		cout<<"menu Utama"<<endl;
		cout<<"1. Persegi"<<endl;
		cout<<"2. Sorting dan find"<<endl;
		cout<<"3. Exit"<<endl;
		cin>>pilih;
		if(pilih==1){
			persegi();
		}else if(pilih==2){
			SP();
		}
	}while(pilih!=3);
}

void Menu(){
	MenuUtama();
}

int main(){
	Menu();
    getch();
}
