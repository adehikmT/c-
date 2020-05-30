#include<conio.h>
#include<iostream>


using namespace std;


int main (){
	int pilihan;

	menu:
	system("cls");
	cout<<"========================";
	cout<<"=====Bangun Datar=====";
	cout<<"========================";
	cout<<endl;
	cout<<"1.PERSEGI";
	cout<<endl;
	cout<<"2.PERSEGI PANJANG";
	cout<<endl;
	cout<<"3.Lingkaran";
	cout<<endl;
	cout<<"4.Segitiga";
	cout<<endl;
	cout<<"5.exit"<<endl;
	cout<<"Masukan Pilihan :";
	cin>>pilihan;
	
if(pilihan==1){
	int  s1, s2;
	segi:
	system("cls");
	cout<<"PERSEGI";
	cout<<endl;
	cout<<"Masukan sisi 1 :";
	cin>>s1;
	cout<<"Masukan sisi :";
	cin>>s2;
	cout<<"nilai dari Persegi adalah  "<<s1 * s2;
	cout<<"\nUlangi (y/t)";
	char k;
	cin>>k;
	if(k=='y'){
		goto segi;
	} else if(k=='t'){
		goto menu;
	}
	

	
	
}else if(pilihan == 2){
	int p, l;
	segipanjang:
	system("cls");
	cout<<"Persegi Panjang";
	cout<<endl;
	cout<<"Masukan Panjang : ";
	cin>>p;
	cout<<"Masukan Lebar :";
	cin>>l;
	cout<<"Nilai dari Persegi panjang adalah : "<<p*l;
		cout<<"\nUlangi (y/t)";
	char segip;
	cin>>segip;
	if(segip=='y'){
		goto segipanjang;
	}else if(segip=='t');{
		goto menu;
	}
}else if(pilihan == 3){
		int r;
		lingkaran :
		system("cls");
	cout<<"LINGKARAN";
	double v=3.14;
	cout<<"Masukan nilai Ruang ";
	cin>>r;
	cout<<"NILAI Segitiga adalah : "<<v*r*r;
		cout<<"\nUlangi (y/t)";
		char a;
		cin>>a;
		if(a == 'y'){
			goto lingkaran;
		}else if (a=='t'){
			goto menu;
		}else{
				system("cls");
			cout<<"Data yang anda masukan Salah";
		}
	

}else if(pilihan == 4){
	int a,t;
	Segitiga :
	system("cls");
	cout<<"Segitiga";
	cout<<endl;
	cout<<"Masukan Alas ";
	cin>>a;
	cout<<"masukan Tinggi";
	cin>>t;
	cout<<"nilai segitiga adalah :"<<a*t;
	cout<<"\nUlangi (y/t)";
	char s;
	cin>>s;
	if(s=='y'){
		goto Segitiga;
	}else if (s=='t'){
		goto menu;
	}else{
				system("cls");
			cout<<"Data yang anda masukan Salah";
		}
		
}else if(pilihan==5){
system("cls");
exit(0);
}
 else {
	cout<<"Data yang anda masukan salah";
}
		getch();
}
