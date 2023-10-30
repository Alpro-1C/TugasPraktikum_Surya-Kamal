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
    //Pendeklarasian variabel yang akan digunakan
    int nilai;

    //Program mengevaluasi nilai score menggunakan funsi if else
    cout << "Program Evaluasi Nilai Score \n";

    //Pemanggilan function looping
    Garis();

    //Pengisian nilai variabel 
    cout << "Masukkan nilai anda = ";
    cin >> nilai;
    cout << endl;

    //Program if yang akan mengeluarkan output "Selamat, anda mendapatkan nilai A" jika nilai lebih dari sama dengan 90
    if (nilai >= 90 && nilai <= 100){
        cout << "Selamat!, Anda mendapatkan nilai A \n\n";
    }
    //Program else-if yang akan mengeluarkan output "Anda mendapatkan nilai B" jika nilai lebih dari sama dengan 80 dan nilai kurang dari sama dengan 89.
    else if (nilai <= 89 && nilai >= 80){
        cout << "Anda mendapatkan nilai B \n\n";
    }
    //Program else-if yang akan mengeluarkan output "Anda mendapatkan nilai C" jika nilai lebih dari sama dengan 70 dan nilai kurang dari sama dengan 79.
    else if (nilai <= 79 && nilai >= 70){
        cout << "Anda mendapatkan nilai C \n\n";
    }
    //Program else-if yang akan mengeluarkan output "Anda mendapatkan nilai D" jika nilai lebih dari sama dengan 60 dan nilai kurang dari sama dengan 69.
    else if (nilai <= 69 && nilai >= 60){
        cout << "Anda mendapatkan nilai D \n\n";
    }
    //Program else-if yang akan mengeluarkan output "Anda mendapatkan nilai E" jika nilai kurang dari 60.
    else if (nilai <= 59 && nilai >=0){
        cout << "Anda mendapatkan nilai E \n\n";
    }
    //Program else untuk menangkap input yang tidak sesuai dari semua kondisi di atas
    else{
        cout << "Nilai tak terdefinisi";
    }

}
