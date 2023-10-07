#include <iostream>
using namespace std;

int main()
{
    // Membuat array 2 dimensi dengan ukuran 3 baris dan 4 kolom
    int a[3][4];

    // Mengisi elemen array dengan input dari pengguna
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << "Masukkan nilai untuk a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }

    // Menampilkan isi elemen array
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}