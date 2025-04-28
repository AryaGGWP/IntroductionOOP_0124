#include <iostream>
using namespace std;

class persegiPanjang{
    public:
    float panjang;
    float lebar;
    float luas(){
        return panjang*lebar;
    }
};

int main(){
    persegiPanjang pp;
    cout << "Masukkan panjang persegi panjang : "; cin >> pp.panjang;
    cout << "Masukkan lebar persegi panjang : "; cin >> pp.lebar;
    cout << "\n-----Hasil Perhitungan-----";
    cout << "Luas persegi panjang adalah : " << pp.luas() << endl;
}