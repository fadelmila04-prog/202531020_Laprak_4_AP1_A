#include <iostream>
using namespace std;

int main() {
    int n;
    long long nominal, total = 0;

    cout << "Masukkan jumlah hari: ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Uang saku hari ke-" << i << ": ";
        cin >> nominal;
        total += nominal;
    }
    cout << endl;
    cout << "Total: " << total << endl;

    return 0;
}