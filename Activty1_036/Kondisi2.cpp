#include <iostream>
using namespace std;

double rerata(double a, double b){
    return (a+b)/2;
}

string status (double r){
    if (r >=60){
        return "Lulus";
    }
    else {
        return "gagal";
    }
}

string status2(double r, double n){
    if (r >= 60 && n >=70){
        return "Lulus";
    }
    else {
        return "Gagal";
    }
}

string status3(double r, double n){
    if (r >= 60 || n >=70){
        return "Lulus";
    }
    else {
        return "Gagal";
    }
}

int main (){
    double Nilaimtk, Nilaibhs;

    cout << " Masukkan Nilai Matematika :";
    cin >>Nilaimtk;
     cout << " Masukkan Nilai Bahasa :";
    cin >>Nilaibhs;

    cout << "Nilai rata ratanya :" <<rerata(Nilaimtk, Nilaibhs);
    cout << "\nStatusnya :" <<status(rerata(Nilaimtk, Nilaibhs));
    cout << "\nStatusnya :" <<status2(rerata(Nilaimtk, Nilaibhs), Nilaimtk);
    cout << "\nStatusnya :" <<status3(rerata(Nilaimtk, Nilaibhs), Nilaimtk);
}