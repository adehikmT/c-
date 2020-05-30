#include <iostream>
//for cout,cin
#include <conio.h>
//for getch

using namespace std;


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


int main(){
	SF();
	getch();
}
