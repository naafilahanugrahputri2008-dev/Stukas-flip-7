#include <iostream>
using namespace std;

int bin(int data[], int n, int x) {
    int ki = 0;
    int ka = n - 1;

    while (ki <= ka) {
        int mid = (ki + ka) / 2;

        if (data[mid] == x) {
            return mid;
        } else if (x < data[mid]) {
            ka = mid - 1;
        } else {
            ki = mid + 1;
        }
    }
    return -1;
}

int main() {
    int n, x;

    cout << "Jumlah data: ";
    cin >> n;

    int data[n];

    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    cin >> x;

    int hasil = bin(data, n, x);

    if (hasil != -1) {
        cout << "Ditemukan di indeks " << hasil << endl;
    } else {
        cout << "Indeks tidak ditemukan" << endl;
    }

    return 0;
}
