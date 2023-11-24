#include <iostream>

using namespace std;

int segitiga(int height){//Return Value Function untuk membuat Segitiga Bintang

    cout << "\n";

    for (int a = 1; a <= height; a++){ //looping pertama untuk menentukkan tinggi segitiga  
        for (int b = height; b > a; b--){ //Looping kedua untuk memberikan spasi di sisi kiri segitiga 
            cout << " ";
        }
        for (int c = 1; c <= (2 * a - 1); c++){ //Looping ketiga digunakan untuk memasukkan bintang, (2*a-1) merupakan rumus untuk membentuk segitiga yang sebelumnya hanya segitiga siku-siku menjadi segitiga sama kaki
            cout << "*"; //Bintang merupakan nilai yang digunakan untuk membentuk segitiga
        }

        cout << endl;
    }
    cout << endl;
    return height;//Mengembalikan nilai function 
}

int main(){
    int tinggi;

    cout << "Masukkan tinggi segitiga yang diinginkan : ";//Pengisian nilai variabel
    cin >> tinggi;

    segitiga(tinggi);//Pemanggilan function dengan nilai yang sudah diinputkan pada variabel tinggi
    return 0;

}