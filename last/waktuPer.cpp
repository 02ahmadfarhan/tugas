#include <iostream>

using namespace std;
int main(){

    // Deklarasi Nilai dan variable

    int jam = 4000 / 3600;
    int sisaDetik = 4000 % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;

    // Hasil dari lama percakapan
    float total = jam + menit + detik;

    // Result
    cout << "jam = " << jam << endl;
    cout << "sisaDetik = " << sisaDetik << endl;
    cout << "menit = " << menit << endl;
    cout << "detik = " << detik << endl;

    cout << "\n======\n" << endl;

    cout << "Hasil dari lama percakapan = " << jam << " jam, " << menit << " menit, " << detik << " detik " << endl;
    cout << "Hasil dari (jam + menit + detik) = " << total << endl;
}