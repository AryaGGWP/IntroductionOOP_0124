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
};

int main(){

}