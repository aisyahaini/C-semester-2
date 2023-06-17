#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include "bismillah.h" //kembali ke header (bismillah.h)

using namespace std;

int main ()
{
    kasir data;
    cout << endl;
    cout << endl;
    cout << "---------- Selamat Datang di Cashier Self Service ----------";
    cout << "Masukkan Jumlah Data : ";
    data.jumlah_data = data.input_data();
    data.input(data.jumlah_data);
    cout << "------------------------" ;
}