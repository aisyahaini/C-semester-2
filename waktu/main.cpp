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
    cout << "Masukkan jam awal : "; cin >> Jam1;
    cout << "Masukkan menit awal : "; cin >> Menit1;
    cout << "Masukkan detik awal : "; cin >> Detik1;
    DetikAll1 = JamKeDetik(Jam1, Menit1, Detik1);
    cout << "Total waktu 1 : " << DetikAll1 << endl;

    cout << "\nMasukkan jam akhir : "; cin >> Jam2;
    cout << "Masukkan menit akhir : "; cin >> Menit2;
    cout << "Masukkan detik akhir : "; cin >> Detik2;
    DetikAll2 = JamKeDetik(Jam2, Menit2, Detik2);
    cout << "Total waktu 2 : " << DetikAll2 << endl;
    Durasi = DurasiWaktu(DetikAll1,DetikAll2);


    cout << "\nTotal durasi dalam detik : " << Durasi << endl;

    int DurasiJam = Durasi/3600;
    Durasi = Durasi-(3600*DurasiJam);
    int DurasiMenit = Durasi/60;
    int DurasiDetik = Durasi-(60*DurasiMenit);

    cout << "\nHasil Konversi Jam, Menit, Detik :" << endl;
    cout << "Jam : " << DurasiJam << endl;
    cout << "Menit : " << DurasiMenit << endl;
    cout << "Detik : " << DurasiDetik << endl;
}
