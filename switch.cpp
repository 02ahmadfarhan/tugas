#include <iostream>

using namespace std;
int main(){
    int namaKota, provinsi;

    cout << "Masukan Nama Kota = ";
    cin >> namaKota;

    namaKota = provinsi;
    switch (provinsi)
    {
    case 'surabaya' :
        cout << "--> Jawa Timur" << endl;
        break;
    
    default:
        break;
    }
}