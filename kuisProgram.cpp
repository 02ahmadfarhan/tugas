#include <iostream>

using namespace std;
int main(){
    string golongan;
    int jamKerja, upahPerJam, totalUpah, lembur, normal, upahLembur;

    cout << "Masukan  golongan (A, B, C, D) = ";
    cin >> golongan;

    cout << "Masukan Jumlah Jam Kerja = ";
    cin >> jamKerja;

    if(golongan == "A"){
        upahPerJam = 4000;
    }else if(golongan == "B"){
        upahPerJam = 5000;
    }else if(golongan == "C"){
        upahPerJam = 6000;
    }else if(golongan == "D"){
        upahPerJam = 7500;
    }else{
        cout << "Golongan yang anda masukan tidak ada!!";
    }

    if(jamKerja <= 48){
        totalUpah = jamKerja * upahPerJam;
    }else{
        normal = 48;
        lembur = jamKerja - normal;
        upahLembur = 3000;

        totalUpah = normal * upahPerJam + lembur * upahLembur;
    }

    cout << "Total Upah Yang Di Dapatkan : Rp. " << totalUpah << endl;
}