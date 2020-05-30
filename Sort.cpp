//#include <iostream>
//#include <conio.h>
//
//using namespace std;
//
//void ShowSort(int arr[], int size){
//	for(int a=0;a<size;a++)
//	cout<<" "<<arr[a];
//	cout<<""<<endl;
//}
//
//int* SortData(int arr[],int size){
//	bool active=true;
//	int i=0,tmp;
//	while(active){
//		active=false;
//		i++;
//		for(int a=0;a<size-i;a++){
//			if(arr[a]>arr[a+1]){
//				tmp=arr[a];
//				arr[a]=arr[a+1];
//				arr[a+1]=tmp;
////				ShowSort(arr,6);
//				active=true;
//			}
//		}
//	}
//	return arr;
//}
//
//int main(){
//	cout<<"masukan 5 angka : \n";
//	int arr[5];
//	for(int a=0;a<5;a++){
//      cin>>arr[a];
//	}
//	ShowSort(SortData(arr,5),5);
//}






//sort angka
#include <iostream>
#include <conio.h>

using namespace std;
//membuat fungsi menampilkan sort
void ShowS(int arr[],int size){
    for(int a=0;a<size;a++)
    cout<<" "<<arr[a];
    cout<<""<<endl;
}
//buat fungsi untuk sort angka
int* Sort(int arr[],int size){
bool active=true;
int a=1,tmp;
   while(active){
		active=false;
		a++;
//disini terjadi kemungkinan perulangan dari perpindahan value dalam array jika data dalam array ada 5 isilah size dengan 6 karena 
//karena var a di isi dengan 1 jika di ++ jadi var a=2, sehingga size-a=(6-2=4)
		for(int i=0;i<size-a;i++){
//setelah mendapatkan kemungkinan maka di bandingkan index perindex untuk mencari nilai terbsear. ilustrasi 5,2,3,1,4 
		if(arr[i]>arr[i+1]){ // saat pertamakali di ulang if(5>2)
		tmp=arr[i]; // isi var tmp dengan nilai index ke [0] = 5
		arr[i]=arr[i+1]; //isi array index ke [0] dengan index ke [1] = 2
		arr[i+1]=tmp; //isi array ke [1] denagn [0] = 5 
		              //maka aray saat ini[2,5,3,1,4](nilai terkecil siman di index terkecil nilai terbesar simpan di index terbesar)
		active=true;  //jika kondisi if masih terpenuhi maka lakukan perulangan hingga index ke 4 berisi nilai terbesar
		 }
		}
	}
return arr;
}
int main(){
   int arr[]={1,2,4,3,5};
   ShowS(Sort(arr,6),5);
}


