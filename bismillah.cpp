/*
Judul : Membuat tiket parkir
Nama : Aisyah Nuraini
NIM : A11.2022.14161
*/

#include <iostream>
using namespace std;

// adt untuk waktu parkir saat masuk
struct w_masuk
{
    float jam;
    float menit;
    float detik;
    string ampm;
};

// adt untuk waktu parkir saat keluar
struct w_keluar
{
    float jam;
    float menit;
    float detik;
    string ampm;
};

// adt untuk keseluruhan waktu parkir
struct waktu
{
    struct w_masuk in;
    struct w_keluar out;
};

// adt untuk konversi jam ke detik
struct konvers
{
    float jam;
    float menit;
    float detik;
    string ampm;
};

// adt untuk harga total parkir
struct harga
{
    struct waktu jadi;
    float tarif;
};

// adt print tiket parkir
//struct //tiket
//{
    //struct tiket tl_waktu;
    //float jml_roda;
    //struct harga tl_tarif;
//};

struct w_masuk in;
struct w_keluar out;
struct waktu total;
//struct harga bayar;
//struct tiket parkir;

 

float totalWaktu(w_masuk in, w_keluar out){
    if (in.ampm == "AM" && out.ampm == "PM"){
        out.jam += 12;
    }
    else if (in.ampm == "PM" && out.ampm == "AM"){
        in.jam += 12;
    }

    float totalJamIN = in.jam * 60 + in.menit + in.detik;
    float totalJamOUT = out.jam * 60 + out.jam + out.detik;
    float totalJamParkir = (totalJamOUT - totalJamIN)/60;

    return totalJamParkir;
}


// membuat fungsi untuk membedakan kendaraan yang parkir
float jns_kend(int ban){
    int roda;

    if (ban == 2){
        roda = 2;
    }
    else if (ban == 3){
        roda = 3;
    }
    else if (ban == 4){
        roda = 4;
    }
    else if (ban == 6){
        roda = 6;
    }
    else{
        roda = 1;
    }
    return roda;
}

int main ()
{
    w_masuk in;
    w_keluar out;

    cout << "Masukkan waktu masuk dengan susunana jam, menit, dan detik" << endl;
    cout << "Jam Masuk : "; cin >> in.jam;
    cout << "Menit Masuk : "; cin >> in.menit;
    cout << "Detik Masuk : "; cin >> in.detik;
    cout << "AM/PM : "; cin >> in.ampm;

    cout << "Masukkan waktu keluar dengan susunana jam, menit, dan detik" << endl;
    cout << "Jam Keluar :"; cin >> out.jam;
    cout << "Menit Keluar :"; cin >> out.menit;
    cout << "Detik Keluar :"; cin >> out.detik;
    cout << "AM/PM Keluar :"; cin >> out.ampm;

    float totalJamParkir = totalWaktu(in, out);
    cout << "Total Waktu Parkir dalam Jam = " << totalJamParkir << " jam" << endl;


    // Start Menghitung roda kendaraan dan jenisnya
    int ban;
    cout << "Masukkan Jumlah Roda Kendaraan : "; cin >> ban;

    int roda = jns_kend(ban);

    if (roda == 1){
        cout << "Jumlah roda kendaraan tidak valid" << endl;
    }
    else{
        cout << "Jumlah ban kendaraan : " << roda << endl;

        if (roda == 2){
            cout << "Jenis kendaraan sepeda motor" << endl;
        }
        else if (roda == 3){
            cout << "Jenis kendaraan tricycle atau becak" << endl;
        }
        else if (roda == 4){
            cout << "Jenis kendaraan mobil" << endl;
        }
        else if (roda == 6){
            cout << "Jenis kendaraan truk" << endl;
        }
    }
    // End Menghitung roda kendaraan dan jenisnya

    
    return 0;
}