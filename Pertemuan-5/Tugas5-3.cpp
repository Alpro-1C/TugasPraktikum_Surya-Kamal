#include <iostream>

using namespace std;

//Pembuatan function looping untuk garis pembatas
void garis(){
    for (int i = 0; i <= 60; i++){
        cout << "-";
    }
    cout << "\n";
}

void deretFibo();//Function tanpa pengembalian nilai dengan statement di bawah int main(){}

int main(){
    deretFibo();//Pemanggilan functionnya
}

void deretFibo(){//Function tanpa pengembalian nilai
    //Pendeklarasian variabel limit untuk menentukan batas pencarian deret, f untuk menampung rumus deret fibonacci, sedangkan f1 dan f2 untuk menyimpan angka deret fibonacci yang sudah ada.
    int limit, f, f1, f2;

    cout << "\n\t\t Program Deret Fibonacci \n";

    //Pemanggilan function looping garis
    garis();

    //Pengisian variabel limit yang dilakukan pengguna
    cout << "Masukkan limit jumlah deret Fibonacci yang ingin dicari : ";
    cin >> limit;

    //Pengisian nilai awal dari variabel f1 dan f2 
    f1 = 1;
    f2 = 0;
    //Memasukkan rumus untuk menentukkan deret fibonacci ke variabel f
    f = f1 + f2;

    //Menampilkan output dari deret fibonacci
    cout << "Deret fibonaccinya adalah : ";
    cout << f << " ";
    //Looping untuk mencari deret fibonacci
    for (int i = 0; i < limit; i++){
        //Memanggil variabel ke dalam looping
        f = f1 + f2;
        /* Menukar nilai dari 3 variabel
        dengan contoh
        1 1 0 (bilangan di deret kedua = 1 dan bilangan di deret ketiga = 0 dijumlahkan menjadi satu dan diletakkan di deret pertama)
        2 1 1 (selanjutnya pindahkan nilai di deret pertama ke deret kedua, dan nilai deret ke dua ke deret ketiga lalu jumlahkan keduanya dan taruh di deret pertama)
        3 2 1 (lalu ulangkan cara kedua dan seterusnya)
        5 3 2 */
        f2 = f1;
        f1 = f;

        //Menampilkan deret fibonacci yang sudah di cari
        cout << f << " "; 
    }

    cout << "\n\n";
}