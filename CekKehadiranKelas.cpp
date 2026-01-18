#include <iostream>
using namespace std;

int main() {
    int n;
    int hadir = 0, tidakHadir = 0;
    int status;

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Mahasiswa " << i << " (1=hadir, 0=tidak): ";
        cin >> status;

        if (status == 1) {
            hadir++;
        } else if (status == 0) {
            tidakHadir++;
        }
    }

    double persentase = (double)hadir / n * 100;

    cout << "\nHadir: " << hadir << endl;
    cout << "Tidak hadir: " << tidakHadir << endl;
    cout << "Persentase hadir: " << persentase << "%" << endl;

    return 0;
}

