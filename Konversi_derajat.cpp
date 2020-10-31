#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	float C, F;
	C=30;
	F=(1.8*C)+32;
	cout<<"Nama	: Ahmad subadri" << endl;
	cout<<"Nim	: 17121035" << endl;
	cout<<"Prodi	: Sistem informasi" << endl;
	cout<<" "<< endl;
		/*cout<<"Perubahan derajat Celcius ke Fahrenheat sesuai input data yang dimasukan"  << endl;
		cout<<" secara otomatis dengan rumu F= (1.8*C)+32"<< endl;
		cout<<" "<< endl;
		cout<<"Derajat Celcius ="<<C<<"'c"<< endl;
		cout<<"Hasil konversi celsius ke fahrenheat ="<<F<< endl;*/
	
	//input keyboard
	cout<<"perubahan Celcius ke Fahrenheat secara otomatis dengan menginput data Celcius yang diinginkan" << endl;
	cout<<" "<< endl;
	cout<<"Derajat Celcius =",cin>>C;
	cout<<"Derajat Fahrenheat ="<<(1.8*C)+32<< endl;
	cout<<" "<< endl;
	cout<<"Hasil Fahrenheat yang didapat diperoleh dari rumus"<< endl;
	cout<<"		F=(1.8*C)+32" << endl;
	
	return 0;
}
