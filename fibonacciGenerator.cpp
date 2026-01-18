#include <iostream>
using namespace std;

int main() {
    int pilihan;

    do {
        cout << "=== FIBONACCI GENERATOR ===" << endl;
        cout << "1) n suku" << endl;
        cout << "2) sampai <= m" << endl;
        cout << "3) exit" << endl;
        cout << "Pilih: ";
        cin >> pilihan;

        if (pilihan == 1) {
            int n;
            cout << "Masukkan n: ";
            cin >> n;

            if (n <= 0) {
                cout << "Input tidak valid!" << endl << endl;
                continue;
            }

            cout << "\nHasil (" << n << " suku):" << endl;

            int a = 0, b = 1;
            for (int i = 1; i <= n; i++) {
                cout << a << " ";
                int next = a + b;
                a = b;
                b = next;
            }
            cout << "\n\n";

        } else if (pilihan == 2) {
            int m;
            cout << "Masukkan m: ";
            cin >> m;

            if (m < 0) {
                cout << "Input tidak valid!" << endl << endl;
                continue;
            }

            cout << "\nHasil (<= " << m << "):" << endl;

            int a = 0, b = 1;
            while (a <= m) {
                cout << a << " ";
                int next = a + b;
                a = b;
                b = next;
            }
            cout << "\n\n";

        } else if (pilihan == 3) {
            cout << "Program selesai." << endl;
            break;
        } else {
            cout << "Pilihan tidak valid!" << endl << endl;
        }

    } while (true);

    return 0;
}
