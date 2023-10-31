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

    cout << "1000 = " << p1000 << endl;
    cout << "500 = " << p500 << endl;
    cout << "100 = " << p100 << endl;
    cout << "50 = " << p50 << endl;
    cout << "25 = " << p25 << endl;
}