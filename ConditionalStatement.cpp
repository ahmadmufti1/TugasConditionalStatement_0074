#include <iostream>
using namespace std;

// Fungsi untuk input berat dan tinggi
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

string BeratBadan(float berat){
    if (berat < 18.5) {
        return "Berat Badan Kurus";
    } else if (berat >= 18.5 && berat < 25) {
        return "Berat Badan Normal";
    } else if (berat >= 25 && berat < 30) {
        return "Berat Badan Gemuk";
    } else {
        return "Obesitas";
    }
}

int main()
{
    cout << "-- Selamat Datang di Kalkulator BMI by Ahmad Aqilah Mufti --" << endl;

    float berat, tinggi;

    Input(berat, tinggi);

    cout << "-- Hasil Perhitungan BMI Anda --" << endl;
    float bmi = RumusBMI(berat, tinggi);
    cout << "BMI Anda adalah: " << bmi << endl;
    cout << "Kategori Berat Badan: " << BeratBadan(bmi) << endl;

    return 0;
}