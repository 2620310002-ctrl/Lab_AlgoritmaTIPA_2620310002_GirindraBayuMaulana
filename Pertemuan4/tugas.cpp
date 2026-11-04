#include<iostream>
#include<iostream>
using namespace std;
main(){
    float NR;
    int N1,N2,N3;
    string nama;
    cout << "Masukan Nama Siswa : ";
    getline(cin, nama);

    cout << "Masukan Nilai Pertandingan 1 : ";
    cin >> N1;
    cout << "Masukan Nilai Pertandingan 2 : ";
    cin >> N2;
    cout << "Masukan Nilai Pertandingan 3 : ";
    cin >> N3;

    NR = (N1 + N2 + N3) /3;

    if (NR >= 85){
        
    }
}