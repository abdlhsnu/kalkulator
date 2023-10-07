#include <iostream>
using namespace std;

int main() {
    double angka1, angka2, hasil;
    char operasi;

    // Meminta pengguna memasukkan dua angka
    cout << "Masukkan Angka Pertama: ";
    cin >> angka1;

     // Meminta pengguna memasukkan operasi yang diinginkan
    cout << "Masukkan Operasi (+, -, *, /): ";
    cin >> operasi;

    cout << "Masukkan Angka Kedua: ";
    cin >> angka2;

    // Melakukan operasi sesuai dengan pilihan pengguna
    switch (operasi) {
        case '+':
            hasil = angka1 + angka2;
            break;
        case '-':
            hasil = angka1 - angka2;
            break;
        case '*':
            hasil = angka1 * angka2;
            break;
        case '/':
            // Memeriksa pembagian oleh nol
            if (angka2 == 0) {
                cout << "Error! Tidak dapat membagi oleh nol." << endl;
                return 1; // Keluar dari program dengan kode kesalahan
            }
            hasil = angka1 / angka2;
            break;
        default:
            cout << "Operasi tidak valid." << endl;
            return 1; // Keluar dari program dengan kode kesalahan
    }

    // Menampilkan hasil perhitungan
    cout << "Hasil: " << hasil << endl;

    return 0;
}
