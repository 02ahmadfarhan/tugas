#include <iostream>
using namespace std;

int main() {
    
    // gajiBersih = gajiPokok = 3000 + tunjangan - pajak
    // tunjangan dihitung 20% dari gajiPokok
    // pajak = 15% dari (gajiPokok + tunjangan)
    
    // int gajiPokok = 3000; // Gaji pokok awal (misalnya 3000)
    float gajiPokok;
    cout << "Masukan jumlah gaji awal = ";
    cin >> gajiPokok;
    
    float tunjangan = gajiPokok - (gajiPokok * 20) / 100; // Menghitung tunjangan (20% dari gaji pokok)
    float pajak = gajiPokok - tunjangan * 15 / 100; // Menghitung pajak (15% dari gaji pokok + tunjangan)
    float gajiBersih = gajiPokok + tunjangan - pajak; // Menghitung gaji bersih

    // Menampilkan hasil perhitungan
    cout << "Gaji Pokok: " << gajiPokok << endl;
    cout << "Tunjangan: " << tunjangan << endl;
    cout << "Pajak: " << pajak << endl;
    cout << "Gaji Bersih: " << gajiBersih << endl;
}