#include <iostream>
using namespace std;

class Planet{
    private:
        float gravitasi;
    public:
        string nama;
        float diameter;
        void displayData(){
            cout << ", gravitasiku " << gravitasi << endl;
        }
        void inputData(){
            cout << "Masukkan nama planet : ";
            cin >> nama;
            cout << "Masukkan diameter planet : ";
            cin >> diameter;
            cout << "Masukkan gravitasi planet : ";
            cin >> gravitasi;
        }
};

int main(){
    Planet bumi;
    bumi.inputData();
    cout << "Halo aku planet " << bumi.nama << endl;
    cout << "ukuranku adalah sekitar " << bumi.diameter << endl;
    bumi.displayData();
}