#include "kierunek.h"

Kierunek::Kierunek(){}
Kierunek::Kierunek(std::string name, int slots)
{
nazwa=name;
miejsca=slots;
}
std::string Kierunek::getNazwa(){return nazwa;}
int Kierunek::getMiejsca(){return miejsca;}

void Kierunek::DodajPrzedmiot()
{
std::string name;
std::string teacher;
std::cout<<"Podaj nazwe przedmiotu: ";
std::cin.ignore();
getline(std::cin,name);
std::cout<<"Podaj wykladowce: ";
getline(std::cin,teacher);
PrzedmiotyKierunku.push_back(Przedmiot(name,teacher));
std::cout<<std::endl;
}

Kierunek::Kierunek(const Kierunek &zrodlo)      //***KONSTRUKTOR KOPIUJACY***
{
    nazwa = zrodlo.nazwa;
    miejsca = zrodlo.miejsca;
}

void Kierunek::WyswietlPrzedmioty()
{
    system("CLS");
    for(size_t i = 0 ; i < PrzedmiotyKierunku.size() ; i++)
    {
        std::cout<<PrzedmiotyKierunku[i].getNazwa()<<" - "<<PrzedmiotyKierunku[i].getWykladowca()<<std::endl;
    }
std::cout<<std::endl;
}

void Kierunek::WyswietlStudentowKierunku()
{
    for(int i=0;i<StudenciKierunku.size();i++)
    {
        std::cout<<"["<<i+1<<"] "<<StudenciKierunku[i].getImie()<<" "<<StudenciKierunku[i].getNazwisko()<<std::endl;

    }
}

void Kierunek::SkreslZListy(int ktStudent)      //***SKRESLANIE Z OPERATOREM PRZYPISANIA***//
{
    for(int i = ktStudent;i<StudenciKierunku.size();i++)
    {
        StudenciKierunku[i] = StudenciKierunku[i+1];
    }
StudenciKierunku.pop_back();
}
