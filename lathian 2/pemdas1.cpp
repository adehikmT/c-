#include <iostream>
#include <conio.h>

using namespace std;

void P()
{
	char p;
	int sisi;
	do{
		system("cls");
		cout<<"Persegi"<<endl;
		cout<<"Masukan sisi : ";
		cin>>sisi;
		cout<<"Keliling Persei : "<<sisi*4<<endl;
		cout<<"Apakah ingin Mengitung Kembali, y/t?";
		cin>>p;		
	}while(p!='t');
}

void Proses(int* arr,int size){
	bool loop=true;
	int opertune=1,a,tmp;
	while(loop){
		loop=false;
		opertune++;
		for(a=0;a<size-opertune;a++){
			if(arr[a]>arr[a+1]){
				tmp=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=tmp;
				loop=true;
			}
		}
	}
	for(a=0;a<size-1;a++){
		cout<<arr[a];
	}
}

void sort(){
    char p;
    int a,arr[5];
	do{
		system("cls");
		cout<<"Sorting Data"<<endl;
		for(a=0;a<5;a++){
			cout<<"masukan angka ke-"<<a+1<<" : ";
			cin>>arr[a];
			}
			Proses(arr,6);
			cout<<"\nApakah Ingin Menghitung kembali , y/t?";
			cin>>p;
	}while(p!='t');	
}

void scr(int p,int* arr){
	bool err=true;
     for(int a=0;a<5;a++){
     	if(arr[a]==p){
     		cout<<"\n Data YAng Anda Cari Berada Di Index ke-"<<a;
		    err=false;
		 }
	 }
	 if(err){
	 	cout<<"\n Maaf Data Tudak Ada";
	 }	
}

void serch(){
	char p;
	int a,src;
	int arr[5]={1,4,6,3,2};
	do{
		system("cls");
		cout<<"Cari Index Angka"<<endl;
		for(a=0;a<5;a++){
		    cout<<arr[a];	
		}
		cout<<"\n Masukan Data Yang Anda CAri : ";
		cin>>src;
		scr(src,arr);
		cout<<"\n Apakah Anda ingin Mengulang , y/t?";
		cin>>p;
	}while(p!='t');
}


void menu(){
	int pilih;
	do{
		system("cls");
		cout<<"Menu Pemdas"<<endl;
		cout<<"1. keliling Persegi"<<endl;
		cout<<"2. Sorting Data"<<endl;
		cout<<"3. Sercing Data"<<endl;
		cout<<"4. Exit "<<endl;
		cout<<"Masukan Pilihan : ";
		cin>>pilih;
		if(pilih==1){
			P();
		}else if(pilih==2){
			sort();
		}else if(pilih==3)
		{
			serch();
		}
	}while(pilih!=4);
}

int main(){
	menu();
	getch();
}
