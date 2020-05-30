/*
1.array multi dimensi
2.algoritma serching dan sorting 
3.membuat aplikasi
4.memperbaiki error
5.prosedur dan function
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
//array satu dimensi
//int arr[]={1,2,3,4,5};
//cout<<arr[0]<<endl;
//array 2 dimeni
//int arri[2][3]={{1,2,3},{2,3,4}};
//cout<<arri[0][0]<<endl;
//multi dimensi
int arry[1][1][6]={{{1,2,3,4,5,6}}};
for(int a=0;a<1;a++){
	for(int y=0;y<1;y++){
		for(int k=0;k<6;k++){
			cout<<"Ini Nilai Array ke 3 berada di index ke "<<k<<" value="<<arry[a][y][k]<<endl;
		}
	}
}
getch();
}
