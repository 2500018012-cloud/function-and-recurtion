#include <iostream>
using namespace std;

long long hitungPangkat(int a, int b) {
    if (b == 0) {
        return 1;
    } 
    else {
        return a * hitungPangkat(a, b - 1);
    }
}

int main() {
    int basis, eksponen;

    cout << "----- (Rekursi: a^b) -----" << endl;
    cout << "Masukkan Basis a: ";
    cin >> basis;
    cout << "Masukkan Eksponen b: ";
    cin >> eksponen;

    if (eksponen < 0) {
        cout << "Error: Eksponen harus non-negatif." << endl;
        return 1;
    }
    long long hasil = hitungPangkat(basis, eksponen);
    
    cout << "\nHasil dari " << basis << "^" << eksponen << " adalah: " << hasil << endl;
    
    return 0;
}
