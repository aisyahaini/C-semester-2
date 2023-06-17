#include<stdio.h>
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;

main()
{
  //Deklarasi Variabel
  int Nilai[20];
  int i, j, N;
  int temp, awal, akhir, tengah, Bilangan;

  //Proses Penginputan data
  cout << "Binary search" << endl;
  cout<<"Banyak Bilangan : ";
  cin>>N;
  for(i=0; i<N; i++)
  {
    cout<<"Elemen ke-"<<i<<" = ";
    cin>>Nilai[i];
  }
  cout<<"\nElemen Sebelum diurut = ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];

  //Proses Pengurutan Data
  for(i=0; i<N-1; i++)
  {
    for(j=i+1; j<N; i++)
    {
      if (Nilai[i] > Nilai[j])
      {
        temp = Nilai[i];
        Nilai[i] = Nilai[j];
        Nilai[j] = temp;
      }
    }
  }
  cout<<"\nElemen Setelah diurut = ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<Nilai[i];
    cout<<"\nindeks Elemen = ";
  for(i=0; i<N; i++)
    cout<<setw(3)<<i;
    cout<<"\nMasukkan data yang akan anda cari: ";
    cin>>Bilangan;

  //Proses Pencarian Data
  awal = 0;
  akhir = N-1;
  do
  {
    tengah = (akhir + awal)/2;
    if(Bilangan < Nilai[tengah])
      akhir = tengah - 1;
    else
      awal = tengah + 1;
  }
  while((akhir >= awal) && (Nilai[tengah] !=Bilangan));
  if(Nilai[tengah] == Bilangan)
  {
    cout<<"\nData "<<Bilangan<<" ada dalam array";
    cout<<" pada posisi "<<tengah;
  }
  else
    cout<<"\nData "<<Bilangan<<" tidak ada dalam array\n";
  getch();
}
