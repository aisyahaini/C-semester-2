/* Project Individu
    Aisyah Nuraini (A11.2022.14161)
    Program membuat kasir self service atau pembayaran barang yang
        dilakukan dirinya sendiri
    11 Juni 2023
*/

#include <iostream>
#include <string>

using namespace std;

class kasir
{
    // atribut
    public:
    string merk[100];
    string ukuran[50];
    int harga[50];
    string warna[50];
    int kuantitas[10];
    int jumlah_data;

    int input_data() // fungsi input data untuk menampilkan text dan menginput artibut Jumlah_data
    {
        int x;
        cin >> x;
        return x;
    }

    void input(int jumlah_data)
    {
        cout << "\n\n Masukkan Barang \n\n";
        int x = 0;
        while (x < jumlah_data)
        {
            int y = 1;
            y = y + x;
            cout << y << ".\n"; // menampilkan nomor urutan input barang
            cout << " Nama dan Merk Barang : "; cin >> merk[x];
            cout << " Ukuran Barang : "; cin >> ukuran[x];
            cout << " Harga Barang : "; cin >> harga[x];
            cout << " Warna Barang : "; cin >> warna[x];
            cout << " Jumlah Barang : "; cin >> kuantitas[x];
            cout << endl;

            x = x + 1;
        }
        cout << "\n\n Input barang berhasil \n\n";
    }

    void output(int jumlah_data)
    {
         cout << "\n\n Daftar Barang \n\n";
        int x = 0;
        while (x < jumlah_data)
        {
            int y = 1;
            y = y + x;
            cout << y << ".\n"; // menampilkan nomor urutan input barang
            cout << " Nama dan Merk Barang : "; cin >> merk[x];
            cout << " Ukuran Barang : "; cin >> ukuran[x];
            cout << " Harga Barang : "; cin >> harga[x];
            cout << " Warna Barang : "; cin >> warna[x];
            cout << " Jumlah Barang : "; cin >> kuantitas[x];
            cout << endl;

            x = x + 1;
        }
        cout << "----------------------------------";
    }
};