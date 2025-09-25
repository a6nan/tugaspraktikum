#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() 
{   
    string fakultas;
    cin >> fakultas;
    transform(fakultas.begin(),fakultas.end(),fakultas.begin(),::tolower);
    string lokasi; 
    string ktt = "Unesa Ketintang";
    string liwet = "Unesa Lidah Wetan";
    string moestopo = "Unesa Moestopo";
    
    if(fakultas == "teknik" || fakultas == "ekonomi") {
        cout << "Fakultas " << fakultas << "Di Ketintang";
    }

}