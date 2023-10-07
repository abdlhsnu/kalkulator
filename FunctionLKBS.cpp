#include <iostream>

// Fungsi untuk menghitung luas permukaan kubus
double hitungLuasKubus(double sisi) {
    return 6 * sisi * sisi;
}

int main() {
    double sisiKubus;

    std::cout << "Masukkan panjang sisi kubus: ";
    std::cin >> sisiKubus;

    double luasPermukaan = hitungLuasKubus(sisiKubus);

    std::cout << "Luas permukaan kubus dengan sisi " << sisiKubus << " adalah: " << luasPermukaan << std::endl;

    return 0;
}
