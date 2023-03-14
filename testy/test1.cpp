#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest/doctest.h"
#include "LZespolona.hh"

TEST_CASE("test Dodawanie"){
    
    LZespolona Skl1, Skl2, Wynik;
    Skl1.re = 1;
    Skl1.im = 2;

    Skl2.re = 3;
    Skl2.im = 5;
    
    Wynik.re = Skl1.re+Skl2.re;
    Wynik.im = Skl1.im+Skl2.im;

    CHECK(Wynik.re == 4);
    CHECK(Wynik.im == 7);

}