#include <iostream>

using namespace std;

int main(){
    int Ar1 [5];
    int indeksNilai = 0;

    cout << "Program Array (Mencari Nilai Terbesar)\n\n";

    
    cout << "Input 5 Nilai \n";
    for (int i = 0; i < 5; i++)
    {
        cout << "Nilai ke - " << i << " : ";
        cin >> Ar1[i];
    }

    cout << "\n";

    cout << "Berikut Nilai Yang DiInputkan \n";
    for (int j = 0; j < 5; j++)
    {
        cout << "Nilai ke - " << j << " : ";
        cout << Ar1[j] << endl;
    }

    cout << "\n";
    
    int nilaiTerbesar = Ar1[0];

    // Mencari nilai terbesar dan indeksnya
    for (int k = 1; k < 5; k++) {
        if (Ar1[k] > nilaiTerbesar) {
            nilaiTerbesar = Ar1[k];
            indeksNilai = k;
        }
    }

    cout << "Nilai terbesar dari 5 Nilai yang ada adalah : " << nilaiTerbesar << " dari indeks : " << indeksNilai << "\n\n" ;
}