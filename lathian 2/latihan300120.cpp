#include <iostream>
#include <conio.h>

using namespace std;


void body(string* list,int size,int opsi){
	for(int a=0;a<size;a++){
		cout<<"====================="<<endl;
		cout<<list[a]<<endl;	
	}
	if(opsi==1){
	cout<<"Pilih Menu : ";
	}
}

void ask(){
		cout<<"Kembali Ke Menu Utama y/t? ";
}

int Persegi(int s,int opsi){
	if(opsi==1){
	return s*4;	
	}else{
	return s*s;	
	}
}

void KP(int ops){
	char opsi;
	int s;
	do{
		system("cls");
		cout<<"Keliling Persegi"<<endl;
		cout<<"Masukan sisi : ";
		cin>>s;
		if(ops==1){
		cout<<"Keliling Persegi : "<<Persegi(s,1)<<endl;
		}else{
		cout<<"Luas Persegi : "<<Persegi(s,2)<<endl;
		}
		ask();
		cin>>opsi;
	}while(opsi!='y');
}

int* sort(int arr[],int size){
	bool loop=true;
	int opt=0,a,tmp;
	while(loop){
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
	}
	return arr;
}

void Show(int arr[]){
		cout<<"\nData Berurut : ";
		for(int a=0;a<5;a++){
			cout<<arr[a];
		}
}

void Find(int arr[],int size,int cari){
    bool err=true;
	for(int a=0;a<size;a++){
		if(arr[a]==cari){
			cout<<"\nData Berada di uruan ke-"<<a+1;
			err=false;
		}
	}
	if(err){
		cout<<"\nData Tidak ada Dalam antraan";
	}
}

void SF(){
	int arr[5],a,cari;
	char opsi;
	do{
		system("cls");
		cout<<"Sorting Dan Find\n";
		for(a=0;a<5;a++){
			cout<<"Masukan angka ke-"<<a<<" : ";
			cin>>arr[a];
		}
		cout<<"Data Sebelum Di urutkan : ";
		for(a=0;a<5;a++){
			cout<<arr[a];
		}
		Show(sort(arr,5));
		cout<<"\nCari Urutan Angka DI atas : ";
		cin>>cari;
		Find(sort(arr,5),5,cari);
		cout<<endl;
		ask();
		cin>>opsi;
	}while(opsi!='y');
}

void MenuUtama(){
	int pilih;
	do{
	system("cls");
	string lis[5]={"Main Menu","1. Keliling Persegi","2. Luas Persegi","3. Sorting and Find","4. Exit"};
	body(lis,5,1);
	cin>>pilih;
	if(pilih==1){
		KP(1);
		}else if(pilih==2){
		KP(2);
		}else if(pilih==3){
		SF();
		}
	}while(pilih!=4);
}

void Menu(){
	MenuUtama();
}


int main(){
	Menu();
	system("cls");
	cout<<"Press Any Key...";
	getch();
}
