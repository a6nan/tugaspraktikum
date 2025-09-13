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
        cout << "Suhu Awal Celcius" << endl;
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Fahrenheit" << endl;
        cout << "2. Kelvin" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menucelcius;

        if(menucelcius==1) //Celcius to Fahrenheit
    {
        cout << "Celcius to Fahrenheit" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = (9.0/5.0 * suhuawal) + 32;
        cout << "Suhu Akhir : " << suhuakhir << endl;
    }
    
    if(menucelcius==2) //Celcius to Kelvin
    {
    cout << "Celcius to Kelvin" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = suhuawal + 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menucelcius==3) //Celcius to Reamur
    {
        cout << "Celcius to Reamur" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = (suhuawal * 4) / 5;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }
    }

    else if(menu==2)
    {
        cout << "Suhu Awal Fahrenheit" << endl;
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Kelvin" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menufahrenheit;

        if(menufahrenheit==1) //Fahrenheit to Celcius
    {
        cout << "Fahrenheit to Celcius" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 5.0/9.0 * (suhuawal - 32);
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menufahrenheit==2) //Fahrenheit to Kelvin
    {
        cout << "Fahrenheit to Kelvin" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 5.0/9.0 * (suhuawal - 32) + 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    if(menufahrenheit==3) //Fahrenheit to Reamur
    {
        cout << "Fahrenheit to Reamur" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 4.0/9.0 * (suhuawal - 32);
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }
    }

        else if(menu==3)
    {
        cout << "Suhu Awal Kelvin" << endl;
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Reamur" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menukelvin;


        if(menukelvin==1) //Kelvin to Celcius
        {
        cout << "Kelvin to Celcius" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = suhuawal - 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }
        if(menukelvin==2) //Kelvin to Fahrenheit
        {
        cout << "Kelvin to Fahrenheit" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 1.8 * (suhuawal - 273.15) + 32;
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

        if(menukelvin==3) //Kelvin to Reamur
        {
        cout << "Kelvin to Reamur" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 4.0/5.0 * (suhuawal - 273.15);
        cout << "Suhu Akhir : " << suhuakhir << endl;    
    }

    }

    else if(menu==4)
    {
        cout << "Suhu Awal Reamur" << endl;
        cout << "Pilih Suhu Akhir" << endl;
        cout << "1. Celcius" << endl;
        cout << "2. Fahrenheit" << endl;
        cout << "3. Kelvin" << endl;
        cout << "Pilih Menu [1/2/3]" << endl;
        cin >> menureamur;
    
        if(menureamur==1) //Reamur to Celcius
        {
        cout << "Reamur to Celcius" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = 5.0/4.0 * suhuawal;
        cout << "Suhu Akhir : " << suhuakhir << endl;
        }
        
        if(menureamur==2) //Reamur to Fahrenheit
        {
        cout << "Reamur to Fahrenheit" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir =  9.0/4.0 * suhuawal + 32;
        cout << "Suhu Akhir : " << suhuakhir << endl;
        }
        
        if(menureamur==3) //Reamur to Kelvin
        {
        cout << "Reamur to Kelvin" << endl;
        cout << "Suhu Awal : ";
        cin >> suhuawal;
        suhuakhir = (suhuawal * 5.0/4.0) + 273.15;
        cout << "Suhu Akhir : " << suhuakhir << endl;
        }    
    }
    return 0;
}
