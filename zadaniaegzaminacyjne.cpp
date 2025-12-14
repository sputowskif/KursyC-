#include <iostream>
using namespace std;
int main() {
    string imie;
    int wiek;

    cout << "Podaj swoje imie: ";
    cin >> imie;
    cout << "Podaj swoj wiek: ";
    cin >> wiek;

    cout << "Witaj, " << imie << "! Za rok bedziesz mial/miala " << (wiek + 1) << " lat.\n";
    
    int liczba;
    cout << "Podaj liczbe calkowita: ";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Liczba jest dodatnia.\n";
    } else if (liczba < 0) {
        cout << "Liczba jest ujemna.\n";
    } else {
        cout << "Liczba jest rowna zero.\n";
    }

    cout << "Liczby od 1 do 100 podzielne przez 5:\n";
    for (int i = 1; i <= 100; ++i) {
        if (i % 5 == 0) {
            cout << i << " ";
        }
    }
    cout << "\n";
    
    int suma = 0;
    int liczba2;
    cout << "Podawaj liczby calkowite (0 konczy wczytywanie):\n";
    cin >> liczba2;
    while (liczba2 != 0) {
        suma += liczba2;
        cin >> liczba2;
    }
    cout << "Suma podanych liczb (bez zera) to: " << suma << "\n";

    int numerDnia;
    cout << "Podaj numer dnia tygodnia (1-7): ";
    cin >> numerDnia;
    switch (numerDnia) {
        case 1:
            cout << "Poniedzialek\n";
            break;
        case 2:
            cout << "Wtorek\n";
            break;
        case 3:
            cout << "Sroda\n";
            break;
        case 4:
            cout << "Czwartek\n";
            break;
        case 5:
            cout << "Piatek\n";
            break;
        case 6:
            cout << "Sobota\n";
            break;
        case 7:
            cout << "Niedziela\n";
            break;
        default:
            cout << "Niepoprawny numer dnia tygodnia.\n";
            break;
    }
  
    const int ROZMIAR = 5;
    int liczby[ROZMIAR];
    int sumaLiczb = 0;

    cout << "Podaj " << ROZMIAR << " liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR; ++i) {
        cin >> liczby[i];
        sumaLiczb += liczby[i];
    }

    cout << "Podane liczby to: ";
    for (int i = 0; i < ROZMIAR; ++i) {
        cout << liczby[i] << " ";
    }
    cout << "\n";

    double srednia = static_cast<double>(sumaLiczb) / ROZMIAR;
    cout << "Suma liczb: " << sumaLiczb << "\n";
    cout << "Srednia arytmetyczna: " << srednia << "\n";

    const int ROZMIAR2 = 10;
    int liczby2[ROZMIAR2];
    int dodatnie = 0, ujemne = 0, zera = 0;
    cout << "Podaj " << ROZMIAR2 << " liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR2; ++i
    ) {
        cin >> liczby2[i];
        if (liczby2[i] > 0) {
            dodatnie++;
        } else if (liczby2[i] < 0) {
            ujemne++;
        } else {
            zera++;
        }
    }
    cout << "Liczba liczb dodatnich: " << dodatnie << "\n";
    cout << "Liczba liczb ujemnych: " << ujemne << "\n";
    cout << "Liczba zer: " << zera << "\n";
   
    const int ROZMIAR3 = 8;
    int liczby3[ROZMIAR3];
    cout << "Podaj " << ROZMIAR3 << " liczb calkowitych:\n";
    for (int i = 0; i < ROZMIAR3; ++i) {
        cin >> liczby3[i];
    }
    int najwieksza = liczby3[0];
    int najmniejsza = liczby3[0];
    for (int i = 1; i < ROZMIAR3; ++i) {
        if (liczby3[i] > najwieksza) {
            najwieksza = liczby3[i];
        }
        if (liczby3[i] < najmniejsza) {
            najmniejsza = liczby3[i];
        }
    }
    cout << "Najwieksza liczba to: " << najwieksza << "\n";
    cout << "Najmniejsza liczba to: " << najmniejsza << "\n";

    int wybor;
    do {
        cout << "Menu:\n";
        cout << "1. Dodawanie\n";
        cout << "2. Odejmowanie\n";
        cout << "3. Mnozenie\n";
        cout << "4. Dzielenie\n";
        cout << "0. Koniec\n";
        cout << "Wybierz opcje (0-4): ";
        cin >> wybor;

        if (wybor >= 1 && wybor <= 4) {
            double a, b;
            cout << "Podaj dwie liczby:\n";
            cin >> a >> b;

            switch (wybor) {
                case 1:
                    cout << "Wynik dodawania: " << (a + b) << "\n";
                    break;
                case 2:
                    cout << "Wynik odejmowania: " << (a - b) << "\n";
                    break;
                case 3:
                    cout << "Wynik mnozenia: " << (a * b) << "\n";
                    break;
                case 4:
                    if (b != 0) {
                        cout << "Wynik dzielenia: " << (a / b) << "\n";
                    } else {
                        cout << "Blad: Dzielenie przez zero!\n";
                    }
                    break;
            }
        } else if (wybor != 0) {
            cout << "Niepoprawna opcja. Sprobuj ponownie.\n";
        }
    } while (wybor != 0);
    const int MAX_OCENY = 10;
    int oceny[MAX_OCENY];
    int liczba_ocen = 0;
    cout << "Wybierz opcje (1-5): ";
    do {
        cout << "Wybierz opcje (1-5): ";
        
        int wybor;
        cin >> wybor;

        switch (wybor) {
            case 1: {
                cout << "Podaj liczbe ocen (1-10): ";
                cin >> liczba_ocen;
                if (liczba_ocen < 1 || liczba_ocen > MAX_OCENY) {
                    cout << "Niepoprawna liczba ocen.\n";
                    liczba_ocen = 0;
                    break;
                }
                for (int i = 0; i < liczba_ocen; ++i) {
                    int ocena;
                    cout << "Podaj ocene " << (i + 1) << " (2-5): ";
                    cin >> ocena;
                    if (ocena < 2 || ocena > 5) {
                        cout << "Niepoprawna ocena. Sprobuj ponownie.\n";
                        --i;
                    } else {
                        oceny[i] = ocena;
                    }
                }
                break;
            }
            case 2: {
                if (liczba_ocen == 0) {
                    cout << "Brak ocen do wyswietlenia.\n";
                } else {
                    cout << "Oceny:\n";
                    for (int i = 0; i < liczba_ocen; ++i) {
                        cout << oceny[i] << " ";
                    }
                    cout << "\n";
                }
                break;
            }
            case 3: {
                if (liczba_ocen == 0) {
                    cout << "Brak ocen do obliczenia sredniej.\n";
                } else {
                    int suma = 0;
                    for (int i = 0; i < liczba_ocen; ++i)
                        suma += oceny[i];
                    double srednia = static_cast<double>(suma) / liczba_ocen;
                    cout << "Srednia ocen: " << srednia << "\n";
                }
                break;
            }
case 4: {
    if (liczba_ocen == 0) {
        cout << "Brak ocen do znalezienia min i max.\n";
    } else {
        int najwieksza = oceny[0];
        int najmniejsza = oceny[0];
        for (int i = 1; i < liczba_ocen; ++i) {
            if (oceny[i] > najwieksza)
                najwieksza = oceny[i];
            if (oceny[i] < najmniejsza)
                najmniejsza = oceny[i];
        }
        cout << "Najwieksza ocena: " << najwieksza << "\n";
        cout << "Najmniejsza ocena: " << najmniejsza << "\n";
    }
    break;
}
            case 5:
                cout << "Koniec programu.\n";
                break;
            default:
                cout << "Niepoprawna opcja. Sprobuj ponownie.\n";
        }
    } while (wybor != 5);
    return 0;
}

