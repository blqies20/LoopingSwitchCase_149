#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    int x;
    int perulanganWhile = 0;
    //Perulangan While
    cout << "Perulangan dengan while" << endl;
    srand(time(0));
    x = rand() % 10;
    cout << "Nilai awal x = " << x << endl;
    while (x < 5) {
        cout << "Nilai x = " << x << " Lari keliling lapangan" << endl;
        x = rand() % 10;
        perulanganWhile++;
    }
    cout << "Nilai akhir x = " << x << endl;
    cout << "Perulangan while berlangsung sebanyak = " << perulanganWhile << endl;
}