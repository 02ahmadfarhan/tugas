#include <stdio.h>

int main(){
    
    // gajiBersih = gajiPokok = 3000 + tunjangan - pajak
    // tunjangan dihitung 20% dari gajiPokok
    // pajak = 15% dari (gajiPokok + tunjangan)

    // deskripsi variable
    float gajiPokok, gajiBersih, tunjangan, pajak;

    // input gaji
    printf("Masukan jumlah gaji = ");
    scanf("%f", gajiPokok);

    // rumus tunjangan
    tunjangan = gajiPokok - (gajiPokok * 20 / 100);

    // pajak
    // pajak = (gajiPokok + tunjangan) * 15 / 100;

    // gaji bersih
    // gajiBersih = gajiPokok + tunjangan - pajak;

    // hasil
    printf("Gaji Bersih = %2f\n", tunjangan);
}