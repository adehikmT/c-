#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int cari;
	bool yes=true;
	cout<<"Data Array [1,6,0,9,5]"<<endl;
	cout<<"Masukan value index yang ingin di cari : ";
	cin>>cari;
	int arr[]={1,6,0,9,5};
	for(int a=0;a<5;a++){
		if(arr[a]== cari){
			cout<<"\n Data Yang Anda Cari Berada di Index ke : "<<a;
			yes=false;
		}
	}
	
	if(yes){
		cout<<"\n Data Tidak Ditemukan";
	}
}
