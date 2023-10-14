#include <iostream>
using namespace std;

//Pemberian fuction looping untuk garis pembatas
void Garis(){
    for (int i = 0; i < 50; i++){
        cout << "-";
    }
}

int main(){

    //Pendeklarasian variabel
    string nama = "Surya Kamal";
    string kelas = "1C - Informatika";
    string cita = "Punya start-up unicorn";
    string motivasi = "Sama kaya cita-cita";
    long long int npm = 2310631170051;

    //Pemanggilan function looping pertama
    Garis();
    cout << "\n";

    //Pemanggilan Variabel
    cout << "Nama      : " <<nama;
    cout << "\n\n";

    cout << "Npm       : " <<npm;
    cout << "\n\n";
    
    cout << "Kelas     : " <<kelas;
    cout << "\n\n";

    cout << "Cita-cita : " <<cita;
    cout << "\n\n";

    cout << "Motivasi  : " <<motivasi;
    cout << "\n";

    //Pemanggilan function looping kedua
    Garis();
}
C:\Users\soery\Downloads\Helloword.cpp