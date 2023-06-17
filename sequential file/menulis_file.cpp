/*  Aisyah Nuraini
    Rabu, 7 June 2023
    Program operasi file (menulis file)
*/ 

#include <iostream>
#include <conio.h>
#include <fstream>

using namespace std;

int main()
{
    // stream untuk menulis file
    ofstream myFile;

    // membuka file jika tidak ditemukan maka file akan otomatis dibuat
    myFile.open("test.txt", ios::app); // ios::app digunakan untuk menambahkan data pada suatu file

    cout << "OPERASI FILE 1" << endl;
    cout << "===============" << endl;

    // fail() -> untuk memeriksa suatu kesalahan pada operasi file
    if(!myFile.fail()) // jika my file tidak fail atau sukses
    {
        // menulis ke dalam file
        myFile << "Belajar Operasi File (menulis file), kalimat baru" << endl; // ketika tulisan awal belajar operasi file ada
        myFile.close(); // menutup file                                         // kemudian ada tambahan misal tulisan kalimat baru, maka pada
        cout << "Text telah ditulis ke dalam File" << endl;                     // pada test.txt ada dua kalimat yaitu kalimat awal dan kalimata yang baru ditambahkan
    }else{
        cout << "File tidak ditemukan" << endl;
    }

    _getche();
    return EXIT_SUCCESS;
}
