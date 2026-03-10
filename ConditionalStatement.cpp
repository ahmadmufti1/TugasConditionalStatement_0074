#include <iostream>
using namespace std;

void Input(float &berat, float &tinggi)
{
    cout << "Masukkan Berat Badan (kg) : ";
    cin >> berat;
    cout << "Masukkan Tinggi Badan (m) : "; 
    cin >> tinggi;
}

float RumusBMI(float berat, float tinggi){
    return berat / (tinggi * tinggi);
}

