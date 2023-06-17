//judul
//		hitung jam

//kamus
//		JA, JAk, Ma, MAk, DA, DAk <-- integer
//		durasi <-- integer

//diskripsi
//		input JA, JAk, Ma, MAk, DA, DAk
//      durasi <-- (((JA*3600)-(JAk*3600)) + ((Ma * 60)-(MAk * 60)) + (DA - DAk))
//		output durasi

// judul
//		hitung jam
#include "iostream"
using namespace std;
//kamus
    int JA, JAk, MA, MAk, DA, DAk;
    int durasi;

//diskripsi
main()
{
    	cout << "masukan jam awal" ; cin >> JA;
    	cin >> JAk;
    	cin >> MA;
    	cin >> MAk;
    	cin >> DA;
    	cin >> DAk;
        durasi = (((JA*3600)-(JAk*3600)) + ((MA * 60)-(MAk * 60)) + (DA - DAk));
		cout << durasi;
}
