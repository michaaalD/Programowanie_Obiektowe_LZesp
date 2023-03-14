#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "._doctest.h"
#include "LZespolona.hh"

TEST_CASE("test Mnozenie"){
    
    LZespolona Skl1, Skl2, Wynik;
    Skl1.re = 1;
    Skl1.im = 2;

    Skl2.re = 3;
    Skl2.im = 5;

    CHECK(Wynik.re == -10);
    CHECK(Wynik.im == 15);

}