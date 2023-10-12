#include <iostream>

using namespace std;
int main(){

    // ini versi singkat
    // deskripsi
    float jumlahBarang = 3, diskon;

    // Deskripsi
    cout << "==== Masukan Nama Barang dan Harga ====\n" << endl;
    float a,b,c;
    string nA,nB,nC;
    cout << "Nama Barang ke-1 : ";
    cin >> nA;
    cout << "masukan harga barang Rp. ";
    cin >> a;
    cout << "Nama Barang ke-2 : ";
    cin >> nB;
    cout << "masukan harga barang Rp. ";
    cin >> b;
    cout << "Nama Barang ke-3 : ";
    cin >> nC;
    cout << "masukan harga barang Rp. ";
    cin >> c;

    float allHarga = a + b + c;
    string allName = nA + nB + nC; 
    // sebenernya fungsi allName gak ada, cuma biar banyak aja hehehe

    // Daftar Menu
    cout << "\n=== Menu yang di pesan ===\n" << endl;
    cout << nA << " : Rp. " << a << endl;
    cout << nB << " : Rp. " << b << endl;
    cout << nC << " : Rp. " << c << endl;

    // Rumus diskon
    diskon = (5.0 * allHarga) / 100;

    float total = allHarga - diskon;
    cout << "Sebelum di diskon : Rp. " << allHarga <<endl;
    cout << "Sesudah di diskon 5% : Rp. " << total << endl;

    // Don't forget Copyright by @Farhan
    
}

// Next
// Rumus sum
// float sum = 0.0;
//     for(int n = 0; n <= 4; n++){
//         sum += 3*n;
//     }
//     cout << sum << endl;