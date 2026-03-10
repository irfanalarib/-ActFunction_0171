#include <iostream>
using namespace std;

int panjang, lebar;

void input() {
    cout << "Masukkan panjang: ";
    cin >> panjang;
    cout << "Masukkan lebar: ";
    cin >> lebar;
}    

int luasPersegi() 
{
    return panjang * lebar;
}

void output()
{
    cout << "Hasilnya : " << luasPersegi();
}

int main() 
{
    input();
    output();
}