// membuat class tabung yang sudah di adt dahulu
// halaman ini hanya berisi class saja, main nya beda file (di mainTabung.cpp)

#include <iostream>
#include <string>
#include <cstring>
#include <string.h>

using namespace std;

class lingkaran // class lingkaran untuk menampung data" dan fungsi" program lingkaran
{
    // atribut
    public:
    float phi;
    float r;
    float keliling;
    float luas;

    // fungsi dalam class disebut method

    // fungsi untuk menhitung keliling lingkaran
    float keliling_lingkaran(){
        phi = 3.14;
        // rumus = 2 * phi * r
        keliling = 2 * phi * r;
        return keliling;
    }

    // fungsi untuk menhitung luas lingkaran
    float luas_lingkaran(){
        phi = 3.14;
        // rumus = phi * r *
        luas = phi * r * r;
        return luas;
    }

};


class tabung // class tabung untuk menampung data" dan fungsi" program tabung
{
    // atribut
    public:
    lingkaran bulet;
    float t;
    float volume;
    float ttp_alas;
    float ls_tabung;
    int size;
    float slmt_tabung;
    float ttl_vol;


    // fungsi dalam class disebut method

    // fungsi untuk menghitung tutup alas tabung
    float tutupAlas_tabung(){
        // rumus = 2 * phi * r * r
        ttp_alas = bulet.luas_lingkaran() * 2;
        return ttp_alas;
    }

    // fungsi untuk menghitung luas tabung
    float luas_tabung(){
        // rumus = 2 * phi * r * (r + t)
        ls_tabung = bulet.keliling_lingkaran() * (bulet.r + t);
        return ls_tabung;
    }

    // method untuk menhitung volume tabung
    float volume_tabung() {
        // rumus = phi * r * r *t atau luas lingkaran * t
        volume = bulet.luas_lingkaran() * t;
        return volume;
    }

    // method untuk menhitung selimut tabung
    float selimut_tabung(){
        // rumus = 2 * phi * r * t atau keliling lingkaran * t
        slmt_tabung = bulet.keliling_lingkaran()*t;
        return slmt_tabung;
    }

    // method untuk menghitung total volume tabung pada array
    float total_vol(tabung arr[], int size){
        float ttl_vol = 0;
        int i = 0;
        while(i < size){
            ttl_vol = ttl_vol + arr[i].volume_tabung();
            i = i + 1;
        }
        return ttl_vol;
    }

    // fungsi untuk menentukan volume terbesar tabung pada array
    float voltabungMax(tabung arr[], int size){
        float maxVol = 0;
        int i = 0;
        while(i < size){
            if(arr[i].volume_tabung() > maxVol){
                maxVol = arr[i].volume_tabung();
            }
            i = i + 1;
        }
        return maxVol;
    }


    // prosedur untuk sorting volume tabung pada array dgn bubble sort
    void sorting_Voltabung(tabung arr[], int size){
        int i,j;
        tabung temp;
        for(i=0; i<size-1; i++){
            for(j=0; j<size-i-1; j++){
                if(arr[j].volume_tabung() > arr[j+1].volume_tabung()){
                    //panggil prosedur utk menukar nilai
                    temp = arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
        }
    }

    // prosedur input array tabung
    int inputData()
    {
        int x;
        cin >> x;
        return x;
    }

    void input_tabung(tabung arr[], int size){
    int i;
    i = 0;
        while(i<size){
            cout << "Tabung ke-" << i+1 << endl;
            cout << "Input jari-jari: " ; cin >> arr[i].bulet.r;
            cout << "Input tinggi: " ; cin >> arr[i].t;
            cout << endl;
            i++;
        }
    }

    void display(tabung arr[], int size){
    cout << "========================\n" << endl;
    int i;
    i = 0;
        while(i<size){
            cout << "Tabung ke-" << i+1 << endl;
            cout << "Volume: " << arr[i].volume_tabung() << endl;
            cout << "Selimut: " << arr[i].selimut_tabung() << endl;
            cout << "Tutup Alas: " << arr[i].tutupAlas_tabung() << endl;
            cout << "Luas: " << arr[i].luas_tabung() << endl;
            cout << "Total Volume : " << arr[i].total_vol(arr[i], size) << endl;
            cout << "Volume Tabung Maksimal : " << arr[i].voltabungMax(arr[i], size) << endl;
            cout << endl;
            i++;
        }
    }

    // prosedur untuk menampilkan array tabung sebelum disorting dan sesudah di sorting
    void arr_Voltabung(tabung arr[],int size){
        int i = 0;
        cout << "Array Vtabung sebelum sorting: " << endl;
        while(i<size){
            cout << "[ "<< arr[i].volume_tabung() << " ]";
            i++;
        };
        cout << endl;
        cout << "Array Vtabung setelah sorting: " << endl;
        sorting_Voltabung(arr,size);
        i = 0;
        while(i<size){
            cout << "[ "<< arr[i].volume << " ]";
            i++;
        }
    }
};