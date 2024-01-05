#include <iostream>

using namespace std;
int main(){
    string nama_mhs;
    int nilai;
    char index;

    cout << "masukan nama mahasiswa = " ;
    cin >> nama_mhs;

    cout << "masukan nilai mahasiswa = ";
    cin >> nilai;

    switch (nilai) {
        case 80 ... 100:
            index = 'A';
            break;
        case 70 ... 79:
            index = 'B';
            break;
        case 50 ... 69:
            index = 'C';
            break;
        case 40 ... 49:
            index = 'D';
            break;
        default:
            index = 'E';
            break;
    }

    cout << "Nama Mahasiswa: " << nama_mhs << endl;
    cout << "Nilai: " << nilai << endl;
    cout << "Indeks: " << index << endl;
}