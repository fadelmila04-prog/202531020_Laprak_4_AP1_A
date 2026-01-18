#include <iostream>
using namespace std;

int main() {
    int kode_rahasia = 7;
    int tebakan;
    int i;

    for (i = 1; i <= 3; i++) {
        cout << "Percobaan " << i << "/3 - Tebak: ";
        cin >> tebakan;

        if (tebakan == kode_rahasia) {
            cout << "Benar!" << endl;
            break;
        } else {
            cout << "Salah!" << endl;
        }
    }

    if (i > 3) {
        cout << "Kalah! Angka = " << kode_rahasia << endl;
    }

    return 0;
}