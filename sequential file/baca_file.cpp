/* Aisyah Nuraini
    Rabu, 7 Juni 2023
    Program membuat operasi file 2 (membaca file)
    Membaca isi file test.txt yang isinya udah ditambahin waktu operasi file 1
*/

#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>

using namespace std;

int main()
{
    // stream untuk membaca file
    ifstream myFile;
    char sv_text; // variabel sv_text dengan tipe data char

    // membuka file yang telah ada (yang udah dibuat di operasi file 1)
    myFile.open("test.txt");

    cout << "OPERASI FILE 2" << endl;
    cout << "================" << endl;

    // fail() -> untuk memeriksa suatu pada kesalahan operasi file
    if(!myFile.fail()) // jika my file tidak fail atau sukses
    {
        cout << "Isi dari File ->";

        // perulangan selama program belum mencapai akhir konten dari file
        while(!myFile.eof())
        {
            myFile.get(sv_text); // get untuk membaca file
            cout << sv_text;
        }
        myFile.close(); // memutup file
    }else{
        cout << "File tidak ditemukan" << endl;
    }
    _getche();
    return EXIT_SUCCESS;
}