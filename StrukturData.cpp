#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace std;

int luas_pp(int p,int l){
	return p*l;
}

int main(){
	cout<<"luas Persegi 1 "<<luas_pp(50,40)<<endl;
	cout<<"luas Persegi 2 "<<luas_pp(30,20)<<endl;
	int angka[]={1,3,4,6,8,2};
    const int size= sizeof(angka);
    cout<<size;
	getch();
}


//int main(){
//	//perhitungan 2 luas persegi panjang
//	//Strukur data yang tidak efektif
//	int p1=50;
//	int l1=40;
//	int p2=30;
//	int l2=20;
//	int lpp1=p1*l1;
//	int lpp2=p2*l2;
//	cout<<"Luas Persegi 1 "<<lpp1 <<endl;
//	cout<<"Luas Persegi 2 "<<lpp2 <<endl;
//	getch();     
//}
