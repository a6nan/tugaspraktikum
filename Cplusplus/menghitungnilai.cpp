#include <iostream>
using namespace std;

int main(){
    string nama;
    double tugas;
    double uts;
    double uas;
    cout << "Masukkan Nama: ";
    cin >> nama;
    cout << "Masukkan Nilai Tugas: ";
    cin  >> tugas;
    cout << "Masukkan Nilai UTS: ";
    cin >> uts;
    cout << "Masukkan Nilai UAS: ";
    cin >> uas;
    double nilaitugas = tugas * 30 / 100;
    double nilaiuts = uts * 30 / 100;
    double nilaiuas = uas * 40 / 100;
    double nilaiakhir = nilaitugas + nilaiuts + nilaiuas;
    cout << "Nilai Akhir dari " << nama << " adalah " << nilaiakhir << endl; return 0;
}