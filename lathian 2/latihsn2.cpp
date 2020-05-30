#include <iostream>
#include <conio.h>

using namespace std;


void sort(int* arr, int size){
   int kurang=1,tmp,a;
   bool ulang=true;
   while(ulang){
   	ulang=false;
   	kurang++;
   	for(a=0;a<size-kurang;a++){
   		if(arr[a]>arr[a+1]){
   			tmp=arr[a];
   			arr[a]=arr[a+1];
   			arr[a+1]=tmp;
   			ulang=true;
		   }
	   }
   }
   for(a=0;a<size-1;a++){
   	cout<<arr[a];
   }
}

int main(){
   int arr[5],a;
   for(a=0;a<6;a++){
   	cout<<"masukan angka ke-"<<a+1<<" : ";
   	cin>>arr[a];
   }
   
   cout<<"data Awal"<<endl;
   for(a=0;a<6;a++){
   	cout<<arr[a];
   }
   cout<<"\ndata Berurut"<<endl;
   sort(arr,7);  
   
   getch();
}
