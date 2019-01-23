#include<iostream>
using namespace std;

int main()
{
	float p1,p2,hasil;
	cout<<"Nama  = Danu Adiputra"<<endl;
	cout<<"NIM   = 311810929"<<endl;
	cout<<"Kelas = 18.B.2"<<endl<<endl;
	cout<<"MENENTUKAN BILANGAN TERBESAR DAN TERKECIL"<<endl<<endl;
	cout<<"Masukkan bilangan pertama = ";cin>>p1;
	cout<<"Masukkan bilangan kedua   = ";cin>>p2;
	cout<<"Maka "<<endl;
	if(p1>p2)
	cout<<"Bilangan pertama lebih besar";
	else if(p1<p2)
	cout<<"Bilangan kedua lebih besar";
	else if(p1=p2)
	cout<<"Kedua bilangan sama besar";

}
