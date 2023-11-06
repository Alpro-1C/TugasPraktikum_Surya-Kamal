#include <iostream>

using namespace std;

int main(){
    int limit;

    cout << "Masukkan tinggi segitiga yang diinginkan : "; //Menginputkan tinggi dari segitiga bintang yang diinginkan dan akan ditampung di variabel limit
    cin >> limit;

    cout << "\n";

    for (int a = 1; a <= limit; a++){ //looping pertama untuk menentukkan tinggi segitiga  
        for (int b = limit; b > a; b--){ //Looping kedua untuk memberikan spasi di sisi kiri segitiga 
            cout << " ";
        }
        for (int c = 1; c <= (2 * a - 1); c++){ //Looping ketiga digunakan untuk memasukkan bintang, (2*a-1) merupakan rumus untuk membentuk segitiga yang sebelumnya hanya segitiga siku-siku menjadi segitiga sama kaki
            cout << "*"; //Bintang merupakan nilai yang digunakan untuk membentuk segitiga
        }

        cout << endl;
    }
    cout << "\n"; 
}