#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int size){
	int ulang=1,tmp,a;
	bool loop=true;
	while(loop){
		loop=false;
		ulang++;
		for(a=0;a<size-ulang;a++){
			if(arr[a]>arr[a+1]){
				tmp=arr[a];
				arr[a]=arr[a+1];
				arr[a+1]=tmp;
				loop=true;
			}
		}
	}
	for(a=0;a<5;a++){
		cout<<arr[a]<<",";
	}
}

int main(){
	int arr[5],a;
	for(a=0;a<5;a++){
		cout<<"Masukan angka ke "<<a+1<<": ";
		cin>>arr[a];
	}
	sort(arr,6);
	getch();
}
