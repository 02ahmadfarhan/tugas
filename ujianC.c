#include <stdio.h>

int main(){
    int uang;

    printf("Masukan Jumlah Uang = ");
    scanf("%d", & uang);

    int u1000 = uang / 1000;
    int u500 = uang / 500 % 2;
    int u100 = uang / 100 % 5;
    int u50 = uang / 50 % 2;
    int u25 = uang / 25 % 2;

    printf("1000 = %d\n", u1000);
    printf("500 = %d\n", u500);
    printf("100 = %d\n", u100);
    printf("50 = %d\n", u50);
    printf("25 = %d\n", u25);
}