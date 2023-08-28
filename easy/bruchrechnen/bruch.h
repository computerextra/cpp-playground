#ifndef BRUCH_H
#define BRUCH_H

class Bruch
{
public:
    // Konstruktoren ---
    Bruch();
    Bruch(int zaehler, int nenner);
    // ---

    // getter ---
    int getZaehler();
    int getNenner();
    // ---

    // Methoden ---
    Bruch addieren(Bruch bruch);
    Bruch subtrahieren(Bruch bruch);
    Bruch multiplizieren(Bruch bruch);
    Bruch dividieren(Bruch bruch);
    void kuerzen();
    // ---

private:
    int zaehler;
    int nenner;
};

#endif