#include <iostream>

using namespace std;

//Pembuatan function looping untuk garis pembatas
void Garis(){
    for (int i = 0; i <= 80; i++){
        cout << "-";
    }
    cout << endl;
}

int main(){
    //Pendeklarasian variabel limit untuk menentukkan batas, dan hasil untuk menampung hasil penjumlahan
    int limit, hasil = 0;

    //Menggunakan looping do while untuk menginisiasi nilai limit apakah kurang dari 0 atau tidak, jika nilai yang dimasukkan kurang dari atau sama dengan 0 maka looping akan terus dilakukkan hingga nilai menjadi lebih dari 0
    do{
        cout << "Program Menampilkan, Menjumlahkan, Memfaktorkan bilangan Ganjil, Genap, dan Prima. \n";

        Garis();

        //Menginisiasi nilai variabel limit untuk mencari bilangan positif
        cout << "Masukkan Batas Bilangan Positif : ";
        cin >> limit;

        Garis();

    }while(limit <= 0); //Pengkondisian jika limit kurang dari atau sama dengan 0 maka looping akan diulang sampai limit lebih dari 0

    cout << "                 Bilangan Ganjil                 \n";
    cout << "Bilangan Ganjil antara 1 sampai " << limit << " adalah : "; //Menampilkan bilangan ganjil dari 1 sampai batas yang ditentukan di variabel limit
    for(int i = 1; i <= limit; i+=2){//Looping untuk mencari bilangan ganjil dengan nilai awal 1 dan akan ditambahkan 2 sampai mencapai nilai limit yang sudah ditentukan
        cout << i << " ";
        hasil += i; //Proses menambahkan setiap bilangan ganjil yang keluar dan di tampung di variabel hasil

        
    }
    cout << "\nJumlah dari semua bilangan Ganjil yang ada adalah : " << hasil; //Menampilkan jumlah dari semua bilangan ganjil yang 
    cout << "\nFaktor bilangan dari " << hasil << " adalah : "; //Looping untuk mencari faktor bilangan dari hasil penjumlahan semua bilangan ganjil yang tampil
    for (int i = hasil; i > 0; i--){ //Logika looping : nilai var hasil yang di masukkan ke var i, akan di kurangi angka satu setiap satu kali looping, dan akan terus berlangsung hingga i > 0 / i = 1. Setelah bilangan i lolos pengkondisian i > 0, maka ia akan masuk ke statement yang dimana isinya adalah if (hasil % i == 0) yang dimaksudkan untuk mencari apakah i yang memodulus hasil merupakan bilangan faktor dari hasil. Jika hasil yang dimodulus i == 0, maka i merupakan bilangan faktor dari hasil. 
            if (hasil % i == 0){
                cout << i << " "; //Bilangan faktor yang sudah di temukkan akan ditampailkan disini
            }
        }
    hasil = 0; /*Penginisiasian nilai variabel hasil ke 0, untuk mereset variabel hasil yang sudah terisi di program sebelumnya, agar saat digunakan di program selanjutnya nilai variabel hasilnya sesuai dengan hasil perhitungan di program selanjutnya tanpa pengaruh dari program sebelumnya.*/

    cout << endl;
    Garis();

    cout << "                 Bilangan Genap                 \n"; //Program mencari bilangan Genap
    cout << "Bilangan Genap antara 1 sampai " << limit << " adalah : "; //Mencari bilangan genap dengan batas yang di dimasukkan di awal.
    for(int i = 2; i <= limit; i+=2){ //Looping untuk mencari bilangan genap dari angka 2 sampai batas yang sudah di tentukan di awal, dengan cara menambahkan nilai awal i = 2 dengan 2 angka, hingga mencapai batas yang di tentukkan
        cout << i << " ";
        hasil += i; //Perintah untuk menjumlahkan setiap bilangan genap yang tampil dan akan di simpan di var hasil 
    }
    cout << "\nJumlah dari semua bilangan Genap yang ada adalah : " << hasil; //Selanjutnya hasil jumlah bilangan genap yang muncul akan di tampilkan di sini melalui var hasil
    cout << "\nFaktor bilangan dari " << hasil << " adalah : "; //Looping untuk mencari faktor dari hasil jumlah semua bilangan genap yang tampil 
    for (int i = hasil; i > 0; i--){ //Logika dan code yang digunakan sama seperti looping untuk mencari faktor bilangan ganjil
            if (hasil % i == 0){
                cout << i << " ";
            }
        }
    hasil = 0; //Sama seperti sebelumnya setelah selesai program kedua variabel hasil yang digunakan akan di reset nilainya kembali ke 0

    cout << endl;
    Garis();

    cout << "                 Bilangan Prima                 \n"; //Program mencari bilangan prima
    cout << "Bilangan Prima antara 1 sampai " << limit << " adalah : "; //Proses pencarian bilangan prima hingga batas yang sudah ditentukan
    for (int i = 2; i <= limit; ++i){ //Looping for loop dengan pengkondisian i <= limit, dan menggunakan pre-increment
        bool prima = true; //Boolean digunakan menyatakan semua nilai di looping pertama ada true bilangan prima
        for (int j = 2; j * j <= i; ++j){ //Looping kedua dengan variabel j yang nantinya akan digunakan sebagai pemodulus i, di sini j * j digunakan untuk mencari kuadrat dari variabel j itu sendiri.
            if(i % j == 0){ //Pengkondisian if dengan syarat jika i dimodulus j == 0 maka i akan di nyatakan false billangan prima, dan akan langsung keluar looping kedua
            prima = false; //Boolean yang menyatakan false, jika i % j == 0.
            break; //Break digunakan untuk keluar dari looping kedua dan masuk kembali ke looping ke satu
            }
        }
        if (prima == true){ //Jika bilangan i % j != 0 dan boolean true yang diberikan sebelum looping kedua tetap bernilai true, maka bilangan tersebut akan dinyatakan sebagai bilangan prima,  dan selanjutnya akan dicetak.
            cout << i << " "; //Menampilkan bilangan prima yang sudah dicari
            hasil += i; //Proses menambahkan setiap bilangan prima yang keluar dan akan di tampung di variabel hasil
        }
    }
    cout << "\nJumlah dari semua bilangan Prima yang ada adalah : " << hasil; //Selanjutnya hasil jumlah bilangan prima yang muncul akan di tampilkan di sini melalui var hasil
    cout << "\nFaktor bilangan dari " << hasil << " adalah : "; //Looping untuk mencari faktor dari hasil jumlah semua bilangan genap yang tampil
    for (int i = hasil; i > 0; i--){ //Logika dan code yang digunakan sama seperti looping untuk mencari faktor bilangan ganjil
            if (hasil % i == 0){
                cout << i << " ";
            }
        }
    hasil = 0;
    cout << "\n\n";
}