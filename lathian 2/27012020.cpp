#include <iostream>
#include <conio.h>

using namespace std;

void KP(){
	char pilih;
	int p,l;
	do{
		system("cls");
		cout<<"Keliling Persegi Panjang"<<endl;
		cout<<"Masukan Panjang : ";
		cin>>p;
		cout<<"Masukan Lebar : ";
		cin>>l;
		cout<<"Keliling Persegi Panjang = "<<2*p+2*l<<endl;
		cout<<"InginMengitung Lagi y/t? ";
		cin>>pilih;		
	}while(pilih!='t');
}

void sorting(int* arr,int size){
	bool loop;
	int opt=1,a,tmp;
	do{
		loop=false;
		opt++;
		for(a=0;a<size-opt;a++){
			if(arr[a]>arr[a+1]){
				tmp=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=tmp;
				loop=true;
			}
		}
	}while(loop);
	
	for(a=0;a<size-1;a++){
		cout<<arr[a];
	}
	
}

void sort(){
	char pilih;
	int a,arr[5];
	do{
		system("cls");
		cout<<"Masukan angka"<<endl;
		for(a=0;a<6;a++){
			cout<<"angaka ke-"<<a+1<<" : ";
			cin>>arr[a];
		}
		cout<<"Hasil Sorting : "<<endl;
		sorting(arr,7);
		cout<<"\nInginMengitung Lagi y/t? ";
		cin>>pilih;
	}while(pilih!='t');
}

void menu(){
  bool ex;
  int pilih;
  do{
  	ex=true;
  	system("cls");
  	cout<<"Menu"<<endl;
	cout<<"1. Keliling Persegi Panjang"<<endl;
	cout<<"2. Sorting"<<endl;
	cout<<"3. Serch"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Masukan Pilihan : ";
	cin>>pilih;
	if(pilih==1){
		KP();
	}else if(pilih==2){
		sort();
	}else if(pilih==3){
		
	}else{
	ex=false;	
	}
  }while(ex);
}


int main(){
	menu();
	getch();
}
