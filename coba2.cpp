#include <iostream>
using namespace std;

class persegiPanjang{
    public:
    float panjang;
    float lebar;
    float luas(){
        return panjang*lebar;
    }
    void inputData(){
        cout << "Masukkan panjang : "; cin >> panjang;
        cout << "Masukkan lebar : "; cin >> lebar;
    }

    void displayData(){
        cout << "Luas persegi panjang adalah : " << luas() << endl;
    }
};

int main(){
    persegiPanjang pp;
    pp.inputData();
    cout << "\n-----Hasil Perhitungan-----\n";
    pp.displayData();
}