#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main() {
	//Inisialisasi atau deklarasi variabel
	int jum_beli, bayar, diskon,jumlah[50], harga[50], sub_tot[50];
	string nama_menu[50];
	float tot;
	
	cout<<"KASIR KEDAI MAKAN AYAM"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<endl;
	cout<<"Masukan Jumlah Menu : ";
	cin>>jum_beli; //Pengguna memasukan jumlah menu yang beli
	
	for (int i=0; i<jum_beli;i++){
		cout<<endl;
		cout<<"Masukan Menu Ke-"<<i+1<<endl;
		cout<<endl;
		
		cout<<"Nama Menu   : ";
		cin>>nama_menu[i]; //Pengguna input nama menu disimpan pada array nama_menu
		
		cout<<"Jumlah      : ";
		cin>>jumlah[i]; //Pengguna input jumlah disimpan pada array jumlah
		
		cout<<"Harga       : ";
		cin>>harga[i]; //Pengguna input harga disimpan pada array harga
		
		sub_tot[i]=jumlah[i]*harga[i]; // Menjumlahkan Harga sub total menu
		tot+=sub_tot[i]; //Menjumlahkan seluruh sub total menu
	}
	
	cout<<endl;
	cout<<"STRUK BELANJA KEDAI MAKAN AYAM"<<endl;
	cout<<"---------------------------------------------------------"<<endl;
	cout<<"No    Menu       Jumlah      Harga      sub Total"<<endl;
	for (int i=0;i<jum_beli;i++){
		cout<<i+1<<setw(12)<<nama_menu[i]<<setw(10)<<jumlah[i]<<setw(12)<<harga[i]<<setw(12)<<sub_tot[i]<<endl; //Menampilkan semua nilai array
	}
	cout<<"---------------------------------------------------------"<<endl;

	//Kondisi untuk menentukan diskon yang didapatkan berdasarkan total belanja
	if (tot>=45000){
		diskon=0.1*tot;
	}else {
		diskon=0;
	}
	
	//Menampilkan Keterangan
	cout<<"Jumlah Bayar : Rp."<<tot<<endl;//Menampilkan jumlah bayar (belum termasuk diskon)
	cout<<"Dikon        : Rp."<<diskon<<endl; //Menampilkan diskon
	cout<<"Total Bayar  : Rp."<<tot-diskon<<endl;//Menampilkan total harga yang harus dibayar
	cout<<"Bayar        : Rp.";
	cin>>bayar; // Input dari user untuk jumlah yang dibayar
	cout<<"Kembali      : Rp."<<(bayar-(tot-diskon))<<endl; // Menampilkan uang kembali
	
}
