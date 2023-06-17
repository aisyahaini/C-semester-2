#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include "telepon.h" //kembali ke header (telepon.h)

using namespace std;

int main()
{
    bukuTelepon data;
    cout<<endl;
    cout<<endl;
    cout<<"============BUKU TELEPON============\n\n\n";
    cout<<"masukan jumlah data : ";
        data.jumlahData=data.inputJumlahData();
        data.input(data.jumlahData);
    cout<<"==================\n\n\n";

    do{
        data.menu();
        if(data.inputMenu==1){ //Daftar nomor
            data.output(data.jumlahData);
        }
        else if(data.inputMenu==2){ //Tambah Nomor
            data.tambahDataNomor(data.jumlahData);
        }
        else if(data.inputMenu==3){ //Hapus nomor
            data.inputHapusData();
            data.hapusData(data.noHapusData, data.jumlahData);
        }
        else if(data.inputMenu==4){ //Edit data nomor
            data.inputNoEditData();
            data.editData(data.noEditData);
        }
        else if(data.inputMenu==5){ //Cari data nomor
            data.inputCariNama();
            data.cariNama(data.inCariNama,data.jumlahData);
        }
        else if(data.inputMenu==0){ //akan menjalankan program selanjutnya dari do while, yaitu "Program Selesai"
            continue;
        }
        else{ //berjalan ketika inputan tidak sesuai dengan menu
            data.inputSalah();
        }
    }while(data.inputMenu!=0); //jika inputan "data.inputMenu" tidak sama dengan nol, maka akan kembali menjalankan do
    data.inputKeluar();

    return 0;
}
