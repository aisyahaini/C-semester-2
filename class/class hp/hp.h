/* Aisyah Nuraini (A11.2022.14161) A11.4205
Memmbuat class hp dengan sorting dan searching
*/

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

// judul = membuat class dengan atribut merk, type, warna, harga, ram, camera

class hp //class bukuTelepon untuk menampung data" dan fungsi" program hp
{
    public:
    // kamus
    string merk;
    string type;
    string warna;
    int harga;
    int storage;
    int camera;
    int jumlah_data;
    int size;


    // deskripsi

    // method input array data hp
    int input_jumlah()
    {
        int x;
        cin >> x;
        return x;
    }

    void input_hp(hp arr[], int size) // method void untuk input data hp denga parameter arr[]<- hp dan size <- int
    {
        cout << "\n\n Masukkan Data HP \n\n";
        int x = 0;
        while (x < size)
        {
            int y = 1;
            y = y + x;
            cout << x+1 << ".\n"; // menampilkan nomor urutan input barang
            cout << " Merk HP: "; cin >> arr[x].merk; // input merk hp kemudian disimpan di array x merk
            cout << " Type HP : "; cin >> arr[x].type; // input type hp kemudian disimpan di array x type
            cout << " Warna HP : "; cin >> arr[x].warna; // input warna hp kemudian disimpan di array x warna
            cout << " Harga HP : "; cin >> arr[x].harga; // input harga hp kemudian disimpan di array x harga
            cout << " RAM HP (dalam GB) : "; cin >> arr[x].storage; // input storage hp kemudian disimpan di array x storage
            cout << " Resolusi Kamera (dalam MP) : "; cin >> arr[x].camera; // input camera hp kemudian disimpan di array x camera
            cout << endl;

            x = x + 1;
        }
        cout << "\n\n Input data hp berhasil \n\n";
    }

    // membuat fungsi void untuk menampilkan data yang telah diinput
    void display(hp arr[], int size) // fungsi void display dengan parameter arr[]<- HP, dan size <- int
    {
        cout << "\nData HP Yang Telah Diinput" << endl;
        cout << "--------------------------------------------------------------------------------------------------------------" << endl;
        cout << "Index\tMerk HP\t\tType HP\t\tWarna HP\tHarga HP\tRAM HP(GB)\tResolusi Kamera(MP)" << endl; // pemberian \t untuk tab spacr
        cout << "--------------------------------------------------------------------------------------------------------------" << endl;
        int x = 0; // deklarasi variabel i untuk looping
        while (x<size)
        {
            // menampilkan data array sesuai class yang telah dibuat dengan jarak menggunakan \t(tab space)
            cout << x << "\t" << arr[x].merk << "\t\t" << arr[x].type << "\t\t"
            << arr[x].warna << "\t\t" << arr[x].harga << "\t\t" << arr[x].storage << "\t\t" << arr[x].camera << endl;
            x = x + 1; // increment
        }
    }

    // membuat fungsi untuk sorting data tentang HP dengan metode bubble sort
    void sort_data(hp arr[], int size){ // fungsi void sortData dengan parameter arr[]<- HP, dan a <- int
        cout << "\nSorting Data Dengan Bubble Sort" << endl;
        cout << "=======================================" << endl;
        cout << "\nData Yang Sudah Disorting Berdasarkan Harga, Storage, dan Resolusi Kamera HP:" << endl;
        int i = 0, j; // deklarasi variabel i, j untuk looping
        // sorting dengan bubble sort
        while (i < size-1)
        {
            int j = 0; // deklarasi j
            while (j < size-i-1)
            {
                if(arr[j].harga > arr[j+1].harga && arr[j].storage < arr[j+1].storage && arr[j].camera < arr[j+1].camera){
                    hp temp;
                    temp = arr[j]; // temp ditempatkan ke arr[j]
                    arr[j] = arr[j+1]; // kemudian arr[j] ditempatkan ke arr[j+1]
                    arr[j+1] = temp; // kemudian arr[j+1] ditempatkan ke temp
                }
                j = j + 1; // increment
            }
            i = i + 1; // increment
            cout << "Program berhasil" << endl;
        }

    }

};