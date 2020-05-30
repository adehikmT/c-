#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int length){
	int ulang=1,tmp,a;
	bool loop=true;
	do{
	loop=false;
	ulang++;
	for(a=0;a<length-ulang;a++){
		if(arr[a]>arr[a+1]){
			tmp=arr[a];
			arr[a]=arr[a+1];
			arr[a+1]=tmp;
			loop=true;
		}
	}	
	}while(loop);
	
	for(a=0;a<length-1;a++){
		cout<<arr[a];
	}
	
}

int main(){
	int arr[5];
	for(int a=0;a<5;a++){
		cin>>arr[a];
	}
sort(arr,6);

int find;
cin>>find;

for(int a=0;a<5;a++){
	if(arr[a]==find){
		cout<<arr[a]<<" "<<a;
	}
}

getch();
}
