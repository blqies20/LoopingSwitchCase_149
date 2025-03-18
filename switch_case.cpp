#include <iostream>
using namespace std;

float hitungLuasPersegiPanjang(float p, float l){
    return p * l;
}
float hitungLuasSegitiga(float a, float t){
    return 0.5 * a * t;
}

int main(){
    int opsi;
    do
    {
        cout << "            - Menu -            " << endl;
        cout << "1. Menghitung luas persegi panjang" << endl;
        cout << "2. Menghitung luas segitiga" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih menu (1/2/3): ";
        cin >> opsi;
        float panjang, lebar, alas, tinggi;
        switch (opsi){
            case 1: 
                cout << endl;
                cout << "Menghitung luas persegi panjang" << endl;
                cout << endl;
                cout << "Masukkan panjang = ";
                cin >> panjang;
                cout << "Masukkan lebar = ";
                cin >> lebar;
                cout << "Luas Persegi Panjang = " << hitungLuasPersegiPanjang(panjang, lebar) << endl;
                cout << endl;
                break;
            case 2 :
                cout << endl;
                cout << "Menghitung luas segitiga" << endl;
                cout << endl;
                break;
            case 3:
                cout << endl;
                cout << "Terima kasih telah menggunakan program ini" << endl;
                break;
            default:
                cout << "Pilihan tidak ada dalam menu" << endl;
                break;
        }
    } while (opsi != 3);   
}