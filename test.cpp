#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

class Halaman{
	public:
		void Color(unsigned short color){
			HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
			SetConsoleTextAttribute(h,color);			
		}
		void Header(){
			Color(13);
			cout<<"================================"<<endl;Color(10);
			cout<<"======= Rumus Perhitungan ======"<<endl;Color(11);
			cout<<"================================"<<endl;Color(12);
			cout<<"=== 1. Volume Bangun Ruang  ===="<<endl;Color(13);
			cout<<"=== 2. Luas Bangun Datar    ===="<<endl;Color(14);
			cout<<"=== 3. Exit                 ===="<<endl;Color(15);
			cout<<"================================"<<endl;
		}
		
		void Body(){
			int pilih;
			cout<<"Pilih : ";
			cin>>pilih;
		}
};

int main(){
    Halaman hl;
    hl.Header();
    hl.Body();
   getch();
}
