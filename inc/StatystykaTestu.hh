#ifndef STATYSTYKATESTU_HH
#define STATYSTYKATESTU_HH
#include <iostream>

struct StatystykaTestu {
    int ile_poprawnych;
    int ile_niepoprawnych;
    double procent_poprawnych;
    int nr_pytania;
    int ile_pytan;
};


void Oblicz_Staty( StatystykaTestu  &StatTestu );

#endif

