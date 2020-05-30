#include <iostream>
#include <conio.h>

using namespace std;

void sort(int* arr,int length){
     bool loop=true;
	 int opertune=1,tmp,a;
	 while(loop){
	 	loop=false;
	 	opertune++;
	 	for(a=0;a<length-opertune;a++){
	 		if(arr[a]>arr[a+1]){
	 			tmp=arr[a];
	 			arr[a]=arr[a+1];
	 			arr[a+1]=tmp;
	 			loop=true;
			 }
		 }
	 }
	 for(a=0;a<length-1;a++){
	 	cout<<arr[a];
	 }	
}

int main(){
	int arr[5]={2,4,5,3,1};
   sort(arr,6);
   getch();
}
