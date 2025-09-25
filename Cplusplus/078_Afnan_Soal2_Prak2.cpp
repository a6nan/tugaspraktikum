#include <iostream>
#include <stdio.h>
using namespace std;

int main() 
{
    int umur;
    cin >> umur;
    int hargaawal = 50000;
    int potongan;
    int hargaakhir;
    int diskon;

    if (umur >=18){
        cout << "Tidak dapat diskon" << endl;
        cout << "Potongan : Rp 0" << endl;
        cout << "Harga akhir : Rp 50000" << endl; 
    }

    else if(umur >= 13 && umur <=6){
        potongan = hargaawal * 0.25;
        hargaakhir = hargaawal - potongan;
        cout << "Diskon 25%" << endl;
        cout << "Potongan : Rp " << potongan << endl;
        cout << "Harga akhir : Rp " << hargaakhir << endl; 
    }

    else if(umur >= 5 && umur <=12){
        potongan = hargaawal * 0.5;
        hargaakhir = hargaawal - potongan;
        cout << "Diskon 50%" << endl;
        cout << "Potongan : Rp " << potongan << endl;
        cout << "Harga akhir : Rp " << hargaakhir << endl; 
    }

    else {
        potongan = 50000;
        hargaakhir = 0;
        cout << "Gratis" << endl;
        cout << "Potongan : Rp " << potongan << endl;
        cout << "Harga akhir : Rp " << hargaakhir << endl; 
    }

    return 0;

}