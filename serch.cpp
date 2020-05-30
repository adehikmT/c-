#include <iostream>
#include <conio.h>

using namespace std;

int main(){
	int in,a=0;
	bool i=true;
	cout<<"Array[2,3,1,5,4]"<<endl;
	cout<<"Masukan angka untuk mencari index : ";
	cin>>in;
	int angka[]={2,3,1,5,4};
	for(a;a<5;a++){
		if(angka[a]==in){
			cout<<"\n angka yang anda masukan berada di index ke "<<a<<" value = "<<angka[a];
			i=false;
		}
	}
	if(i){
		cout<<"\n Data Tidak Di Temukan";
	}
}
