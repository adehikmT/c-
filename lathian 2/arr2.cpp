#include <iostream>
#include <conio.h>

using namespace std;


int main(){
	awal:
		system("cls");
	char pilih;
	cout<<"Menu Lingkaran"<<endl;
	cout<<"ingin keluar y/t ?";
	cin>>pilih;
	if(pilih=='y'){
//		goto Menu;
	}else if(pilih=='t'){
		goto awal;
	}else{
		cout<<"Pilihan yang anda masukan salah pilih kembali!";
		getch();
		goto awal;
	}
	getch();
}
