#include<iostream>
#include<iomanip>
#include<fstream>
#include<string>
using namespace std;
int main(){
	ofstream keluaran;
	keluaran.open("Struk POM.txt");
	int a,harga,liter,pilih,total;
	string nama;
	float totalbelanja;
	
	cout<<"====================================="<<endl;
	cout<<"========== SPBU Ceria =========="<<endl;
	cout<<"====================================="<<endl;
	cout<<endl;
	cout<<"Menu Utama :"<<endl;
	cout<<"1) Pertalite (Rp.7000/liter)"<<endl;
	cout<<"2) Pertamax (Rp.9000/liter)"<<endl;
	cout<<"3) Keluar"<<endl;
	cout<<endl;
	cout<<"Masukkan nama   : ";cin>>nama;
	cout<<"Masukkan pilihan  : ";cin>>a;
}
