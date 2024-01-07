#include <iostream>

using namespace std;
int main(){
    string namaPaket;
    int nomor,harga,banyak,total,pajak,jumlah;

    cout << "Pilih Menu Minuman di Udin Coffee " << endl;
    cout << "1. Paket VIP\n";
    cout << "2. Paket Spesial\n";
    cout << "3. Paket Super" << endl;

    cout << "Pilih paket yang kamu mau : ";
    cin >> nomor;

    switch (nomor)
    {
    case 1:
        /* deskripsi */
        cout << " ##### Menu No 1 ##### \n";
        namaPaket = "Paket VIP";
        harga = 400000;
        cout << "Nama Paket : " << namaPaket << endl;
        cout << "Harga Paket : Rp. " << harga << endl;
        cout << "Banyak Paket : "; cin >> banyak;
        total = banyak * harga;
        cout << "Total Bayar : Rp. " << total << endl;
        pajak = total * 0.1;
        cout << "Pajak PPN (10%) : Rp. " << pajak << endl;
        jumlah = total + pajak;
        cout << "Jumlah Bayar : Rp. " << jumlah << endl;
        cout << " ===== TERIMAKASIH ===== " << endl;
        break;
    
    default:
        cout << "Tidak Ada!!" << endl; 
        break;
    }
}