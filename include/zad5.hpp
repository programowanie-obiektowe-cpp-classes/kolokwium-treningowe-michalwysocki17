#include "zad1.hpp"

#include <algorithm>
#include <iterator>
#include <deque>
#include <random>
#include <vector>

// tutaj funkcja sortujTagliatelle

template <typename Iterator>

void sortujTagliatelle(Iterator begin, Iterator end)
{
    std::sort(begin, end, [](const Tagliatelle& t1, const Tagliatelle& t2) {
            return t1.ileMaki(1) > t2.ileMaki(1);
              });
}

