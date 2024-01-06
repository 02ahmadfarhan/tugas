#include <cstddef>
#include <iostream>
#include <string>

using namespace std;
int main(){
    /* 
    1. Rurj 2. Rudjfi. 3. Sisjps. 4. Hsjsj
    Biar jadi rapih kaya dibawah tu gimana
    1. GG 2. Uuu 3. PPP 4. Tygg
    */
    string nama[5] = {"zaki","samsul","udin","abdul", "didin"};
    int penampung = sizeof(nama) / sizeof(nama[0]);

    cout << "\n === Before === \n" << endl;
    for(int a = 0; a < penampung; a++){
        cout << nama[a] << endl;
    }

    for(int i = 0; i < penampung - 1; i++){
        for(int k = 0; k < penampung - i - 1; k++){
            if(nama[k] > nama[k+1]){
                // mengurutkan nama menggunakan bubble sort
                string temp = nama[k];
                nama[k] = nama[k + 1];
                nama[k + 1] = temp;
            }
        }
    }

    cout << "\n === After ===\n" << endl;
    // Menampilkan nama yang di urutkan
    for(int b = 0; b < penampung; b++){
        cout << nama[b] << endl;
    }
}