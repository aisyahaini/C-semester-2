// Alpro kamis, 25 Mei 2023
// membuat program rekursif faktorial
// pada file 1 code bentuk sederhana dari menghitung faktorial
// belum ada fungsi yang digunakan

#include <iostream>
using namespace std;

int main ()
{
    // kamus lokal
    int hsl, x, n;

    // deskripsi
    hsl = 1;
    // input n
    cout << "Input n : "; cin >> n;
    x = 1;
    while (x <= n)
    {
        hsl = hsl * x;
        x = x + 1;
    }
    cout << "Output hasil : " << hsl << endl; // output

   return 0;
}