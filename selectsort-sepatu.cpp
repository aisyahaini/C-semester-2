#include <iostream>
#include <vector>

using namespace std;

struct Sepatu {
    string merk;
    string jenis;
    int ukuran;
};

void displayArray(int array[], int size) {
    //Kamus Lokal:
    int i;  

    //Algoritma
    i=0;
    //perulangan untuk memunculkan nilai dari array
    while (i < size) {
        cout << array[i] << " ";
        i=i+1;
    }
    cout << endl;
}

void selectionSort(vector<Sepatu>& sepatuList) {
    int n = sepatuList.size();

    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (sepatuList[j].ukuran < sepatuList[minIndex].ukuran) {
                minIndex = j;
            }
        }

        swap(sepatuList[i], sepatuList[minIndex]);
    }
}

int main() {
    vector<Sepatu> sepatuList = {
        {"Nike", "Lari", 42},
        {"Adidas", "Lari", 40},
        {"Puma", "Lari", 41}
    };

    cout << "Sebelum pengurutan:" << endl;
    for (const auto& sepatu : sepatuList) {
        cout << "Merk: " << sepatu.merk << ", Ukuran: " << sepatu.ukuran << endl;
    }

    selectionSort(sepatuList);

    cout << "Setelah pengurutan:" << endl;
    for (const auto& sepatu : sepatuList) {
        cout << "Merk: " << sepatu.merk << ", Ukuran: " << sepatu.ukuran << endl;
    }

    return 0;
}
