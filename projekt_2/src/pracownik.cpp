#include "pracownik.h"

pracownik::pracownik()
{

}

pracownik::pracownik(const pracownik& zrodlo)    //***KONSTRUKTOR KOPIUJACY***
{
imie = zrodlo.imie;
nazwisko = zrodlo.nazwisko;
}

void pracownik::WyswietlanieMenu()
{
system("CLS");
std::cout<<"   MENU PRACOWNIKA  "<<std::endl;
std::cout<<"[1] - Wyswietl studentow"<<std::endl;
std::cout<<"[2] - Wpisywanie ocen"<<std::endl;
std::cout<<"[3] - Skreslenie z listy"<<std::endl;
}
