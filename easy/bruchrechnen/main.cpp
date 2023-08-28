#include <iostream>
using namespace std;

#include "bruch.h"

int main()
{
    // Variablen-Deklarationen
    int zaehlerBruch1 = 0;
    int nennerBruch1 = 0;
    int zaehlerBruch2 = 0;
    int nennerBruch2 = 0;
    char operation;

    // Werte einlesen
    cout << "1. Bruch-Zähler: ";
    cin >> zaehlerBruch1;
    cout << "1. Bruch-Nenner: ";
    cin >> nennerBruch1;

    cout << "2. Bruch-Zähler: ";
    cin >> zaehlerBruch2;
    cout << "2. Bruch-Nenner: ";
    cin >> nennerBruch2;

    cout << "Operation ( +, -, *, / ): ";
    cin >> operation;

    // Bruchobjekte anlegen
    Bruch b1(zaehlerBruch1, nennerBruch1);
    Bruch b2(zaehlerBruch2, nennerBruch2);
    Bruch ergebnis;

    // Operation auswerten
    switch (operation)
    {
    case '+':
        ergebnis = b1.addieren(b2);
        ergebnis.kuerzen();
        cout << "Ergebnis: " << ergebnis.getZaehler()
             << "/" << ergebnis.getNenner() << endl;
        break;

    case '-':
        ergebnis = b1.subtrahieren(b2);
        ergebnis.kuerzen();
        cout << "Ergebnis: " << ergebnis.getZaehler()
             << "/" << ergebnis.getNenner() << endl;
        break;

    case '*':
        ergebnis = b1.multiplizieren(b2);
        ergebnis.kuerzen();
        cout << "Ergebnis: " << ergebnis.getZaehler()
             << "/" << ergebnis.getNenner() << endl;
        break;

    case '/':
        ergebnis = b1.dividieren(b2);
        ergebnis.kuerzen();
        cout << "Ergebnis: " << ergebnis.getZaehler()
             << "/" << ergebnis.getNenner() << endl;
        break;

    default:
        cout << "Operation unbekannt!" << endl;
    }

    system("PAUSE");
    return 0;
}