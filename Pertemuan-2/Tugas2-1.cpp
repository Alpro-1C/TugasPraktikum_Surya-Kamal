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
    //Pendeklarasian semua variabel
    int firstValue=10;
    int secondValue=8;
    int varTambahan;

    //Variabel backup digunakan untuk mengembalikan nilai yang sudah dirubah ke nilai awal 
    int backupFirst = firstValue;
    int backupSecond = secondValue;

    cout << "Program menukar nilai variabel \n\n";
    
    //Menampilkan nilai awal
    cout << "First Value = " <<firstValue<<endl;
    cout << "Second Value = " <<secondValue<<endl;

    //Pemanggilan function looping garis pembatas
    Garis();

    //Program menukar nilai variabel menggunakan variabel tambahan
    cout << "Menggunakan variabel tambahan \n\n";

    //Proses penukaran nilai variabel menggunakan operator sama dengan (=)
    varTambahan = firstValue;
    firstValue = secondValue;
    secondValue = varTambahan;

    //Menampilkan niali variabel yang sudah di rubah
    cout << "First Value = " <<firstValue<<endl;
    cout << "Second Value = " <<secondValue<<endl;

    Garis();

    //Mengembalikan nilai yang sudah dirubah ke nilai awal
    firstValue = backupFirst;
    secondValue = backupSecond;

    //Program menukar nilai variabel tanpa menggunakan variabel tambahan
    cout << "Tanpa menggunakan variabel tambahan \n\n";

    //Proses penukaran nilai variabel menggunakan operator XOR (^)
    firstValue = firstValue ^ secondValue;
    secondValue = firstValue ^ secondValue;
    firstValue = firstValue ^ secondValue;

    //Menampilkan niali variabel yang sudah di rubah
    cout << "First Value = " <<firstValue<<endl;
    cout << "Second Value = " <<secondValue<<endl;
}