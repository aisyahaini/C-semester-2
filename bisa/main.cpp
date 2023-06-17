// Aisyah Nuraini (A11.2022.14161 - A11.4205)
// UTS Praktek ALPRO, 20 Mei 2023 (D2H)
// Program membuat ADT tentang data HP disorting menggunakan bubble sort
// Data hp yang diinputkan seperti, merk hp, type hp, warna hp, harga hp, ram hp, dan resolusi kamera hp

#include <iostream>
using namespace std;

// adt tentang data hp yang berisi merk, type, warna, harga, storage, dan camera hp
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
void inpData(HP arr[], int a) // fungsi void inpData dengan parameter arr[]<- HP, dan a <- int
{
    cout << "Input Data Tentang HP" << endl;
    int i = 0; // deklarasi variabel i untuk looping
    while (i<a)
    {
        cout << "\nData Ke-" << i+1 << endl; // menunjukkan urutan data yang akan diinput
        cout << "Merk HP : ";
        cin.ignore(); // diberi seperti itu agar getline selanjutnya rapi
        getline(cin, arr[i].merk);
        cout << "Type HP : "; getline(cin, arr[i].type); // menggunakan cin getline agar data yang diinputkan dapat ter output lebih dari 1 kata
        cout << "Warna HP : "; getline(cin, arr[i].warna); // menggunakan arr[i].warna karena nanti cin nya masuk ke variabel warna dengan array i
        cout << "Harga HP : "; cin >> arr[i].harga;
        cout << "Besar RAM HP (dalam GB) : "; cin >> arr[i].storage;
        cout << "Besar Resolusi Kamera HP (dalam MP) : "; cin >> arr[i].camera;
        i = i + 1; // increment
    }
}

// membuat fungsi void untuk menampilkan data yang telah diinput
void dispData(HP arr[], int a) // fungsi void dispData dengan parameter arr[]<- HP, dan a <- int
{
    cout << "\nData HP Yang Telah Diinput" << endl;
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    cout << "Index\tMerk HP\t\tType HP\t\tWarna HP\tHarga HP\tRAM HP(GB)\tResolusi Kamera(MP)" << endl; // pemberian \t untuk tab spacr
    cout << "--------------------------------------------------------------------------------------------------------------" << endl;
    int i = 0; // deklarasi variabel i untuk looping
    while (i<a)
    {
        // menampilkan data array sesuai adt yang telah dibuat dengan jarak menggunakan \t(tab space)
        cout << i << "\t" << arr[i].merk << "\t\t" << arr[i].type << "\t\t"
        << arr[i].warna << "\t\t" << arr[i].harga << "\t\t" << arr[i].storage << "\t\t" << arr[i].camera << endl;
        i = i + 1; // increment
    }
}

// membuat fungsi untuk sorting data tentang HP dengan metode bubble sort
void sortData(HP arr[], int a){ // fungsi void sortData dengan parameter arr[]<- HP, dan a <- int
    cout << "\nSorting Data Dengan Bubble Sort" << endl;
    cout << "=======================================" << endl;
    cout << "\nData Yang Sudah Disorting Berdasarkan Harga, Storage, dan Resolusi Kamera HP:" << endl;
    int i = 0, j; // deklarasi variabel i, j untuk looping
    // sorting dengan bubble sort
    while (i < a-1)
    {
        int j = 0; // deklarasi j
        while (j < a-i-1)
        {
            if(arr[j].harga > arr[j+1].harga && arr[j].storage < arr[j+1].storage && arr[j].camera < arr[j+1].camera){
                HP temp;
                temp = arr[j]; // temp ditempatkan ke arr[j]
                arr[j] = arr[j+1]; // kemudian arr[j] ditempatkan ke arr[j+1]
                arr[j+1] = temp; // kemudian arr[j+1] ditempatkan ke temp
            }
            j = j + 1; // increment
        }
        i = i + 1; // increment
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
    inpData(data_hp, size); // pemanggilan fungsi inpData dengan parameter data_hp dan size
    dispData(data_hp, size); // pemanggilan fungsi dispData dengan parameter data_hp dan size

    // memanggil fungsi untuk sorting data dan menampilkan data yang telah disorting
    sortData(data_hp, size); // pemanggilan fungsi sortData dengan parameter data_hp dan size
    dispData(data_hp, size); // pemanggilan fungsi dispData dengan parameter data_hp dan size

    return 0;
}

