#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Sepatu {
    string merk;
    string jenis;
    int ukuran;
};

vector<Sepatu> sepatuList;

void tambahSepatu(string merk, string jenis, int ukuran) {
    Sepatu sepatu;
    sepatu.merk = merk;
    sepatu.jenis = jenis;
    sepatu.ukuran = ukuran;
    sepatuList.push_back(sepatu);
}

void cariSepatu() {
    int ukuran;
    cout << "Masukkan ukuran sepatu yang ingin dicari: ";
    cin >> ukuran;

    bool ditemukan = false;

    for (const auto& sepatu : sepatuList) {
        if (sepatu.ukuran == ukuran) {
            cout << "Sepatu ditemukan:" << endl;
            cout << "Merk: " << sepatu.merk << endl;
            cout << "Jenis: " << sepatu.jenis << endl;
            cout << "Ukuran: " << sepatu.ukuran << endl;
            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Sepatu tidak ditemukan." << endl;
    }
}

int main() {
    string merk, jenis;
    int ukuran;

    while (true) {
        cout << "Masukkan merk sepatu ('selesai' untuk berhenti): ";
        getline(cin, merk);

        if (merk == "selesai") {
            break;
        }

        cout << "Masukkan jenis sepatu: ";
        getline(cin, jenis);

        cout << "Masukkan ukuran sepatu: ";
        cin >> ukuran;
        cin.ignore();  // Mengabaikan karakter '\n' dalam buffer input

        tambahSepatu(merk, jenis, ukuran);
    }

    cariSepatu();

    return 0;
}
