// Membuat adt tabung array
// Aisyah Nuraini, 30 Maret 2023

#include <iostream>

using namespace std;

// kamus
struct persegi
{
    int panj;
    int lebr;
    float Ls, Kl;
};

struct kotak3D
{
    struct persegi kotak2D;
    int tinggi;
    float Vol, LsSlmt;
    float PnjRusuk;
};

int x, y, z;
struct persegi keramik[10];
struct persegi segi4_1, segi4_tiga;
struct kotak3D truckBox;

// int keramik1 ()
// deskripsi
int main()
{
    cout << "Belajar ADT" << endl;
    cout << "Masukkan Panjang yang diinginkan : "; cin >> segi4_1.panj;
    cout << "Masukkan Lebar yang diinginkan : "; cin >> segi4_1.lebr;
    segi4_1.Ls = segi4_1.panj * segi4_1.lebr;
    cout << "Luas Persegi dengan Lebar : " << segi4_1.lebr << endl;
    cout << "Luas Persegi dengan Panjang : " << segi4_1.panj << endl;
    cout << "Adalah = " << segi4_1.Ls << endl;


    //volume
    cout << "\nMasukkan tingginya : "; cin >> truckBox.tinggi;
    cout << "Masukkan panjangnya : "; cin >> truckBox.kotak2D.panj;
    cout << "Masukkan lebarnya : "; cin >> truckBox.kotak2D.lebr;
    truckBox.Vol = truckBox.tinggi * truckBox.kotak2D.panj * truckBox.kotak2D.lebr;
    cout << "Hasil volume : " << truckBox.Vol << endl;

    // keramik dengan looping
    x = 1; // awalan
    while (x <= 10) // target
    {
        cout << "";
        cout << "Input panjang keramik : "; cin >> keramik[x].panj;
        cout << "Input lebar keramik : "; cin >> keramik[x].lebr;
        x = x + 1;
    }

    // y
    y = 1;
    do
    {
        keramik[y].Ls = keramik[x].panj * keramik[x].lebr;
        cout << "Luas keramik :" << keramik[y].Ls << endl;
        y = y + 1; // counter
    }
    while (y <= 10);



    return 0;
}
