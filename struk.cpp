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
	if(a == 1){
		harga = 7000;
		cout<<"Masukkan jumlah liter yang diinginkan : ";cin>>liter;
		total = harga * liter;
		totalbelanja += total;
		cout<<"Total : Rp. "<<total;
		cout<<endl;
	}
	if(a == 2){
		harga = 9000;
		cout<<"Masukkan jumlah liter yang diinginkan : ";cin>>liter;
		total = harga * liter;
		totalbelanja += total;
		cout<<"Total : Rp. "<<total;
		cout<<endl<<endl;
	}
		
	cout<<"\nPilih Menu No 3 Untuk Mencetak Struk Anda : ";cin>>pilih;
	cout<<endl;
	if(pilih==3){
		if(harga==7000){
			keluaran<<"====================================="<<endl;
			keluaran<<"========== Nota SPBU Ceria =========="<<endl;
			keluaran<<"====================================="<<endl;
			keluaran<<"Nama  : "<<nama<<endl;
			keluaran<<"Jenis Bensin : Pertalite"<<endl;
			keluaran<<"Masukkan harga per liter : "<<harga<<endl;
			keluaran<<"Masukkan jumlah liter yang diinginkan : "<<liter<<endl;
			total = harga * liter;
			totalbelanja += total;
			keluaran<<"Total : Rp. "<<total;
			keluaran<<endl<<endl;
		}
		if(harga==9000){
		keluaran<<"====================================="<<endl;
		keluaran<<"========== Nota SPBU Ceria =========="<<endl;
		keluaran<<"====================================="<<endl;
		keluaran<<"Nama  : "<<nama<<endl;
		keluaran<<"Jenis Bensin : Pertamax"<<endl;
		keluaran<<"Masukkan harga per liter : "<<harga<<endl;
		keluaran<<"Masukkan jumlah liter yang diinginkan : "<<liter<<endl;
		total = harga * liter;
		totalbelanja += total;
		keluaran<<"Total : Rp. "<<total;
		keluaran<<endl<<endl;
		}
	}
}
