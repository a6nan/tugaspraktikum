#include <iostream>
using namespace std;
int main(){
    int x; //Definisikan variabel tahun kelahiran.
    int y; //Definisikan variabel tahun sekarang.
    cout << "Tahun Kelahiran : ";
    cin >> x; //Input tahun kelahiran. 
    cout << "Tahun Sekarang : ";
    cin >> y; //Input Tahun Sekarang.
    int z = y - x; //Pengurangan tahun.
    cout << "Jika anda lahir pada tahun " << x << " dan sekarang tahun " << y << ", maka umur anda adalah " << z << " tahun." << endl; //Print 
    return 0;  //End
}