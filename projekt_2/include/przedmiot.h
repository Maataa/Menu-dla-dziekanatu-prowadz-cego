#ifndef PRZEDMIOT_H
#define PRZEDMIOT_H
#include <iostream>
class Przedmiot
{
private:                                    //*******ZMIENNE********//
    std::string nazwa;
    std::string wykladowca;
    float ocena;
public:                                     //*******KONTRUKTORY I FUNKCJE********//
    Przedmiot(std::string name, std::string teacher);
    Przedmiot(const Przedmiot &zrodlo);     //******KONSTRUKTOR KOPIUJACY****//
    std::string getNazwa();
    std::string getWykladowca();
    void setOcena(float oc);
    Przedmiot& operator=(const Przedmiot &prze);   //****OPERATOR PRZYPISANIA*****//
};

#endif // PRZEDMIOT_H
