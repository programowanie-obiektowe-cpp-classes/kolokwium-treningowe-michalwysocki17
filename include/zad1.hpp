#include "catch.hpp"

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

// Zad1
// tutaj definicja klasy Tagliatelle
class Makaron
{
    public:
        virtual ~Makaron() = default;
        virtual double  ileMaki(unsigned) const = 0;
        static Makaron* gotujMakaron(const std::string& s);
}; 


class Tagliatelle : public Makaron
{
public:
    Tagliatelle(double dlugosc, double szerokosc, double proporcja) : L(dlugosc), W(szerokosc), R(proporcja) {}
    Tagliatelle() : L(0.5), W(0.5), R(0.5) {}
    double ileMaki(unsigned P) const { return static_cast <double> (P) * L * W * (1. - R) * C; }

private:
    double L, W, R;
    static const double C;
};