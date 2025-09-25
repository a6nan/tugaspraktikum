#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;

int main() 
{   
    string fakultas;
    getline(cin,fakultas);
    transform(fakultas.begin(),fakultas.end(),fakultas.begin(),::tolower);
    string lokasi; 
    string ktt = "Unesa Ketintang";
    string liwet = "Unesa Lidah Wetan";
    string moestopo = "Unesa Moestopo";
    
    if(fakultas == "teknik" || fakultas == "ilmu sosial & politik" || fakultas == "ekonomi & bisnis" || fakultas == "vokasi" || fakultas == "hukum" || fakultas == "matematika & ipa" ) 
    {
        cout << "Fakultas " << fakultas << " di " << ktt << endl;
        
    }
    else if(fakultas == "ilmu Pendidikan" || fakultas ==  "kedokteran" || fakultas == "psikologi" || fakultas == "ilmu keolahragaan dan kesehatan" || fakultas == "bahasa dan seni")
    {
        cout << "Fakultas " << fakultas << " di " << liwet << endl;
    }

    else if(fakultas == "ketahanan pangan")
    {
        cout << "Fakultas " << fakultas << " di " << moestopo << endl;
    }
    else 
    {
     cout << "Fakultas tidak valid" << endl;
    }

    return 0;
}