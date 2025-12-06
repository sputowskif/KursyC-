#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
    double liczba1, liczba2, liczba3;
    cout << "Wprowadz trzy liczby: ";
    cin >> liczba1 >> liczba2 >> liczba3;
    double srednia = (liczba1 + liczba2 + liczba3) / 3.0;
    cout << fixed << setprecision(2);
    cout << "Srednia: " << srednia << endl;

    double pi = 3.14;

    double promien;
    cout << "Wprowadz promien kola: ";
    cin >> promien;
    double pole_kola = pi * promien * promien;
    double obwod_kola = 2 * pi * promien;
    cout << "Pole kola: " << pole_kola << endl;
    cout << "Obwod kola: " << obwod_kola << endl;

    double celsjusz;
    cout << "Wprowadz temperature w stopniach Celsjusza: ";
    cin >> celsjusz;
    double fahrenheit = (celsjusz * 9.0 / 5.0) + 32.0;
    cout << "Temperatura w stopniach Fahrenheita: " << fahrenheit << endl;

    double cena_benzyny;
    const double dystans_KW = 335.0;
    const double spalanie_KW = 9.0;
    cout << "Wprowadz cene benzyny za litr: ";
    cin >> cena_benzyny;
    double potrzebne_paliwo_KW = (dystans_KW / 100.0) * spalanie_KW;
    double koszt_przejazdu_KW = potrzebne_paliwo_KW * cena_benzyny;
    cout << "Koszt przejazdu z Katowic do Warszawy: " << koszt_przejazdu_KW << " PLN" << endl;

    double dystans, spalanie;
    cout << "Wprowadz cene benzyny za litr: ";
    cin >> cena_benzyny;
    cout << "Wprowadz dlugosc trasy w km: ";
    cin >> dystans;
    cout << "Wprowadz spalanie samochodu w litrach na 100 km: ";
    cin >> spalanie;
    double potrzebne_paliwo = (dystans / 100.0) * spalanie;
    double koszt_przejazdu = potrzebne_paliwo * cena_benzyny;
    cout << "Koszt przejazdu: " << koszt_przejazdu << " PLN" << endl;
    return 0;
}
