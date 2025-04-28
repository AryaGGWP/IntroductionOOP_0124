#include <iostream>
using namespace std;

class Planet{
    private:
        float gravitasi;
    public:
        string nama;
        float diameter;
        void displayData(){
            cout << "Halo aku planet : " << nama 
            << ", ukuranku : " << diameter 
            << ", gravitasiku : " << gravitasi<< endl;
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
    Planet 
}