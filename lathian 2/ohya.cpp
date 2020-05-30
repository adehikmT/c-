#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int size){
	bool loop=true;
	int opt=1,a,tmp;
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
	
	for(a=0;a<size-1;a++){
		cout<<arr[a];
	}
	
}


int main(){
	int arr[]={8,9,6,7,2,1};
	sort(arr,7);
	getch();
}
