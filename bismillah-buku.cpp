// Program ADT Buku
// Aisyah Nuraini (A11.2022.14161) A11.4205
// Membuat program adt, searching, dan sorting tentang buku

#include <iostream>
using namespace std;

// adt buku
struct buku
{
    int kdBuku;
    string judul;
    string penerbit;
    string thTerbit;
};

// membuat fungsi input data tentang buku
void inpBuku(buku arr[], int n){
    cout << "Input Data Buku Di Sini" << endl;
    int i;
    i = 0;
    while (i<n)
    {
        cout << "Data ke-" << i+1 << endl;
        cout << "Kode Buku : "; cin >> arr[i].kdBuku;
        cout << "Judul Buku : " << endl;
        cin.ignore();
        getline(cin, arr[i].judul);
        cout << "Penerbit : "; getline(cin, arr[i].penerbit);
        cout << "Tahun Terbit Buku : "; getline(cin, arr[i].thTerbit);
        cout << endl;
        i = i + 1;
    }
}

// membuat fungsi untuk menampilkan data yang sudah diinput
void dispBuku(buku arr[], int n){
    cout << "\t Data Buku" << endl;
    cout << "=========================================" << endl;
    cout << "Index\tKode Buku\tJudul Buku\tPenerbit\tTahun Terbit" << endl;
    cout << "==================================================" << endl;
    int i = 0; // variabel untuk looping
    while (i < n)
    {
        cout << i << "\t" << arr[i].kdBuku << "\t\t" 
        << arr[i].judul << "\t\t" << arr[i].penerbit << "\t\t" 
        << arr[i].thTerbit << endl;
        i = i + 1;
    }
}

// membuat fungsi untuk sorting data dengan metode bubble sort
void sortBuku(buku arr[], int n){
    cout << "\nData Buku Yang Sudah Disorting : " << endl;
    int i, j;
    i = 0;
    while (i < n-1)
    {
        j = 0;
        while (j < n-i-1)
        {
            if(arr[j].kdBuku > arr[j+1].kdBuku){
                buku temp; // variabel lokal untuk menyimpan data sementara
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

// prosedur untuk mencari data berdasarkan kode buku yang telah diinput
void searchBuku(buku arr[], int n, int searchBuku){
    int i;
    i = 0;

    while (i<n)
    {
        if(arr[i].kdBuku == searchBuku){
            cout << "Buku dengan kode " << searchBuku << " ada di index ke- " << i << endl;
        }
        else{
            cout << "Data yang dicari tidak ada";
        }
        i = i + 1;
    }
}

int size, searchKode; // ukuran array atau banyaknya data

int main(){
    // input untuk menyimpan ukuran array pada variabel size
    cout << "Input Banyak Data Buku : "; cin >> size;
    struct buku data_buku[size];

    // memanggil fungsi untuk input dan menampilkan data buku
    inpBuku(data_buku, size);
    dispBuku(data_buku, size);

    // proses sort data kode buku menggunakan fungsi sortBuku
    sortBuku(data_buku, size);
    dispBuku(data_buku, size);

    // proses searching data kode buku menggunakan linear search
    cout << "\nInput kode buku yang ingin dicari : "; cin >> searchKode;
    searchBuku(data_buku, size, searchKode);

    return 0;
}