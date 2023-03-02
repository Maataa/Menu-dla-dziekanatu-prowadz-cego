#ifndef PRACOWNIK_H
#define PRACOWNIK_H
#include <student.h>
#include <osoba.h>

class pracownik
:public osoba
{
std::string imie;
std::string nazwisko;
public:
    pracownik();
    pracownik(const pracownik &zrodlo);             //***KONSTRUKTOR KOPIUJACY***
    void WyswietlanieMenu();
};

#endif // PRACOWNIK_H
