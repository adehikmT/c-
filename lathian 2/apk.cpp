#include <iostream>
#include <conio.h>

using namespace std;

void Body(string* arr,int size){
	for(int a=0;a<size;a++){
		cout<<arr[a]<<endl;
	}
}

void MenuUtama(){
	string arr[4]={"Menu Utama","1. Bangun Datar","2. Sorting dan serching","3. Exit"};
	Body(arr,4);
}

void BangunDatar(){
	string arr[5]={"Bangun Datar","1. Persegi","2. Persegi Panjang","3. Kembali","4. Exit"};
	Body(arr,5);
}

void SF(){
	int pilih;
	do{
	string arr[5]={"Sorting dan Serching","1. Sorting","2. Serching","3. Kembali","4. Exit"};
	Body(arr,5);
	if(pilih==1){
	system("cls");
	BangunDatar();	
	}else if (pilih==2){
	system("cls");	
	SF();	
	}
	ask(1);
	cin>>pilih;	
	}while(pilih!=3);
	
}

void ask(int opsi){
	if(opsi==1){
		cout<<"Masukan Pilihan :";
	}else{
		cout<<"Kembali y/t?";
	}
}

void Menu(){
	int pilih;
	do{
		system("cls");
		MenuUtama();
		if(pilih==1){
		system("cls");
		BangunDatar();	
		}else if (pilih==2){
		system("cls");	
		SF();	
		}
		ask(1);
		cin>>pilih;
	}while(pilih!=3);
}

int main(){
	Menu();
	getch();
}
