
// kegiatanya adalah menangkap format jam manual
// akan dikonfersi ke detik
// author : ifan rizqa
// modif : 8 maret 2023
// lab d2 h


// buat fungsi deteksi inputan 00~59 00~23

// buat fungsi deteksi PM AM



int JamKeDetik(int HH, int MM, int SS)
{
    // judul : gawe fungsi konversi detik
    // kamus lokal :
    int totDetik;

    // diskripsi :
    totDetik = (HH * 3600)+(MM * 60)+ SS;
    return totDetik;
}

int DurasiWaktu(int DetikAwal, int DetikAkhir)
{
    // judul : mencari jarak antar waktu dalam detik

    // kamus lokal:
        int duration;
    // deskripsi
    duration = DetikAkhir - DetikAwal;
    return duration;
}

void DetikKeJam(int Detik)
{
    //
    // setupkan dalam bentuk HH MM DD
}

// -----------------------------------------------
// judul : aplikasi utama menggunakan fungsi JamKeDetik
// menggunakan sistem

#include <iostream>
using namespace std;
// kamus global
int JamKeDetik(int HH, int MM, int SS);
int DurasiWaktu(int DetikAwale, int DetikAkhire);

int Jam1,Menit1,Detik1, DetikAll1;
int Jam2,Menit2,Detik2, DetikAll2;
int Durasi;

// diskripsi
main()
{
    cin >> Jam1;
    cin >> Menit1;
    cin >> Detik1;
    DetikAll1 = JamKeDetik(Jam1, Menit1, Detik1);

    cin >> Jam2;
    cin >> Menit2;
    cin >> Detik2;
    DetikAll2 = JamKeDetik(Jam2, Menit2, Detik2);
    Durasi = DurasiWaktu(DetikAll1,DetikAll2);


    cout << Durasi << endl;

}
