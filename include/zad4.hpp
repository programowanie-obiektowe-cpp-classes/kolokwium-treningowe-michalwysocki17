#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(const std::vector< Tagliatelle >& v)
{
    double M;
    std::size_t i = 1u;
    for (auto it = v.crbegin(); it != v.crend(); it++)
        M += it->ileMaki(i);
    if (M > 100.)
        throw 100;
    if (M > 50.)
        throw 50.;
    return M;
}