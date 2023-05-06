#include <iostream>
using namespace std;
int main() {
    int namamu = 0; // inisialisasi hitungan bilangan
    for (int i = 10; i <= 50; i++) {
        cout << i << " "; // cetak bilangan
        namamu++; // tambahkan hitungan
    }
    cout << endl;
    cout << "Jumlah bilangan: " << namamu << endl;

    return 0;
}

