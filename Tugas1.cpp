#include <iostream>         //file yang disertakan line 1-2
using namespace std;       //program utama line 4-21

int main (){//begin
    double luas, p, l;
    cout << "Masukkan Panjangnya : ";
    //Display, "Masukkan Panjangnya : "
    cin >> p;
    //accept p
    cout << "Masukkan Lebarnya : ";
    //Display, "Masukkan Lebarnya :"
    cin >> l;
    //accept L
    luas = p*l;
    //compute Luas = p*l
    cout << "Luasnya : " << luas;
    //Display, "Luasnya : " +luas

}