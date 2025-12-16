#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle

class Tagliatelle
{
public:
    Tagliatelle(double dlugosc, double szerokosc, double proporcja) : L(dlugosc), W(szerokosc), R(proporcja) {}
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}
    double ileMaki(unsigned P) { return P * L * W * (1. - R) * C; }

private:
    double L, W, R;
    const double C;
};