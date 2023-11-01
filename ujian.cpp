#include <iostream>

using namespace std;
int main(){
    int uang;

    cout << "Masukan Jumlah Uang = ";
    cin >> uang;

    int p1000 = uang / 1000;
    
    int p500 = (uang / 500) % 2 ;

    int p100 = (uang / 100) % 5;
    
    int p50 = (uang / 50) % 2;

    int p25 = (uang / 25) % 2;

// rumus alya
    // int u1000 = 25 * 40 / 500;
    // int u500 = 25 * 20 / 500;
    // int u100 = 25 * 4 / 50;
    // int u50 = 25 * 2 / 50;
    // int u25 = 25 * 1 / 25;

    cout << "1000 = " << p1000 << endl;
    cout << "500 = " << p500 << endl;
    cout << "100 = " << p100 << endl;
    cout << "50 = " << p50 << endl;
    cout << "25 = " << p25 << endl;
}