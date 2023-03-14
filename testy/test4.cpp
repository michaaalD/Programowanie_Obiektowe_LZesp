#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "._doctest.h"
#include "LZespolona.hh"

TEST_CASE("test Dzielenie"){ //przekopiowac plik doctest z zadania 4
    
    LZespolona Skl1, Skl2, Wynik;
    Skl1.re = 3;
    Skl1.im = 9;

    Skl2.re = 2;
    Skl2.im = 1;

    CHECK(Wynik.re == 3);
    CHECK(Wynik.im == 3);

}