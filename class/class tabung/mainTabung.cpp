#include <iostream>
#include "tabung.h"

using namespace std;

int main ()
{
    tabung data_tabung;
    cout << "Masukkan jumlah tabung : ";
    data_tabung.size = data_tabung.inputData();
    cout << endl;

    tabung arrTabung[data_tabung.size];
    data_tabung.input_tabung(arrTabung, data_tabung.size);

    data_tabung.display(arrTabung, data_tabung.size);

    data_tabung.arr_Voltabung(arrTabung, data_tabung.size);
}