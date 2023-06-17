// Aisyah Nuraini (A11.2022.14161 - A11.4205)
// UTS Praktek ALPRO, 20 Mei 2023 (D2H)
// Program membuat ADT tentang data HP disorting menggunakan bubble sort
// Data hp yang diinputkan seperti, merk hp, type hp, warna hp, harga hp, ram hp, dan resolusi kamera hp

#include <iostream>
using namespace std;

// adt tentang data hp
struct HP
{
    string merk;
    string type;
    string warna;
    int harga;
    int storage;
    int camera;
};

// membuat fungsi void untuk input data tentang HP
void inpData(HP arr[], int a)
{
    cout << "Input Data Tentang HP" << endl;
    int i = 0;
    while (i<a)
    {
        cout << "\nData Ke-" << i+1 << endl;
        cout << "Merk HP : ";
        cin.ignore(); // diberi seperti itu agar getline selanjutnya rapi
        getline(cin, arr[i].merk);
        cout << "Type HP : "; getline(cin, arr[i].type); // menggunakan cin getline agar data yang diinputkan dapat ter output lebih dari 1 kata
        cout << "Warna HP : "; getline(cin, arr[i].warna);
        cout << "Harga HP : "; cin >> arr[i].harga;
        cout << "Besar RAM HP (dalam GB) : "; cin >> arr[i].storage;
        cout << "Besar Resolusi Kamera HP (dalam MP) : "; cin >> arr[i].camera;
        i = i + 1;
    }
}

// membuat fungsi void untuk menampilkan data yang telah diinput
void dispData(HP arr[], int a)
{
    cout << "\nData HP Yang Telah Diinput" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Index\tMerk HP\t\tType HP\t\tWarna HP\tHarga HP\tRAM HP(GB)\tResolusi Kamera(MP)" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    int i = 0;
    while (i<a)
    {
        cout << i << "\t" << arr[i].merk << "\t\t" << arr[i].type << "\t\t" 
        << arr[i].warna << "\t\t" << arr[i].harga << "\t\t" << arr[i].storage << "\t\t" << arr[i].camera << endl;
        i = i + 1;
    }
}

// membuat fungsi untuk sorting data tentang HP dengan metode bubble sort
void sortData(HP arr[], int a){
    cout << "\nSorting Data Dengan Bubble Sort" << endl;
    cout << "=======================================" << endl;
    cout << "\nData Yang Sudah Disorting Berdasarkan Harga HP:" << endl;
    int i = 0, j;
    // sorting dengan bubble sort
    while (i < a-1)
    {
        int j = 0;
        while (j < a-i-1)
        {
            if(arr[j].harga < arr[j+1].harga){
                HP temp;
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            j = j + 1;
        }
        i = i + 1;
    }
}

int size; // untuk banyak data ysng diinput

int main()
{
    // untuk input banyak data yang diinginkan
    cout << "Input banyak data : "; 
    cin >> size;

    struct HP data_hp[size];

    // memanggil fungsi input dan menampilkan data
    inpData(data_hp, size);
    dispData(data_hp, size);

    // memanggil fungsi untuk sorting data dan menampilkan data yang telah disorting
    sortData(data_hp, size);
    dispData(data_hp, size);

    return 0;
}