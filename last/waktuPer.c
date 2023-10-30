#include <stdio.h>

int main(){
    /*Algoritma Lama Percakapan 4000 detik {
        maka 4000 detik = 1 jam + 6 menit + 40 detik
    }*/

    // deklarasi variable dan nilai
    int jam = 4000 / 3600; // ()
    int sisaDetik = 4000 % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;

    // jumlah lama percakapan
    int jumlah =  jam + menit + detik;

    // hasil
    printf("Hasil Lama Percakapan = jam %d, menit %d, detik %d\n", jam, menit, detik);
    printf("jumlah = %d\n", jumlah);
}