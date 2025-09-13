#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int menu;
    int menucelcius;
    int menufahrenheit;
    int menukelvin;
    int menureamur;
    double suhuawal;
    double suhuakhir;


    cout << "Konversi Suhu" << endl;
    cout << "Pilih Suhu Awal" << endl;
    cout << "1. Celcius" << endl;
    cout << "2. Fahrenheit" << endl;
    cout << "3. Kelvin" << endl;
    cout << "4. Reamur" << endl;
    cout << "Pilih Menu [1/2/3/4]" << endl;
    cin >> menu;

    if(menu==1)
    {
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Fahrenheit" << endl;
        cout << "2. Kelvin" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menucelcius;
    }

    else if(menu==2)
    {
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Kelvin" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menufahrenheit;
    }

        else if(menu==3)
    {
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menukelvin;
    }

    else if(menu==4)
    {
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menureamur;
    }

    if(menucelcius==1) //Celcius to Fahrenheit
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = (9.0/5.0 * suhuawal) + 32;
        cout << "Suhu Akhir : " << suhuakhir << endl;
    }
    
    if(menucelcius==2) //Celcius to Kelvin
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = suhuawal + 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menucelcius==3) //Celcius to Reamur
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = (suhuawal * 4) / 5;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

   //////////////////////////////////////////////////////////////////////////////

    if(menufahrenheit==1) //Fahrenheit to Celcius
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 5.0/9.0 * (suhuawal - 32);
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menufahrenheit==2) //Fahrenheit to Kelvin
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 5.0/9.0 * (suhuawal - 32) + 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menufahrenheit==3) //Fahrenheit to Reamur
    {
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 4.0/9.0 * (suhuawal - 32);
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }





    

}