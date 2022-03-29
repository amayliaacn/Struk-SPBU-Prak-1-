#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
using namespace std;
main()
{
char pembelian;
int kode, porsi, jumlah, banyak,jarak;
long int total,diskon,akhir, bayar, harga,duit,kembalian,ongkir;
atas:
cout<<"====================================="<<endl;
cout<<"========== RUMAH MAKAN Ceria =========="<<endl;
cout<<"====================================="<<endl;
cout<<endl;
cout<<"Menu Utama :"<<endl;
cout<<"1) Ayam geprek (Rp.21000)"<<endl;
cout<<"2) Ayam goreng (Rp.17000)"<<endl;
cout<<"3) Udang goreng (Rp.19000)"<<endl;
cout<<"4) Cumi goreng (Rp.20000)"<<endl;
cout<<"5) Ayam baka (Rp.25000)"<<endl;
cout<<"6) Keluar"<<endl;	
cout<<endl;
cout<<"Jumlah Menu Yang Dipesan = ";
cin>>banyak;
jumlah=1;
bayar=0;
for(jumlah=1;jumlah<=banyak;jumlah++)
{
ulang:
cout<<" Masukan Kode Menu = ";
cin>>kode;
if (kode==1)
{
cout<<" Nama Makanan = Ayam geprek" <<endl;
cout<<" Jumlah Porsi = ";
cin>>porsi;
harga=21000;
total=harga*porsi;
cout<<" Total Harga  = Rp"<<total <<endl;
}
else
if (kode==2)
{
cout<<" Nama Makanan = Ayam goreng" <<endl; 
cout<<" Jumlah Porsi = ";
cin>>porsi;
harga=17000;
total=harga*porsi;
cout<<" Total Harga  = Rp"<<total <<endl;
}
