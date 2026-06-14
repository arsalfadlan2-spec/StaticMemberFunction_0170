#include <iostream>
#include <string>
using namespace std;

class Kendaraan {
private:
    int id;
    string nama;

public:
    // 1. Constructor tanpa parameter (Nilai Default)
    Kendaraan() {
        id = 0;
        nama = "Unknown";
    }

    // 2. Constructor hanya dengan parameter ID
    Kendaraan(int inputId) {
        id = inputId;
        nama = "Unknown";
    }

    // 3. Constructor hanya dengan parameter Nama
    Kendaraan(string inputNama) {
        id = 0;
        nama = inputNama;
    }

    // 4. Constructor dengan parameter lengkap
    Kendaraan(int inputId, string inputNama) {
        id = inputId;
        nama = inputNama;
    }

    // Method untuk menyajikan informasi kendaraan
    void tampilkanInfo() {
        cout << "ID Kendaraan   : " << id << endl;
        cout << "Nama Kendaraan : " << nama << endl;
        cout << "-----------------------" << endl;
    }
};

int main() {
    // Membuat objek dengan 4 cara inisialisasi berbeda
    Kendaraan k1;                           // Menggunakan constructor default
    Kendaraan k2(101);                      // Menggunakan constructor hanya ID
    Kendaraan k3("Yamaha Mio");             // Menggunakan constructor hanya Nama
    Kendaraan k4(202, "Toyota Avanza");     // Menggunakan constructor lengkap

    // Menyajikan informasi kendaraan ke layar
    cout << "=== INFORMASI DATA KENDARAAN ===" << endl << endl;
    
    cout << "Kendaraan 1 (Default):" << endl;
    k1.tampilkanInfo();

    cout << "Kendaraan 2 (Hanya ID):" << endl;
    k2.tampilkanInfo();

    cout << "Kendaraan 3 (Hanya Nama):" << endl;
    k3.tampilkanInfo();

    cout << "Kendaraan 4 (Lengkap):" << endl;
    k4.tampilkanInfo();

    return 0;
}