#ifndef INTERFEJS_H
#define INTERFEJS_H
#pragma once
#include <vector>
#include "kierunek.h"
#include "przedmiot.h"
#include "student.h"
class Interfejs
{
public:                                 //******WEKTORY*********
    std::vector <Kierunek> KierunkiVec;
    std::vector <student> StudenciVec;
    void WyswietlMenu();                //*******FUNKCJE********
    void WyswietlKierunki();
    int WybierzOpcje();
    void DodajKierunek();
    student DodajStudenta();
    void WyswietlStudentow();
    void WyswietlMenuStudenta();
};

#endif // INTERFEJS_H
