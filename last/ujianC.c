#include <stdio.h>

int main(){
    int uang;

    printf("Masukan Jumlah Uang = ");
    scanf("%d", & uang);

// my rumus
    int u1000 = uang / 1000;
    int u500 = uang / 500 % 2;
    int u100 = uang / 100 % 5;
    int u50 = uang / 50 % 2;
    int u25 = uang / 25 % 2;

// rumus alya
    // int u1000 = 25 * 40 / 500;
    // int u500 = 25 * 20 / 500;
    // int u100 = 25 * 4 / 50;
    // int u50 = 25 * 2 / 50;
    // int u25 = 25 * 1 / 25;

    printf("1000 = %d\n", u1000);
    printf("500 = %d\n", u500);
    printf("100 = %d\n", u100);
    printf("50 = %d\n", u50);
    printf("25 = %d\n", u25);
}