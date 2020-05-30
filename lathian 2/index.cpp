#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int size){
	int index=1,tmp,a;
	bool loop=true;
	while(loop){
	index++;
	loop=false;
	for(a=0;a<size-index;a++){
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
	
	int arr[6]={2,5,3,4,1,5};
	sort(arr,7);
	getch();
}
