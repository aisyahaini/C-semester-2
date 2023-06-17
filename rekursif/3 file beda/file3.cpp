// ALPRO, Kamis 25 Mei 2023
// D2H, 14.10-16.00
// dalam file ini sudah menggunakan fungsi rekursif
// rekursif yaitu fungsi yang memanggil dirinya sendiri
// membuat fungsi rekursif 1x2x3x4 --> sama dengan 4x3x2x1 --> 4!
// basisnya adalah 1, karena 1 faktorial itu 1
// ekspresi reccurennt nya n!=n * (n-1)

#include <iostream>
using namespace std;

int fakrecc(int n)
{
    // kamus global
    int hsle;

    // deskripsi fungsi
    if(n == 1) // basis
    {
        hsle = 1; 
    }
    else
    {
        hsle = n * fakrecc(n-1); // ekspresi recurennt
    }
    return hsle;
}

// kamus global
int en;
int fakrecc(int en); // memanggil fungsi yang telah dibuat
int n, hsl;

int main ()
{
    // deskripsi 
    cout << "Input n : "; cin >> n;
    hsl = fakrecc(n);
    cout << "Hasil : " << hsl << endl;
}