#include <iostream>
#include <conio.h>

using namespace std;


void ListMenu(string* arr,int size){
	for(int a=0;a<size;a++){
	cout<<arr[a]<<endl;
	}
}

int RP(int s,int opsi){
	if(opsi==1){
		return s*4;
	}else{
		return s*s;
	}
}

void P(string judul,int opsi){
	int s;
	char ask='y';
	do{
	system("cls");
	cout<<judul<<endl;
	cout<<"Masukan Sisi : ";
	cin>>s;
	if(opsi==1){
		cout<<"Keliling Persegi = "<<RP(s,1);
	}else if(opsi==2){
		cout<<"Luas Persegi = "<<RP(s,2);
	}
	cout<<"\nKembali y/t?";
	cin>>ask;
    }while(ask!='y');
}

void Persegi(){
    int pilih;
	string arr[4]={"Persegi","1. Keliling","2. Luas","3. Kembali"};
	do{
		system("cls");
		ListMenu(arr,4);
		cout<<"Pilih Menu : ";
		cin>>pilih;
		
		if(pilih==1){
              P("Keliling Persegi",1);
		}else if(pilih==2){
			P("Luas Persegi",2);
	    }
		
	}while(pilih!=3);	
}

int RPP(int p,int l,int opsi){
	if(opsi==1){
		return 2*p+2*l;
	}else{
		return p*l;
	}
}

void HPP(string judul,int opsi){
	int p,l;
	char ask='y';
	do{
	system("cls");
	cout<<judul<<endl;
	cout<<"Masukan Panjang : ";
	cin>>p;
    cout<<"Masukan Lebar : ";
	cin>>l;
	if(opsi==1){
		cout<<"Keliling Persegi Panjang= "<<RPP(p,l,1);
	}else if(opsi==2){
		cout<<"Luas Persegi Panjang = "<<RPP(p,l,2);
	}
	cout<<"\nKembali y/t?";
	cin>>ask;
    }while(ask!='y');
}


void PP(){
    int pilih;
	string arr[4]={"Persegi Panjang","1. Keliling","2. Luas","3. Kembali"};
	do{
		system("cls");
		ListMenu(arr,4);
		cout<<"Pilih Menu : ";
		cin>>pilih;
		
		if(pilih==1){
              HPP("Keliling Persegi Panjang",1);
		}else if(pilih==2){
			HPP("Luas Persegi Panajnag",2);
	    }
		
	}while(pilih!=3);	
}

void BangunDatar(){
   int pilih;
	string arr[4]={"Bangun Datar","1. Persegi","2. Persegi Panjang","3. Kembali"};
	do{
		system("cls");
		ListMenu(arr,4);
		cout<<"Pilih Menu : ";
		cin>>pilih;
		
		if(pilih==1){
			Persegi();
		}else if(pilih==2){
			PP();
	    }
		
	}while(pilih!=3);
}

int* sort(int* arr,int size){
	int a,opt=0,tmp;
	bool loop=true;
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

void show(int* arr,int size){
	for(int a=0;a<size;a++){
		cout<<arr[a];
	}
}

void SF(){
	int pilih,a,arr[5];
	char ask;
	do{
		system("cls");
		cout<<"Sorting And Find"<<endl;
		for(a=0;a<5;a++){
			cout<<"Masukan Angka ke-"<<a+1<<" : ";
			cin>>arr[a];
		}
		cout<<"\nData Sebelum Di urutkan : ";
		show(arr,5);
		cout<<"\nData Sudah Di urutkan : ";
		show(sort(arr,5),5);
        cout<<"\nKembali y/t?";
        cin>>ask;
	}while(ask!='y');
}


void Menu(){
	int pilih;
	string arr[4]={"Main Menu","1. Bangun Datar","2. Sorting And Find","3. Exit"};
	do{
		system("cls");
		ListMenu(arr,4);
		cout<<"Pilih Menu : ";
		cin>>pilih;
		
		if(pilih==1){
			BangunDatar();
		}else if(pilih==2){
			SF();
	    }
		
	}while(pilih!=3);
}

int main(){
	Menu();
	getch();
}
