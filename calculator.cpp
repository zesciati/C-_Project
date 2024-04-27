#include <iostream>

using namespace std;

int main(){
    float a,b,c,hasil; // nilai bisa koma
    char aritmatika; // menyimpan data tunggal yaitu + - / *

    cout << "Selamat datang di program Kalkulator\n\n" ;

    cout << "masukkan nilai a : ";
    cin >> a ;
    cout << "Pilih +, -, /, * : ";
    cin >> aritmatika;
    cout << "masukkan nilai b : ";
    cin >> b;

    // if(aritmatika == '+'){
    //     hasil = a + b;
    // }else if(aritmatika == '-'){
    //     hasil = a - b;
    // }else if(aritmatika == '/'){
    //     hasil = a / b;
    // }else if(aritmatika == '*'){
    //     hasil = a * b;
    // }else {
    //     cout << "\noperator yang dipilih salah" << endl;
    // }

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '/':
        hasil = a / b;
        break;
    case '*':
        hasil = a * b;
        break;
    default:
        cout << "\noperator salah" << endl;
        break;
    }

    cout << "a " << aritmatika << " b" <<" = "<< hasil << endl;

    cin.get();
    return 0;




}