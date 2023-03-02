#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include "przedmiot.h"
#include <vector>
class student
{
private:                                             //******ZMIENNE******
    std::string imie;
    std::string nazwisko;
    public:
    student(std::string i,std::string n);               //*****KONSTRUKTOR*******
    student(){};
    student(const student &zrodlo);                     //***KONSTRUKTOR KOPIUJACY***
    std::vector <Przedmiot> ZapisanyNaPrzedmiotyVec;    //******WEKTORY******
    std::vector <float> oceny;
    std::string getImie(){return imie;}                 //******FUNKCJE******
    std::string getNazwisko(){return nazwisko;}
    void WyswietlPrzedmioty();
    void WyswietlOceny();
    bool CzyMaZaliczenie();
    void CzyMaZaliczenieInfo();
    student& operator=(const student &stu);             //****OPERATOR PRZYPISANIA***//
    void coutStudentKtKierunku(){std::cout<<"Student ktorego kierunku? ";}
    void coutKtoryStudent(){std::cout<<"Ktory student? ";}
    void coutKtoryPrzedmiot(){std::cout<<"Ktory przedmiot? ";}
};


#endif // STUDENT_H
