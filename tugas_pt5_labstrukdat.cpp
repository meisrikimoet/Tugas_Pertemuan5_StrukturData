
#include <iostream>
using namespace std;

int main() {
    int n, cari;
    int nilai[100];

    cout << "Masukkan jumlah mahasiswa: ";
    cin >> n;

    cout << "Masukkan nilai secara ascending:\n";
    for (int i = 0; i < n; i++) {
        cout << "Nilai ke-" << i + 1 << ": ";
        cin >> nilai[i];
    }

    cout << "\nMasukkan nilai yang dicari: ";
    cin >> cari;

    int kiri = 0;
    int kanan = n - 1;
    int tengah;
    int indeks = -1;

    while (kiri <= kanan) {
        tengah = (kiri + kanan) / 2;

        if (nilai[tengah] == cari) {
            indeks = tengah;
            break;
        }
        else if (cari < nilai[tengah]) {
            kanan = tengah - 1;
        }
        else {
            kiri = tengah + 1;
        }
    }

    if (indeks != -1) {
        cout << "\nNilai ditemukan!" << endl;
        cout << "Indeks: " << indeks << endl;
    }
    else {
        cout << "\nNilai tidak ditemukan!" << endl;
    }

    return 0;
}
