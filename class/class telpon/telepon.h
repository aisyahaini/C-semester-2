#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

class bukuTelepon //class bukuTelepon untuk menampung data" dan fungsi" program buku telepon
{
    //atribut
    public:
    string nama[1000];
    int nomor[1000];
    int jumlahData;
    int inputMenu;
    int noEditData;
    string inCariNama;
    int noHapusData;
    string tambahNama;
    int tambahNomor;


    int inputJumlahData() //fungsi inputJumlahData untuk menampilkan text dan menginput artibut JumlahData
    {
        int x;
        cin>>x;
        return x;
    }

    void input(int jumlahData)
    {
        cout<<"\n\n======SIMPAN NOMOR======\n\n";
        for(int x=0; x<jumlahData; x++)
        {
            int y=1;
            y=y+x;
            cout<<y<<".\n"; //menampilkan nomor urutan data, yang sebenarnya sama dengan (nomor array + 1)
            cout<<"nama  : ";
            cin>>nama[x];
            cout<<"nomor : ";
            cin>>nomor[x];
            cout<<endl;
        }
        cout<<"===simpan nomor SUKSES==\n\n";
    }

    void output(int jumlahData)
    {
        cout<<"\n\n======DAFTAR NOMOR======\n\n";
        for(int x=0; x<jumlahData; x++)
            {
                int y=1;
                y=y+x;
                cout<<y<<".\n"; //menampilkan nomor urutan data, yang sebenarnya sama dengan (nomor array + 1)
                cout<<"nama  : "<<nama[x]<<endl;
                cout<<"nomor : "<<nomor[x]<<endl;
                cout<<"\n";
            }
        cout<<"========================\n\n\n";
    }

    void menu() //fungsi menu untuk menampilkan daftar program yang bisa dipilih
    {
        cout<<"========================\n";
        cout<<"==========MENU==========\n";
        cout<<"1. daftar nomor\n";
        cout<<"2. tambah nomor\n";
        cout<<"3. hapus nomor\n";
        cout<<"4. edit data nomor\n";
        cout<<"5. cari data nomor\n";
        cout<<"0. keluar\n";
        cout<<"pilih : "; // memilih progran yang ingin dijalankan
        cin>>inputMenu;
        cout<<"========================";
        cout<<endl;
    }

    void inputSalah()
    {
        cout<<"\n========KESALAHAN=======\n\n";
        cout<<"maaf anda salah input\n\n";
        cout<<"========================\n\n";
    }

    void inputKeluar()
    {
        cout<<"\n=========KELUAR=========\n\n";
        cout<<"Program Selesai\n";
        cout<<"Terima Kasih\n\n";
        cout<<"========================\n\n\n";
    }

    void inputNoEditData(){
        cout<<"\n=====EDIT DATA NOMOR====\n\n";
        cout<<"pilih data no : ";
        cin>>noEditData;
        cout<<endl;
    }

    void editData(int noEditData){
        cout<<"nama : ";
        cin>>nama[noEditData-1];
        cout<<"nomor : ";
        cin>>nomor[noEditData-1];
        cout<<endl;
        cout<<"====edit nomor SUKSES===\n\n";
        cout<<"========================\n\n\n";
    }

    void inputCariNama(){
        cout<<"\n=====CARI DATA NOMOR====\n\n";
        cout<<"masukan nama yang akan di cari : ";
        cin>>inCariNama;
        cout<<endl;
    }

    void cariNama(string inputCariNama,int jumlahData){
        int temp=-1;
            for(int x=0;x<jumlahData;x++)   //memeriksa data satu persatu sesuai urutan
            {
                if(nama[x]==inputCariNama)  //jika ditemukan data yang sama maka,
                {                           //"temp" sama dengan indeks array
                    temp=x;
                }
            }

            if(temp!=-1) //"temp" diambil dari fungsi diatas yang menunjukkan indeks arrray
            {
                cout<<"nama  : "<<nama[temp]<<endl;
                cout<<"nomor : "<<nomor[temp]<<endl;
                cout<<"\n====cari nomor SUKSES===\n\n";
                cout<<"========================\n\n\n";
            }
            else if(temp==-1) //jika data tidak ditemukan, maka "temp" bernilai "-1" kembali ke nilai awal
            {
                cout<<"data tidak ditemukan\n\n";
                cout<<"========================\n\n\n";
            }

    }

    void inputHapusData()
    {
        cout<<"\n\n=======HAPUS NOMOR======\n\n";
        cout<<"masukan no data yang ingin di hapus : ";
        cin>>noHapusData;
        cout<<endl;
    }

    void hapusData(int hapusData, int jumlahData)
    {
        for(int x=hapusData-1; x<jumlahData; x++)
            //menunjukkan inputan nilai terpilih dikurang satu
            //agar sama dengan nilai indeks array yang ingin dihapus
            {
                if(hapusData==jumlahData)
                {
                    continue;
                }
                nama[x].swap(nama[x+1]);
                nomor[x]=nomor[x+1];
            }
            this->jumlahData-=1; //nilai indeks array dikurang satu
            cout<<"  ===hapus nomor SUKSES===\n";
            cout<<"\n========================\n\n\n";
    }

    void tambahDataNomor(int jumlahData)
    {
        cout<<"\n======TAMBAH NOMOR======\n\n";
        cout<<"nama : ";
        cin>>nama[jumlahData];
        cout<<"nomor : ";
        cin>>nomor[jumlahData];
        this->jumlahData+=1; //nilai indeks array ditambah satu
        cout<<endl;
        cout<<"========================\n\n\n";
    }
};
