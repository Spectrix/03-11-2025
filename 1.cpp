#include <iostream>

using namespace std;


int penjumlahan(int bil1, int bil2);

int main() {
    int bil1, bil2;

    cout << "Masukkan bilangan 1 : ";
    cin >> bil1;
    cout << "Masukkan bilangan 2 : ";
    cin >> bil2;

    int hasil = penjumlahan(bil1, bil2);

    cout << "Hasil penjumlahan dari " << bil1 << " + " << bil2 << " = " << hasil << endl;

    return 0;
}


int penjumlahan(int bil1, int bil2) {
    return bil1 + bil2;
}