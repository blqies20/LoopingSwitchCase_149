#include <iostream>
using namespace std;

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
        switch (opsi){
            case 1: 
                cout << "Menghitung luas persegi panjang" << endl;
                cout << endl;
                break;
            case 2 :
                cout << "Menghitung luas segitiga" << endl;
                cout << endl;
                break;
            case 3:
                cout << "Terima kasih telah menggunakan program ini" << endl;
                break;
            default:
                cout << "Pilihan tidak ada dalam menu" << endl;
                break;
        }
    } while (opsi != 3);   
}