#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int size){
	bool loop=true;
	int a,opt=0,tmp;
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
	for(a=0;a<size;a++){
		cout<<arr[a];
	}
}

void serc(int* arr,int size,int cari){
	bool pesan=true;
	for(int a=0;a<size;a++){
		if(arr[a]==cari){
			cout<<"\nData Di Temukan";
			pesan=false;
		}
	}
	if(pesan){
		cout<<"\nData Tidak Di Temukan";
	}
}

int main(){
	int arr[5]={1,4,3,2,5};
	sort(arr,5);
	serc(arr,5,10);
	getch();
}
