#include <iostream>
using namespace std;

int main(){
    int awal; //Deklarasikan tipe data
    int jarak; //Deklarasikan tipe data
    int lompatan; //Deklarasikan tipe data
    cin >> awal >> jarak >> lompatan; //Input awal, jarak, lompatan
    int hasil = awal + jarak * lompatan; //Hitung hasil
    cout << hasil << endl; return 0; //Print Hasil
}