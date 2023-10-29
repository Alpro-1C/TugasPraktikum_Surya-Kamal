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
    //Pendeklarasian semua variabel yang akan digunakan dengan tipe data int
    int a, sisi, panjang, lebar, alas, tinggi, luas;
    
    //Tampilan output untuk menunjukkan menu program yang bisa dipilih
    cout << "Program menghitung Luas \n\n";
    cout << "1. Luas Persegi \n";
    cout << "2. Luas Persegi Panjang \n";
    cout << "3. Luas Segitiga \n\n";

    //Pengisian variabel a yang selanjutnya akan digunakan untuk memanggil salah satu program.
    cout << "Program yang dipilih : ";
    cin >> a;
    
    //Pemanggilan function looping garis pembatas
    Garis();

    //Program switch menhitung luas dengan statement a yang berisi 3 case, Luas persegi, Luas persegi panjang, Luas segitiga  
    switch (a){
    //Case 1 yang berisi program menghitung luas persegi
    case 1:
        cout << "Program menghitung luas persegi \n\n";

        //Pengisian variabel sisi
        cout << "Masukkan panjang Sisi = ";
        cin >> sisi;

        cout << "\n";

        //Proses penghitungan luas persegi menggunakan operator aritmatika (*)
        luas = sisi * sisi;

        //Menampilkan hasil luas 
        cout << "Hasil dari luas perseginya adalah = " << luas << " cm" << endl << endl;

        break;

    //Case 2 yang berisi program menghitung luas persegi panjang
    case 2:
        cout << "Program menghitung luas persegi panjang \n\n";

        //Pengisian variabel panjang dan lebar
        cout << "Masukkan panjang = ";
        cin >> panjang;
        cout << "Masukkan lebar = ";
        cin >> lebar;

        cout << "\n";

        //Proses penghitungan luas dengan operator aritmatika (*)
        luas = panjang * lebar;

        //Menampilkan hasil dari perhitungan luas
        cout << "Hasil dari luas persegi panjangnya adalah = " << luas << " cm" << endl << endl;

        break;

    //Case 3 yang berisi perogram menghitung luas segitiga
    case 3:
        cout << "Program menghitung luas segitiga \n\n";

        //Pengisian variabel alas dan tinggi
        cout << "Masukkan alas = ";
        cin >> alas;
        cout << "Masukkan tinggi = ";
        cin >> tinggi;

        cout << "\n";

        //Proses penghitungan luas dengan operator aritmatika (*) yang nantinya hasil dari perhitungan tersebut akan dimasukkan ke dalam variabel Luas
        luas = 0.5 * alas * tinggi;

        //Menampilkan hasil dari perhitungan luas segitiga
        cout << "Hasil dari luas segitiganya adalah = " << luas << " cm" << endl << endl;

        break;
    //Default digunakan untuk menangkap inputan yang tidak sesuai dengan ketentuan yang ada
    default:
        cout << "Milih yang bener dong!!! \n\n";
    }
}