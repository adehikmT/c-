#include <iostream>
#include <conio.h>


using namespace std;

int hitung_PP(int p,int l){
   return p*l;
}

int hitung_P(int s){
	return s*s;
}
 
void PP(){
	int ulang,p,l;
	do{
	system("cls");
	cout<<"Persei panjang"<<endl;
	cout<<"Masukan Panjang : ";
	cin>>p;
	cout<<"\nMasukan Lebar : ";
	cin>>l;
	cout<<"\nLuas Persegi Panjang Adalah "<<hitung_PP(p,l)<<endl;
	cout<<"masukan 2 untuk keluar , masukan bebas untuk menhitung ulang : ";
	cin>>ulang;
    }while(ulang!=2);
}

void P(){
	int ulang,s;
	do{
	system("cls");
	cout<<"Persegi"<<endl;
	cout<<"masukan sisi :";
	cin>>s;
	cout<<"\n Luas Persegi adalah : "<<hitung_P(s)<<endl;
	cout<<"masukan 2 untuk keluar , masukan bebas untuk menhitung ulang : ";
	cin>>ulang;	
	}while(ulang!=2);
}

void SI(){
	int ulang,index;
	int arr[]={2,1,3,5,6};
	bool cari=true;
	do{
		system("cls");
		cout<<"Array {2,1,3,5,6}"<<endl;
        cout<<"masukan value : ";
		cin>>index;
		for(int a=0;a<5;a++){
			if(arr[a]==index){
			cout<<"value yang anda cari berada di index ke "<<a<<endl;
			cari=false;
			}
			}
			if(cari){
				cout<<"value tidak di temukan"<<endl;
			}
		cout<<"masukan 2 untuk keluar , masukan bebas untuk menhitung ulang : ";
		cin>>ulang;			
	}while(ulang!=2);
}

void Sort(int arr[],int size){
     bool ulang=true;
     int a,b=1,tmp;
     while(ulang){
     	b++;
	 ulang=false;
	   for(a=0;a<size-b;a++){
	   	 if(arr[a]>arr[a+1]){
	   	 	tmp=arr[a];
	   	 	arr[a]=arr[a+1];
	   	 	arr[a+1]=tmp;
			ulang=true;
			}
	   }
	 }
	 cout<<"Urut : ";
		for(a=0;a<5;a++){
			cout<<arr[a];
		}
}

void SA(){
	int ulang,a,arr[5];
	do{
		system("cls");
		cout<<"Masukan 5 angka Acak : "<<endl;
		for(a=0;a<5;a++){
		cout<<"angka ke-"<<a+1<<" :";	
		cin>>arr[a];
		}
		Sort(arr,6);
		cout<<"\nmasukan 2 untuk keluar , masukan bebas untuk menhitung ulang : ";
		cin>>ulang;	
	}while(ulang!=2);
}

void menu(){
	int pilih;
  do{
  	system("cls");
  	cout<<"Pilih Menu"<<endl;
	cout<<"1. Persegi"<<endl;
	cout<<"2. Persegi Panjang"<<endl;
	cout<<"3. Serch Index"<<endl;
	cout<<"4. Sort angka"<<endl;
	cout<<"5. Exit"<<endl;
	cout<<"pilih : ";
	cin>>pilih;
	
	if(pilih==1){
     P();
	}else if(pilih==2){
	 PP();
	}else if(pilih==3){
	 SI();	
	}else if(pilih==4){
	  SA();	
	}
	
  }while(pilih!=5);
}

int main(){
	menu();
}
