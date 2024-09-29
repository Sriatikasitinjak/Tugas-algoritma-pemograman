#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung komisi
double hitung_komisi(double penjualan) {
    double komisi;
    if (penjualan <= 500000) {
        komisi = penjualan * 0.10;  // Komisi 10% untuk penjualan <= 500000
    } else {
        komisi = 500000 * 0.10;  // Komisi 10% untuk 500000 pertama
        komisi += (penjualan - 500000) * 0.15;  // Komisi 15% untuk sisanya
    }
    return komisi;
}

int main() {
    int jumlah_selesman = 10;
    vector<double> penjualan(jumlah_selesman);
    vector<double> komisi(jumlah_selesman);
    double total_komisi = 0.0;

    // Input jumlah penjualan untuk tiap selesman
    for (int i = 0; i < jumlah_selesman; i++) {
        cout << "Masukkan jumlah penjualan untuk selesman " << i + 1 << ": ";
        cin >> penjualan[i];
        komisi[i] = hitung_komisi(penjualan[i]);
        total_komisi += komisi[i];
    }

    // Output komisi untuk tiap selesman
    cout << "\nKomisi yang diterima setiap selesman:\n";
    for (int i = 0; i < jumlah_selesman; i++) {
        cout << "Selesman " << i + 1 << ": Rp" << komisi[i] << endl;
    }

    // Output total komisi
    cout << "\nTotal komisi yang dibayarkan oleh PT. MURAI HARI: Rp" << total_komisi << endl;

    return 0;
}
