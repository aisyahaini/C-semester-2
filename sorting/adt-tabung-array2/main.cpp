#include <iostream>
#include <cmath>
using namespace std;

void bubble_sort(double arr[], int n) {
    // Traverse through all array elements
    for (int i = 0; i < n; i++) {
        // Last i elements are already sorted
        for (int j = 0; j < n-i-1; j++) {
            // Traverse the array from 0 to n-i-1
            // Swap if the element found is greater than the next element
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void input_tabung(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        double r, t;
        cout << "Masukkan jari-jari dan tinggi tabung ke-" << i+1 << ": ";
        cin >> r >> t;
        arr[i] = M_PI * r * r * t; // Hitung volume tabung
    }
}

void print_array(double arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Masukkan jumlah elemen: ";
    cin >> n;

    double arr[n];
    cout << "Masukkan " << n << " volume tabung:" << endl;
    input_tabung(arr, n);

    cout << "Sebelum diurutkan: ";
    print_array(arr, n);

    // Panggil fungsi bubble sort
    bubble_sort(arr, n);

    cout << "Setelah diurutkan: ";
    print_array(arr, n);

    return 0;
}
