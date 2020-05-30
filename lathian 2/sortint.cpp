#include <iostream>
#include <conio.h>

using namespace std;

void shows(int arr[],int size){
	int a=0;
	for(a;a<size;a++)
	cout<<arr[a];
	cout<<""<<endl;
}

int* Shot(int arr[],int size){
   bool actv=true;
   int a=1,tmp;
   while(actv){
	  a++;
      actv=false;
      for(int i=0;i<size-a;i++){
      	if(arr[i]>arr[i+1]){
      		tmp=arr[i];
      		arr[i]=arr[i+1];
      		arr[i+1]=tmp;
		  }
	  }
   }
   return arr;	
}

int main(){
	int arr[]={2,1,4,6,3};
    shows(Shot(arr,6),5);
}
