// ALPRO, Kamis 25 mei 2023
// D2H, 14.10-16.00 WIB
// membuat program menghitung faktorial dengan menggunakan fungsi biasa, belum ada rekursif
// rekursif yaitu fungsi yang memangggil dirinya sendiri
// fungsi fackt

#include <iostream>
using namespace std;

// fungsi v2
int fackt(int en)
{
    // kamus global
    int x, hslx;
    // deskripsi fungsi
    int ex = 1;
    while (ex <= en)
    {
        hslx = hslx + ex;
        ex = ex + 1;
    }
    return hslx;
}
//kamus global
int en;
int fackt (int en);
int n, hsl;

int main() // program utama
{
    // deksripsi
    cout << "Input n : "; cin >> n;
    hsl = fackt(n);
    cout << "Output hasil : " << hsl << endl;
}