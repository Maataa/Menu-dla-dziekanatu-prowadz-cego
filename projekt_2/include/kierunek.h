#ifndef KIERUNEK_H
#define KIERUNEK_H
#include "przedmiot.h"
#include <vector>
#include "student.h"

class Kierunek
{
private:                                                //*******ZMIENNE********
    std::string nazwa;
    int miejsca;
public:
    Kierunek();                                         //******KONSTRUKTORY*********
    Kierunek(std::string name, int slots);
    Kierunek(const Kierunek &zrodlo);                   //***KONSTRUKTOR KOPIUJACY***
    std::vector <Przedmiot> PrzedmiotyKierunku;         //*******WEKTORY********
    std::vector <student> StudenciKierunku;
    std::string getNazwa();                             //*******FUNKCJE*********
    int getMiejsca();
    void WyswietlPrzedmioty();
    void DodajPrzedmiot();
    void WyswietlStudentowKierunku();
    void SkreslZListy(int ktStudent);
};

#endif // KIERUNEK_H
