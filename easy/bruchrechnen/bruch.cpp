#include "bruch.h"

#include <iostream>
using namespace std;

// Konstruktoren ---
Bruch::Bruch()
{
    this->zaehler = 0;
    this->nenner = 0;
}

Bruch::Bruch(int zaehler, int nenner)
{
    this->zaehler = zaehler;
    this->nenner = nenner;
}
// ---

// getter ---
int Bruch::getZaehler()
{
    return this->zaehler;
}

int Bruch::getNenner()
{
    return this->nenner;
}
// ---

// Methoden ---
Bruch Bruch::addieren(Bruch bruch)
{
    Bruch ergebnis;

    // Gemeinsamen Nenner bilden (einfache Version)
    ergebnis.nenner = this->nenner * bruch.nenner;

    // Zähler der einzelnen Brüche erweitern
    // und anschließend addieren
    ergebnis.zaehler = (this->zaehler * bruch.nenner) + (bruch.zaehler * this->nenner);

    return ergebnis;
}

Bruch Bruch::subtrahieren(Bruch bruch)
{
    Bruch ergebnis;

    // Gemeinsamen Nenner bilden (einfache Version)
    ergebnis.nenner = this->nenner * bruch.nenner;

    // Zähler der einzelnen Brüche erweitern
    // und anschließend subtrahieren
    ergebnis.zaehler = (this->zaehler * bruch.nenner) - (bruch.zaehler * this->nenner);

    return ergebnis;
}

Bruch Bruch::multiplizieren(Bruch bruch)
{
    Bruch ergebnis;
    ergebnis.zaehler = this->zaehler * bruch.zaehler;
    ergebnis.nenner = this->nenner * bruch.nenner;
    return ergebnis;
}

Bruch Bruch::dividieren(Bruch bruch)
{
    // Divideren wird auf Multiplizieren abgebildet
    // (Dividieren = Kehrwert 'mal' nehmen)
    // bilde neuen Bruch als Kehrwert von bruch
    // (zaehler und nenner vertausch)
    Bruch kehrwert(bruch.nenner, bruch.zaehler);

    return this->multiplizieren(kehrwert);
}

// Kürzt den aktuellen Bruch
void Bruch::kuerzen()
{
    // PQ-Formel um den ggT zu finden
    int q = this->zaehler;
    int p = this->nenner;
    int r = 0;

    while (q != 0)
    {
        r = p % q;
        p = q;
        q = r;
    }
    // p = ggT

    this->zaehler /= p;
    this->nenner /= p;
}