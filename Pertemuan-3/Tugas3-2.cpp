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
    int a, b, c;

    //Program mencetak angka terbesar dari tingga angka yang ada
    cout << "Program Mencetak Angka Terbesar \n";

    //Pemanggilan function looping garis
    Garis();

    //Pengisian nilai variabel a
    cout << "Masukkan nilai a = ";
    cin >> a;

    //Pengisian nilai variabel b
    cout << "Masukkan nilai b = ";
    cin >> b;

    //Pengisian nilai variabel c
    cout << "Masukkan nilai c = ";
    cin >> c;
    cout << "\n";

    //Proses penyeleksian dari 3 nilai dimulai dari nilai a, apakah a lebih besar dari b dan c, jika iya maka akan ditampilkan output "Nilai terbesar adalah A" dengan isi nilainya.
    if (a > b && a > c){
        cout << "Nilai terbesar adalah A = " << a;
        cout << "\n\n";
    }
    //Selanjutnya adalah proses penyeleksian dari nilai b, apakah b lebih besar dari a dan c, jika iya maka akan ditampilkan output "Nilai terbesar adalah B" dengan isi nilainya.
    else if (b > a && b > c){
        cout << "Nilai terbesar adalah B = " << b;
        cout << "\n\n";
    }
    //Lalu yang terakhir adalah proses penyeleksian dari nilai c, apakah c lebih besar dari a dan b, jika iya maka akan ditampilkan output "Nilai terbesar adalah C" dengan isi nilainya.
    else if (c > a && c > b){
        cout << "Nilai terbesar adalah C = " << c;
        cout << "\n\n";
    }
    //Else digunakan untuk menangkap input yang tidak sesuai dari 3 kondisi diatas
    else {
        cout << "Nilai tak terdefinisi";
    }
}