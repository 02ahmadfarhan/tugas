#include <stdio.h>

int main(){

    // deklarasi variable
    int jam = 4000 / 3600;
    int sisaDetik = 4000 % 3600;
    int menit = sisaDetik / 60;
    int detik = sisaDetik % 60;

    // lama percakapan
    int total =  jam + menit + detik;

    // hasil
    printf("Hasil lama percakapan = jam %d, menit %d, detik %d\n", jam, menit, detik);
    printf("total = %d\n", total);
}