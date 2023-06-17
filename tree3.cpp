#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main ()
{

    cout << "Masukkan banyaknya data : "; cin >> n;

    int i, n;
    int data[n]; // array data input
    int cabang [n*n*n*n]; // leaf
    int penyederhanaan = 0;
    int indeks = 0; // indeks posisi leaf pada tree
    int simpan_grading[n*n*n]; // variabel penentu ranting terpanjang

    // pengisian array dengan nilai awal, 0
    int i = 0;
    while (i < n*n*n)
    {
        cabang[i] = 0;
        simpan_grading[i] = 0;
        i = i + 1;
    }

    // perintah input data
    int i = 0;
    while (i < n)
    {
        cout << "Data ke- " << i+1 << " : ";
        cin >> data[i];
        i = i + 1;
    }
    
    cout << "Data yang anda masukkan : ";
    int i = 0;
    while (i < n)
    {
        cout << data[i] << " ";
        i = i + 1;
    }

    // Membuat binary tree sort
    int grading = 1; // minimal ranting adalah 1
    int tanda_grading; // variabel penanda apabila ranting diriset
    int i = 0;
    while (i < n)
    {
        // pengisian leaf apabila kosong
        if (cabang[indeks] == 0){
            cabang[indeks] = data[i];
            simpan_grading[i] = grading;
            tanda_grading = i + 1;
            grading = 1;
            indeks = 0;
        }
        // apabila leaf isi, maka data akan dibandingkan dengan isi leaf
        else {
            // apabila data < leaf, data disimpan di leaf kiri
            if (data[i] < cabang[indeks]){
                indeks = indeks + (indeks + 1);
                i = i - 1;
            }
            // apabila data < leaf, data disimpan di leaf kanan
            else if (data[i] > cabang[indeks]){
                indeks = indeks + (indeks + 2);
                i = i - 1;
            }

            // menandai perisetan ranting
            if (tanda_grading = i + 1){
                grading++;
            }
        }
        i = i + 1;
    }
    
    // mencari nilai max dari array data ranting "cabang terpanjang"
    int i = 0;
    while (i < n*n*n)
    {
        if (i == 0)
        {
            penyederhanaan = simpan_grading[i];
        }
        else if (penyederhanaan < simpan_grading[i]){
            penyederhanaan = simpan_grading[i];
        }
        
        i++;
    }

    int penyederhanaan2 = penyederhanaan;
    int penyederhanaan3 = penyederhanaan;

    // penentuan indeks terbesar dari leaf
    int maks_kolom = 0;
    
    int i = 0;
    while (i < penyederhanaan)
    {
        maks_kolom = 0;
        i++;
    }
    
    // pembuatan array berdasarkan cabang terpanjang dan daun terluas
    int sorting1[penyederhanaan][maks_kolom];
    int sorting_kiri[penyederhanaan][maks_kolom];
    int sorting_kanan[penyederhanaan][maks_kolom];
    int final_sorting[n];

    int i = 0;
    while (i < penyederhanaan)
    {
        int j = 0;
        while (j < pow(2, penyederhanaan)) // untuk perhitungan suatu pangkat yaitu 2 pangkat penyederhanaan
        {
            sorting1[i][j] = 0;
            sorting_kiri [i][j] = 0;
            sorting_kanan [i][j] = 0;
            i++;
        }
        i++;
    }

    cout << endl << "Binary Tree Search : " << endl;

    int leaf_kolom;
    int abc = 0;
    int i = 0;
    while (i < penyederhanaan)
    {
        int k = 0;
        while (k <= penyederhanaan2)
        {
            spasi = spasi + spasi + 1;
            k++;
        }
        penyederhanaan2--;

        leaf_kolom = 0;
        int j = 0;
        while (j < (pow(2, i) + abc))
        {
            cout < setw(spasi) << cabang[j];

            int l = 0;
            while (l < spasi+2)
            {
                cout << " ";
                l++;
            }
            j++;
        }   
        cout << endl;
        abc = abc + abc + 1;     
        i++;
    }
    
    int i = 0;
    while (i < penyederhanaan)
    {
        int spasi = 0;
        int k = 0;
        while (k <= penyederhanaan3 -3)
        {
            spasi = spasi + spasi + 1;
            k++;
        }
        penyederhanaan3--;

        int belakang_kiri = 0;
        int j = 0;
        while (j < (pow(2,i)/2))
        {
            sorting_kiri[i][belakang_kiri] = sorting[i][j];
            belakang_kiri += spasi + 1;
            j++;
        }
        
        int sorting1_indeks_kanan;
        int belakang_kanan = 0;
        while (k < (pow(2, i)/2))
        {
            sorting1_indeks_kanan = (k + (pow(2,i)/2))
            sorting_kanan[i][belakang_kanan] = sorting1[i][sorting1_indeks_kanan];
            belakang_kanan += spasi + 1;
            k++;
        }
        i++;
    }
    
    cout << endl << endl;

    int indeks_final = 0;
    int j = 0;
    while (j < pow(2, penyederhanaan)/2)
    {
        i = penyederhanaan;
        while (i > 0)
        {
            if ((sorting_kiri[i][j] != 0))
            {
                final_sorting[indeks_final++] = sorting_kiri[i][j];
            }
            
           i--;
        }
        j++;
    }
    final_sorting[indeks_final++] = data[0];

    int j = 0;
    while (j < pow(2, penyederhanaan)/2)
    {
        i = penyederhanaan;
        while (i > 0)
        {
            if ((sorting_kiri[i][j]))
            {
                final_sorting[indeks_final++] = sorting_kanan[i][j];
            }
            i--;
        }
        j++;
    }
    
    // output hasil final
    cout << "Data setelah diurutkan : ";
    int i = 0;
    while (i < n)
    {
        cout << final_sorting[i] << " ";
        i++;
    }
    cout << endl;

    return 0;
}
