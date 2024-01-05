#include <iostream>

using namespace std;
int main(){
    // deskripsi
    string namaPaket;
    int harga,banyak,total,pajak,jumlah,nomor;

    cout << "Paket Menu Makanan di Cafe Angin Duduk" << endl;
    cout << "1. Paket Spesial" << endl;
    cout << "2. Paket Lengkap" << endl;
    cout << "3. Paket Biasa Saja" << endl;

    cout << "Masukan nomor paket menu : ";
    cin >> nomor;

    if(nomor == 1){

        // deskripsi 1
        cout << " #### Menu No 1 #### " << endl;
        namaPaket = "Paket Spesial";
        harga = 400000;

        cout << "Nama Paket : " << namaPaket << endl;
        cout << "Harga Paket : Rp. " << harga << endl;
        cout << "Banyak Paket : ";
        cin >> banyak;

        // mulai rumus
        total = banyak * harga;
        cout << "Total Bayar : Rp. " << total << endl;
        pajak = total * 10/100;

        cout << "Pajak PPN (10%) : Rp. " << pajak << endl;
        jumlah = total + pajak;

        cout << "Jumlah Bayar : Rp. " << jumlah << endl;
        cout << " ===== Terimakasih dan Datang Kembali ===== " << endl;
    }else if(nomor == 2){

        // deskripsi 2
        cout << " #### Menu No 2 #### " << endl;
        namaPaket = "Paket Lengkap";
        harga = 200000;

        cout << "Nama Paket : " << namaPaket << endl;
        cout << "Harga Peket : Rp. " << harga << endl;
        cout << "Banyak Paket : ";
        cin >> banyak;

        // rumus
        total = banyak * harga;
        cout << "Total Bayar : Rp. " << total << endl;
        pajak = total * 0.1;

        cout << "Pajak PPN (10%) : Rp. " << pajak << endl;
        jumlah = pajak + total;

        cout << "Jumlah Bayar : Rp. " << jumlah << endl;
        cout << " ===== Terimakasih dan Datang Kembali ===== \n";
    }else if(nomor == 3){

        // deskripsi 3
        cout << " #### Menu No 3 #### " << endl;
        namaPaket = "Paket Biasa Saja";
        harga = 100000;

        cout << "Nama Paket : " << namaPaket << endl;
        cout << "Harga Paket : Rp. " << harga << endl;
        cout << "Banyak Paket : ";
        cin >> banyak;

        // rumus
        total = banyak * harga;
        cout << "Total Bayar : Rp. " << total << endl;
        pajak = total * 0.1;

        cout << "Pajak PPN (10%) : Rp. " << pajak << endl;
        jumlah = pajak + total;

        cout << "Jumlah Bayar : Rp. " << jumlah << endl;
        cout << " ===== Terimakasih dan Datang Kembali ===== " << endl;
    }else{
        cout << "Hanya nomor (1, 2, 3) selain itu tidak ada!!" << endl;
        cout << " ===== Terimakasih dan Datang Kembali ===== " << endl;

    }
}