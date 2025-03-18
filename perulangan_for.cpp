#include<iostream>
using namespace std;

int main(){
    int cacah;
    //perulangan for untuk pencacah naik
    for (cacah = 0; cacah <= 5; cacah++) {
        cout << "Nilai Pencacahan = " << cacah << " Welcome " <<endl;
    }
    cout << endl;
    cout << "Nilai pencacahan terakhir = " << cacah;

    cout << endl;
    cout << endl;

    //perulangan for untuk pencacahan turun
    for (cacah = 5; cacah >= 0; cacah--) {
        cout << "Nilai Pencacahan = " << cacah << " Welcome " << endl;
    }
    cout << endl;
    cout << "Nilai pencacahan terakhir = " << cacah;
}