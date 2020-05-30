#include <iostream>
#include <conio.h>

using namespace std;

void ml(int a){
  for(int c=0;c<=a;c++){
  	cout<<" ";
  }
}

void car(int a,string x){
for(int c=0;c<=a;c++){
  	cout<<x;
  }
}


void mt(int a){
for(int c=0;c<=a;c++){
  	cout<<endl;
  }	
}

double ling(int r){
	return 22/7*r*r; 
}

void heder(){
  mt(1);
  ml(45);
  car(30,"=");
  mt(1);
  ml(45);
  car(1,"||");
  ml(1);
  cout<<"Hitung Bangun Ruang";
  ml(1);
  car(1,"||");
  mt(1);
  ml(45);
  car(30,"=");
  mt(1);
  ml(45);
  car(1,"||");
  ml(4);
  cout<<"1. Lingkaran";
  ml(5);
  car(1,"||");
  mt(1);
  ml(45);
  car(1,"||");
  ml(4);
  cout<<"2. Balok";
  ml(9);
  car(1,"||");
  mt(1);
  ml(45);
  car(1,"||");
  ml(4);
  cout<<"3. Exit";
  ml(10);
  car(1,"||");
  mt(1);
  ml(45);
  car(30,"=");
  mt(1);
  ml(45);
  cout<<"Masukan Pilihan : ";
}

void lingkaran(){
	int r,ulang;
	do{
  system("cls");
  mt(1);
  ml(43);
  car(34,"=");
  mt(1);
  ml(43);
  car(1,"||");
  ml(1);
  cout<<"Hitung Volume Lingkaran";
  ml(1);
  car(1,"||");
  mt(1);
  ml(45);
  car(30,"=");
  mt(1);
  ml(45);
  ml(4);
  cout<<"Masukan Jari-Jari :";
  cin>>r;
  mt(1);
  ml(45);
  car(30,"=");
  mt(1);
  ml(42);
  ml(4);
  cout<<"Dik : r="<<r;
  mt(1);
  ml(42);
  ml(4);
  cout<<"Dit : v= ?";
  mt(1);
  ml(42);
  ml(4);
  cout<<"Jawab !";
  mt(1);
  ml(42);
  ml(4);
  cout<<"Volume Lingkaran = 22/7*r*r";
  mt(1);
  ml(42);
  ml(4);
  cout<<"Volume Lingkaran = 22/7*"<<r<<"*"<<r;
  mt(1);
  ml(42);
  ml(4);
  cout<<"Volume Lingkaran ="<<ling(r);
  mt(1);
  ml(20);
  cout<<"Masukan angka sembarang untuk Menghitung ulang, Masukan 1 untuk Keluar : ";
  cin>>ulang;
	}while(ulang!=1);
}

void menu(){
	int pilih;
	do{
  system("cls");
  heder();
  cin>>pilih;
  if(pilih==1){
  	lingkaran();
  }else if(pilih==2){
  	
  }
 	}while(pilih!=3);
}

int main(){
  menu();
  system("cls");
  cout<<"Press any key to Exit...";
  getch();  
}
