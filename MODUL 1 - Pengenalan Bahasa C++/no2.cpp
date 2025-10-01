
#include <iostream>
using namespace std;

int main() {
    int angka;
    const char* satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    const char* belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    const char* puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    cout << "Masukkan angka (0-100): ";
    cin >> angka;

    if (angka < 0 || angka > 100) {
        cout << "Angka harus antara 0 sampai 100" << endl;
    } else if (angka < 10) {
        cout << satuan[angka] << endl;
    } else if (angka < 20) {
        cout << belasan[angka - 10] << endl;
    } else if (angka < 100) {
        cout << puluhan[angka / 10];
        if (angka % 10 != 0) cout << " " << satuan[angka % 10];
        cout << endl;
    } else {
        cout << "seratus" << endl;
    }

    return 0;
}1
