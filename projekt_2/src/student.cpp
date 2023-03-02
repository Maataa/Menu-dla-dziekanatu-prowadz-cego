#include "student.h"

student::student(std::string i,std::string n)
{
    imie = i;
    nazwisko = n;
}

student::student(const student &zrodlo)             //***KONSTRUKTOR KOPIUJACY***
{
   imie = zrodlo.imie;
   nazwisko = zrodlo.nazwisko;
}

void student::WyswietlPrzedmioty()
{
    system("CLS");
    for(int i=0;i<ZapisanyNaPrzedmiotyVec.size();i++)
    {
        std::cout<<ZapisanyNaPrzedmiotyVec[i].getNazwa()<<" - "<<ZapisanyNaPrzedmiotyVec[i].getWykladowca()<<","<<std::endl;
    }
}

void student::WyswietlOceny()
{
    if (oceny.size()>0){
    system("CLS");
    std::cout<<"OCENY: "<<std::endl;
    for(int i=0;i<oceny.size();i++)
    {
        system ("CLS");
        std::cout<<ZapisanyNaPrzedmiotyVec[i].getNazwa()<<": "<<oceny[i]<<std::endl;
    }
                       }
    else {  system ("CLS");
            std::cout<<"Brak ocen"<<std::endl;}
}

bool student::CzyMaZaliczenie()
{
    int niezaliczone=0;
    for (int i=0;i<oceny.size();i++)
    {
        if (oceny[i]==2) {niezaliczone++;}
    }
    if (niezaliczone>0) {return false;}
    else return true;
}

void student::CzyMaZaliczenieInfo()
{
    if (CzyMaZaliczenie()==true)
    {
        system ("CLS");
        std::cout<<"Student ma zaliczenie" <<std::endl;
    }
    if (CzyMaZaliczenie()==false)
    {
        system ("CLS");
        std::cout<<"Student nie ma zaliczenia" <<std::endl;
    }
}

student& student::operator=(const student &stu)   //**********OPERATOR PRZYPISANIA****//
{
    if (this != &stu)
    {
    this -> imie = stu.imie;
    this -> nazwisko = stu.nazwisko;
    }
    return *this;
}
