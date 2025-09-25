#include <iostream>
using namespace std;

int main(){
    int ti;
    int pti;
    int si;
    cout << "TI: ";
    cin >> ti;
    cout << "SI: ";
    cin >> si;
    cout << "PTI: ";
    cin >> pti;
   
    cout << "Urutan juara : ";

    if (ti > si && ti > pti)
    {
     cout << "TI - ";
    }
    if (pti > si) {
     cout << "PTI - SI";
    }
    else if (si > pti) {
     cout << "SI - PTI";
    }

    if (pti > si && pti > ti)
    {
        cout << " - TI";
    }


    if (si > ti && si > pti)
    {
        cout << " - TI";
    }

    cout << endl;
    return 0;



}