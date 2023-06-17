#include <iostream>
#include <string.h>
#include <string>
#include <cstring>
#include "hp.h" //kembali ke header (hp.h)

using namespace std;

int main ()
{
    hp data_hp;
    cout << "Masukkan jumlah data hp : ";
    data_hp.size = data_hp.input_jumlah();
    cout << endl;

    hp arrHp[data_hp.size];
    data_hp.input_hp(arrHp, data_hp.size);
    data_hp.display(arrHp, data_hp.size);

    data_hp.sort_data(arrHp, data_hp.size);
    data_hp.display(arrHp, data_hp.size);

}