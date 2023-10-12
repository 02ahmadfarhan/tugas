#include <iostream>
#include <ostream>

using namespace std;

int main(){
    float jumlahBarang, hargaBarang, totalHarga, diskon, afterDiskon;

    cout << "Masukan jumlah barang : ";
    cin >> jumlahBarang;

    cout << "Masukan harga barang : Rp. ";
    cin >> hargaBarang;

    totalHarga = jumlahBarang * hargaBarang;

    diskon = totalHarga - (totalHarga * 5 / 100); // perhitungan diskon 5%

    // cth : totalHarga - (totalHarga * 5 / 100) -> kalo kaya gini bisa tapi susah di pahami, by me
    // diskon = (totalHarga * 5) / 100;
    afterDiskon = totalHarga - diskon;
    // menurutku kalau di bagi kaya gini mudah di pahami

    cout << "jumlah barang " << jumlahBarang << endl;
    cout << "harga barang " << hargaBarang << endl;
    cout << "setelah di diskon 5% " << diskon << endl;
}