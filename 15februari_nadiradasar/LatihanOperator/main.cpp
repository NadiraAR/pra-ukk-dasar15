#include <iostream>

using namespace std;

int main()
{
    int a, t, r;
    float  LuasSegitiga, LuasLingkaran;
    float phi = 3.14;

    cout << "=================================" <<endl;
    cout << "Aplikasi penghitung luas segitiga" <<endl;
    cout << "=================================" <<endl;

    cout << "Masukkan alas segitiga " <<endl;
    cin >> a;
    cout << "masukkan tinggi segitiga " <<endl;
    cin >> t;
    LuasSegitiga = 0.5*a*t;
    cout << "luas segitiga adalah " << LuasSegitiga << "cm2" <<endl;


     cout << "=================================" <<endl;
    cout << "Aplikasi penghitung luas lingkaran" <<endl;
    cout << "=================================" <<endl;

    cout << "Masukkan jari-jari lingkaran " <<endl;
    cin >> r;
    LuasLingkaran = 3,14*r*r;
    cout << "luas lingkaran adalah " << LuasLingkaran << "cm2" <<endl;

    return 0;
}
