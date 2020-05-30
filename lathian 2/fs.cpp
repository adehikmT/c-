#include <iostream>
#include <conio.h>

using namespace std;
//fungsi hitung
int hitung(int s){
	return s+s;
}
//
void hitunp(int s){
	cout<<s+s;
}

int main(){
	int s=hitung(4);
    int arr[3][2]={{1,2},{1,2},{1,2}};
    cout<<arr[0][0];
	cout<<hitung(4)<<endl;
	hitungp(4);
	getch();
}
