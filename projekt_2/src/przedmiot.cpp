#include "przedmiot.h"

Przedmiot::Przedmiot(std::string name, std::string teacher)
{
    nazwa = name;
    wykladowca = teacher;
}

Przedmiot::Przedmiot(const Przedmiot &zrodlo)          //******KONSTRUKTOR KOPIUJACY****
{
    nazwa = zrodlo.nazwa;
    wykladowca = zrodlo.wykladowca;
}

std::string Przedmiot::getNazwa(){return nazwa;}
std::string Przedmiot::getWykladowca(){return wykladowca;}
void Przedmiot::setOcena(float oc){ocena = oc;}

Przedmiot& Przedmiot::operator=(const Przedmiot &prze)       //**********OPERATOR PRZYPISANIA****//
{
    if (this != &prze)
    {
    this -> nazwa = prze.nazwa;
    this -> wykladowca = prze.wykladowca;
    }
    return *this;
}
