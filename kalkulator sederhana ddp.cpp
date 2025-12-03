#include <iostream>
using namespace std;
float tambah(float a, float b) {
    return a + b;
}

float kurang(float a, float b) {
    return a - b;
}

float kali(float a, float b) {
    return a * b;
}

float bagi(float a, float b) {
    if (b == 0) {
        cout << "Error: Tidak bisa membagi dengan nol!" << endl;
        return 0;
    }
    return a / b;
}
int main() {
    float a, b;
    int pilihan;
    char ulang;

    do {
        cout << "\n=====================================\n";
        cout << "        KALKULATOR SEDERHANA        \n";
        cout << "=====================================\n";
        cout << "1. Tambah\n";
        cout << "2. Kurang\n";
        cout << "3. Kali\n";
        cout << "4. Bagi\n";
        cout << "5. Keluar\n";
        cout << "-------------------------------------\n";
        cout << "Pilih menu (1-5): ";
        cin >> pilihan;

        if (pilihan == 5) {
            cout << "\nTerima kasih telah menggunakan program!\n";
            break;
        }
        cout << "Masukkan angka pertama : ";
        cin >> a;
        cout << "Masukkan angka kedua   : ";
        cin >> b;

        cout << "-------------------------------------\n";

        switch (pilihan) {
            case 1:
                cout << "Hasil = " << tambah(a, b) << endl;
                break;
            case 2:
                cout << "Hasil = " << kurang(a, b) << endl;
                break;
            case 3:
                cout << "Hasil = " << kali(a, b) << endl;
                break;
            case 4:
                cout << "Hasil = " << bagi(a, b) << endl;
                break;
            default:
                cout << "Pilihan tidak valid!\n";
        }

        cout << "\nHitung lagi? (y/n): ";
        cin >> ulang;

    } while (ulang == 'y' || ulang == 'Y');

    cout << "\nProgram selesai.\n";
    return 0;
}
