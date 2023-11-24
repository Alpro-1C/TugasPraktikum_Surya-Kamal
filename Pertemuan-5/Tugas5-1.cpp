#include <iostream>

using namespace std;

int limit, hasil;

void garis(){//Pembuatan function looping untuk garis pembatas
    for (int i = 0; i <= 80; i++){
        cout << "-";
    }
    cout << "\n\n";
}

void ganjil(){//Function mencari bilangan ganjil tanpat argumen
    cout << "Bilangan Ganjil antara 1 sampai " << limit << " adalah : ";
    for(int i = 1; i <= limit; i+=2){
        cout << i << " ";
        hasil += i;
    }
    cout << "\nJumlah dari semua bilangan Ganjil yang ada adalah : " << hasil;  
    cout << "\nFaktor bilangan dari " << hasil << " adalah : "; 
    for (int i = hasil; i > 0; i--){  
            if (hasil % i == 0){
                cout << i << " "; 
            }
        }
    cout << "\n";
    garis();

    hasil = 0;
}

void genap(int limit);//Function mencari Bilangan Genap dengan posisi dibawah int main(){}

void prima(int limit){//Function mencari Bilangan Prima dengan argumen
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

    cout << "\n";
    garis();

    hasil = 0;
}

int main(){
    int program;

    do{
        cout << "Program Mencari Bilangan \n1) Mencari Bilangan Ganjil \n2) Mencari Bilangan Genap \n3) Mencari Bilangan Prima \n\n";

        cout << "Pilih Program Yang Ingin Di Lakukan : ";
        cin >> program;

        cout << "\n";

        garis();

        switch (program)
        {
        case 1 :
            cout << "\t\t\t Program Mencari Bilangan Ganjil \n\n";
            cout << "Masukkan Batas Bilangan Positif : ";
            cin >> limit;

            cout << "\n";

            if (limit > 0){
            ganjil();
            }else{
                cout << "Elaaah, Yang Bener Kek, Masukkin Ulang Angka Limitnya Cepet!!! \n";
            }
            break;

        case 2 :
            cout << "\t\t\t Program Mencari Bilangan Genap \n\n";
            cout << "Masukkan Batas Bilangan Positif : ";
            cin >> limit;

            cout << "\n";

            if (limit > 0){
            genap(limit);
            }else{
                cout << "Elaaah, Yang Bener Kek, Masukkin Ulang Angka Limitnya Cepet!!! \n";
            }
            break;

        case 3 : 
        cout << "\t\t\t Program Mencari Bilangan Prima \n\n"; //Program mencari bilangan prima
            cout << "Masukkan Batas Bilangan Positif : ";
            cin >> limit;

            cout << "\n";

            if (limit > 0){
            prima(limit);
            }else{
                cout << "Elaaah, Yang Bener Kek, Masukkin Ulang Angka Limitnya Cepet!!! \n";
            }
            break;
        default:
            if (program > 3 || program < 1){
            cout << "Milih yang bener lah bang \n";
            }else{}

            break;
        }

    }while(limit <= 0);
}

void genap(int limit){
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
    cout << "\n";
    garis();
    
    hasil = 0; //Sama seperti sebelumnya setelah selesai program kedua variabel hasil yang digunakan akan di reset nilainya kembali ke 0

}