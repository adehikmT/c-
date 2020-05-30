#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	
	int arr[5],a,tmp,opt=0;
	bool loop=true;
	for(a=0;a<5;a++){
		cout<<"angka ke - "<<a+1<<" : ";
		cin>>arr[a];
	
	}
	cout<<"data sebelum diurutkan : ";
	for(a=0;a<5;a++){
		cout<<arr[a];
	}
		while(loop){
		loop=false;
		opt++;
		for(a=0;a<5-opt;a++){
			if(arr[a]>arr[a+1]){
			
			tmp=arr[a];
			arr[a]=arr[a+1];
			arr[a+1]=tmp;
			loop=true;
		}
	}
		}
		cout<<"\ndata sesudah di urutkan : ";
		for(a=0;a<5;a++){
		cout<<arr[a];	
	}
	
	
	
	
	
	
//	int arr[2][3][4]={{{10,2,3,4},{4,3,2,1},{3,5,6,7}},{{10,2,3,4},{4,3,2,1},{3,5,6,7}}};
//	
//	for(int a=0;a<2;a++){
//		for(int b=0;b<3;b++){
//			for(int c=0;c<4;c++){
//			cout<<arr[a][b][c]<<" , ";
//			}
//			}
//			}
//	

//	cout<<endl;
//	
//	bool loop=true;
//	int opt=0,tmp;
//	while(loop){
//	loop=false;
//	opt++;
//	for(int s=0;s<24-opt;opt++){
//	for(int a=0;a<2;a++){
//		for(int b=0;b<3;b++){
//			for(int c=0;c<4;c++){
//				if(arr[a][b][c]>arr[a+1][b+1][c+1]){
//				tmp=arr[a][b][c];
//				arr[a][b][c]=arr[a+1][b+1][c+1];
//				arr[a+1][b+1][c+1]=tmp;
//				loop=true;	
//				}
//				}
//			}
//		}
//	 }
//	}
//	
//		for(int a=0;a<2;a++){
//		for(int b=0;b<3;b++){
//			for(int c=0;c<4;c++){
//			cout<<arr[a][b][c]<<" , ";
//			}
//			}
//			}
//	
	getch();
}
