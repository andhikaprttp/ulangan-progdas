

#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "===[ XTKJ 1 ]===\n";
    cout << "Masukkan tiga bilangan: ";
    cin >> a >> b >> c;

    // cari bilangan terbesar
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    // cari bilangan terkecil
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }

    // cek apakah bilangan positif atau negatif
    if (a > 0) {
        cout << a << " adalah bilangan positif" << endl;
    } else if (a < 0) {
        cout << a << " adalah bilangan negatif" << endl;
    } else {
        cout << a << " adalah nol" << endl;
    }

    if (b > 0) {
        cout << b << " adalah bilangan positif" << endl;
    } else if (b < 0) {
        cout << b << " adalah bilangan negatif" << endl;
    } else {
        cout << b << " adalah nol" << endl;
    }

    if (c > 0) {
        cout << c << " adalah bilangan positif" << endl;
    } else if (c < 0) {
        cout << c << " adalah bilangan negatif" << endl;
    } else {
        cout << c << " adalah nol" << endl;
    }
/*
Tuliskan dan buatkan program C++ untuk memeriksa 3 bilangan yang diinput. output harus memunculkan bilangan yang paling besar dan bilangan kecil, lalu apakah bilangan itu positif atau negatif!
*/
    cout << "Bilangan terbesar adalah " << max << endl;
    cout << "Bilangan terkecil adalah " << min << endl;

    return 0;
}




