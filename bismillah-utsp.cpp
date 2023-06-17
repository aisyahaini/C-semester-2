// Program ADT Jam Tangan
// Taliya Meyswara - A11.2022.14163 - A11.4205

#include <iostream>
using namespace std;

// adt jam tangan
struct jamtangan{
    string merk;
    string warna;
    int harga;
};

// fungsi untuk menginput data jamtangan
void inputData(jamtangan arr[], int n){
    cout << "\t Input Data Jam Tangan" << endl;
    int i; // kamus lokal utk looping
    i = 0; 
    while(i<n){
        cout << "Data ke-" << i+1 << endl;
        cout << "Merk: " ;
        cin.ignore();
        getline(cin,arr[i].merk);
        cout << "Warna: " ; getline(cin,arr[i].warna);
        cout << "Harga: " ; cin >> arr[i].harga;
        cout << endl;
        i = i+1;
    }
}

// fungsi untuk menampilkan data yang sudah diinput
void printData(jamtangan arr[], int n){
    cout << "\t Data Jam Tangan" << endl;
    cout << "==========================================" << endl;
    cout << "Idx\tMerk\t\tWarna\tHarga" << endl;
    cout << "==========================================" << endl;
    int i; //variabel lokal utk looping
    i = 0;
    while(i < n){
        cout << i << "\t" << arr[i].merk << "\t\t" 
        << arr[i].warna << "\t" << arr[i].harga << endl;
        i = i+1;
    }
}

// fungsi untuk sorting data berdasarkan harga jamtangan dengan metode bubble sort
void sortData(jamtangan arr[], int n){
    cout << "\nData yang sudah disorting:" << endl;
    int i,j; // variabel lokal utk looping
    i = 0;
    while(i < n-1) {
        j = 0;
        while(j < n-i-1){
            if(arr[j].harga > arr[j+1].harga){
                jamtangan temp; // variabel lokal utk menyimpan nilai sementara
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            j = j+1;
        }
        i = i+1;
    }
}

// fungsi untuk mencari data berdasarkan harga jamtangan dengan metode linearsearch
/*int searchData(jamtangan arr[], int n, int searchKey){
    int i;
    i = 0;
    while(i < n){
        if(arr[i].harga == searchKey){
            return i;
        }
    }
    return -1;
} 

void searchHarga(jamtangan arr[], int n){
    int cariHarga;
    cout << "\nInput harga yang ingin dicari: " ; cin >> cariHarga;
    if(searchData(arr,n,cariHarga) != -1){
        cout << "Jam tangan dengan harga " << cariHarga 
            << " ada di index ke-" << searchData(arr,n,cariHarga) << endl;
    }
}*/


// prosedur untuk mencari data berdasarkan harga menggunakan fungsi searchData
void searchHarga(jamtangan arr[], int n, int searchHarga){
    int i;
    i = 0;
    while(i < n){
        if(arr[i].harga == searchHarga){
            cout << "Jam tangan dengan harga " << searchHarga 
            << " ada di index ke-" << i << endl;
        }
        else{
            cout << "Data yang dicari tidak ada";
        }
        i = i+1;
    }
}



int size, cariHarga; // ukuran array atau banyaknya data

int main(){
    // inputan utk menyimpan ukuran array pd var size
    cout << "Input banyak data: " ; cin >> size;
    struct jamtangan data_jamtangan[size];

    // menggunakan fungsi utk menginput dan menampilkan data
    inputData(data_jamtangan,size);
    printData(data_jamtangan,size);
    
    // proses sort data harga menggunakan fungsi sortData
    sortData(data_jamtangan,size);
    printData(data_jamtangan,size);

     // proses searching data harga dgn menggunakan prosedur searchHarga
    cout << "\nInput harga yang ingin dicari: " ; cin >> cariHarga;
    searchHarga(data_jamtangan,size,cariHarga);
    

    return 0;
}