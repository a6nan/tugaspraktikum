#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
    int nilai;

    cout << "Masukkan Nilai anda : ";
    cin >> nilai;
    
    if (nilai>=90)
    cout << "Nilai anda 'A'" << endl;

    else if (nilai>=80)
    cout << "Nilai anda 'B'" << endl;

    else if (nilai>75)
    cout << "Nilai anda 'C'" << endl;

    else (nilai<=75)
    cout << "Nilai anda dibawah KKM" << endl;

    if (nilai<0)
    cout << "Nilai tidak boleh minus!"

    end

    
}