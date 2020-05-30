#include <iostream>
#include <conio.h>

using namespace std;


void P(){
	int ulang,s;
	do{
		system("cls");
		cout<<"masukan sisi : ";
		cin>>s;
		cout<<"Luas Persegi = "<<s*s<<endl;
		cout<<"Masukan 1 untuk kembali : ";
		cin>>ulang;
	}while(ulang!=1);
}

void proses(int* arr,int size){
	int ulang=1,tmp,a;
	bool loop=true;
	do{
		ulang++;
		loop=false;
		for(a=0;a<size-ulang;a++){
			if(arr[a]>arr[a+1]){
				tmp=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=tmp;
				ulang=true;
			}
		}
	}while(loop);
	
	for(a=0;a<size-1;a++){
		cout<<arr[a];
	}
	
}

void sort(){
   int ulang,a;
   int arr[4];
   do{
    for(a=0;a<5;a++){
    	cout<<"Masukan Angka ke-"<<a+1<<" : ";
    	cin>>arr[a];
	}
	proses(arr,6);
	cout<<"Masukan 1 untuk keluar : ";
	cin>>ulang;
   }while(ulang!=1);
}


void menu(){
	int pilih;
	do{
		system("cls");
		system("color 02");
		cout<<"Pemograman Dasar"<<endl;
		cout<<"1. Menghitung Persegi"<<endl;
		cout<<"2. Sort Angka"<<endl;
		cout<<"3. serch index"<<endl;
		cout<<"4. Exit"<<endl;
		cout<<"Masukan Pilihan : ";
		cin>>pilih;
		if(pilih==1){
			P();
		}else if(pilih==2){
			sort();		
		}else if(pilih==3){
			
		}
	}while(pilih!=4);
}

int main(){
	menu();
	getch();
}
