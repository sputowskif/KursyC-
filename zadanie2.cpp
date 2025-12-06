#include <iostream>
using namespace std;
int main() {
    int liczba;
    cout << "Wprowadz liczbe calkowita: \n";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba dodatnia\n";
    }

    if (liczba %2 == 0) {
        cout << "Liczba parzysta\n";
    } else {
        cout << "Liczba nieparzysta\n";
    }
    if (liczba >= 10 && liczba <= 50) {
        cout << "Liczba znajduje sie w przedziale 10-50\n";
    } else {
        cout << "Liczba nie znajduje sie w przedziale 10-50\n";
    }

    int liczba1;
    cout << "Wprowadz liczbe calkowita: \n";
    cin >> liczba1;

    if (liczba1 < 0) {
        cout << "Liczba ujemna\n";
    } else if (liczba1 == 0) {
        cout << "Liczba rowna zero\n";
    } else {
        cout << "Liczba dodatnia\n";
    }

    int a, b, c;
    cout << "Wprowadz trzy liczby calkowite: \n";
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    cout << "Liczby w kolejnosci rosnacej: " << a << " " << b << " " << c << "\n";

    return 0;
}
