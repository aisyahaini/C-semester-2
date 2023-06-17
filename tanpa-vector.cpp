#include <iostream>
#include <algorithm>

struct Sepatu {
    std::string merk;
    std::string jenis;
    int ukuran;
};

void selectionSort(Sepatu* sepatuArray, int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;

        for (int j = i + 1; j < n; j++) {
            if (sepatuArray[j].ukuran < sepatuArray[minIndex].ukuran) {
                minIndex = j;
            }
        }

        std::swap(sepatuArray[i], sepatuArray[minIndex]);
    }
}

int main() {
    Sepatu sepatuArray[] = {
        {"Nike", "Lari", 42},
        {"Adidas", "Lari", 40},
        {"Puma", "Lari", 41}
    };

    int n = sizeof(sepatuArray) / sizeof(sepatuArray[0]);

    std::cout << "Sebelum pengurutan:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Merk: " << sepatuArray[i].merk << ", Ukuran: " << sepatuArray[i].ukuran << std::endl;
    }

    selectionSort(sepatuArray, n);

    std::cout << "Setelah pengurutan:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << "Merk: " << sepatuArray[i].merk << ", Ukuran: " << sepatuArray[i].ukuran << std::endl;
    }

    return 0;
}
