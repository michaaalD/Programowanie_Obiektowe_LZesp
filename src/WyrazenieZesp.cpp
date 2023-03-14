#include "WyrazenieZesp.hh"
#include "LZespolona.hh"
#include <iostream>

/*
 * Tu nalezy zdefiniowac funkcje, ktorych zapowiedzi znajduja sie
 * w pliku naglowkowym.
 */

std::istream &operator >> (std::istream &rStrmWe, WyrazenieZesp &rWyrZ) {
  
  char znak; // zmiennna do switcha dla operatora 
  
  rStrmWe >> rWyrZ.Arg1; // strumien wej na 1 argument zespolonej
  
   
  rStrmWe >> znak;

  switch(znak){
    case '+':
      rWyrZ.Op = Op_Dodaj;
      break;
    case '-':
      rWyrZ.Op = Op_Odejmij;
      break;
    case '/':
      rWyrZ.Op = Op_Dziel;
      break;
    case '*':
      rWyrZ.Op = Op_Mnoz;
      break;
    default:
      if(znak!= '(' || ')' || 'i')
      std::cout << "Niepoprawny operator " << std::endl;
      break;
  }
  rStrmWe >> rWyrZ.Arg2;  // strumien wej na 2 argument zespolonej

}

std::ostream &operator << (std::ostream &str_wyj, WyrazenieZesp  &WyrZ)
{
  str_wyj << "Wyrazenie zespolone:  ";
  str_wyj << WyrZ.Arg1;

  switch(WyrZ.Op){

    case Op_Dodaj:
      str_wyj << " + ";
      break;
    case Op_Odejmij:
      str_wyj << " - ";
      break;
    case Op_Dziel:
      str_wyj << " / ";
      break;
    case Op_Mnoz:
      str_wyj << " * ";
      break;
  }

  str_wyj << WyrZ.Arg2;
  

} 


LZespolona Oblicz(WyrazenieZesp  WyrZ)
{
  LZespolona Wynik;

  switch(WyrZ.Op){
    case Op_Dodaj:
      Wynik = WyrZ.Arg1 + WyrZ.Arg2;
      break;
    case Op_Odejmij:
      Wynik = WyrZ.Arg1 - WyrZ.Arg2;
      break;
    case Op_Dziel:
      Wynik = WyrZ.Arg1 / WyrZ.Arg2;
      break;
    case Op_Mnoz:
      Wynik = WyrZ.Arg1 * WyrZ.Arg2;
      break;
    default:
      std::cout << "Nieznany operator" << std::endl;
      break;

  }
  return Wynik;
}

