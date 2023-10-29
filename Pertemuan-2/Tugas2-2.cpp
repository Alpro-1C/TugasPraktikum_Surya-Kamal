#include <iostream>
using namespace std;
//Pembuatan function looping untuk garis pembatas
void Garis(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
    cout << "\n";
}

int main(){
    //Pendeklarasian variabel
    int bebek = 17;
    int teman = 3;
    int bebekBagi, sisaBebek;

    cout << "Program menghitung jumlah bebek pak Tatang \n";

    //Pemanggilan looping garis pembatas
    Garis();

    //Operasi aritmatika untuk menghitung jumlah bebek dengan operasi bagi dan modulus
    bebekBagi = bebek / teman;
    sisaBebek = bebek % teman;

    //Penyelesaian dari masalah bebek pak Tatang
    cout << "Penyelesaian : \n";
    cout << "Pak Tatang memiliki " << bebek << " ekor bebek dan ingin membagikannya kepada " << teman << " orang temannya. Maka, masing-masing temannya akan menerima " << bebekBagi << " ekor bebek, dan setelah pembagian, Pak Tatang hanya akan memiliki " << sisaBebek << " ekor bebek sisa.";

}