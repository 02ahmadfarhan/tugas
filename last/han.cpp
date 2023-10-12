#include <iostream>
#include <string>

using namespace std;
int main(){

    // Mendeklarasikan variable
    int jumlahBarang = 3;
    float diskon,total;

    // di bawah, saya menggunakan string untuk menggunakan tipe data string atau fungsi-fungsi yang berkaitan dengan string dalam program saya.
    string namaBarang[jumlahBarang]; // ini adalah contoh penggunaan array like [isi]
    float hargaBarang[jumlahBarang]; // ini juga sama

    // Rumus ini menggunakan full perulangan untuk mudah di pelajari.

    // Ceritanya ini program toko :D
        cout << "===//// Ini Adalah Toko \\\\===\n" << endl;

    // Menggunakan perulangan untuk menginput barang dan harga;
    for(int i = 0; i < jumlahBarang; i++){
        cout << "Masukan nama barang ke-" << (i + 1) << ": ";
        cin >> namaBarang[i]; // untuk 'i', akan error jika tidak menggunakan array
        cout << "Harga barang " << (i + 1) << ": Rp. ";
        cin >> hargaBarang[i]; // ini juga;
    }

    // Menghitung total harga
    total = 0.0;
    for(int i = 0; i < jumlahBarang; i++){
        total += hargaBarang[i];
    }

    // Kien rumus diskon 5%
    diskon = (5.0 * total) / 100; // 5%
    float afterDiskon = total - diskon;

    // Daftar menu dan harga yang di pesan dan di diskon 5%
    cout << "\n ==== Daftar ==== \n" << endl;
    for(int i = 0; i < jumlahBarang; i++){
        cout << "Nama barang ke-" << (i + 1) << ": " << namaBarang[i] << " Rp." << hargaBarang[i] << endl;
    }

    // Jumlah sebelum di diskon!
    cout << "\nTotal harga sebelum di diskon : Rp. " << total << endl;

    // Setelah di diskon 5%
    cout << "Harga Setelah di diskon : Rp. " << afterDiskon << endl;

    // Copyright dulu gak sih, by @Farhan
    // hehehe
    // Thanks for attention

}