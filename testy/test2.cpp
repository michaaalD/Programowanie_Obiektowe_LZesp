#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "._doctest.h"
#include "LZespolona.hh"

TEST_CASE("test Odejmowanie"){
    
    LZespolona Skl1, Skl2, Wynik;
    Skl1.re = 5;
    Skl1.im = 6;

    Skl2.re = 5;
    Skl2.im = 9;

    CHECK(Wynik.re == 0);
    CHECK(Wynik.im == -3);

}