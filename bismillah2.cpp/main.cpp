/*
Judul : Membuat tiket parkir
Nama : Aisyah Nuraini
NIM : A11.2022.14161
*/

#include <iostream>
using namespace std;


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
    return 0;
}
