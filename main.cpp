#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    string imie, nazwisko;
    cout << "Wpisz swoje imie: "; cin >> imie;
    cout << "Wpisz swoje nazwisko: "; cin >> nazwisko;
    cout << "Witaj " << imie << " " << nazwisko << endl;
    cout << "Twoje imie i nazwisko zawiera " << (imie.length() + nazwisko.length()) << "liter";
    return 0;
}
