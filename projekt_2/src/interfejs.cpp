#include "interfejs.h"
#include <iostream>

void Interfejs::WyswietlMenu()
{
std::cout<<"MENU"<<std::endl;
std::cout<<"[1] - Wyswietl kierunki"<<std::endl;
std::cout<<"[2] - Dodaj Kierunek"<<std::endl;
std::cout<<"[3] - Wyswietl przedmioty"<<std::endl;
std::cout<<"[4] - Dodaj Przedmioty do kierunku"<<std::endl;
std::cout<<"[5] - Menu studenta"<<std::endl;
std::cout<<"[6] - Menu pracownika"<<std::endl;
std::cout<<"Wybor: ";
}

void Interfejs::WyswietlKierunki()
{
std::cout<<"Kierunki: "<<std::endl;
for (size_t i=0;i<KierunkiVec.size();i++)
    {
    std::cout<<"["<<i+1<<"] - "<<KierunkiVec.at(i).getNazwa()<<", "<<KierunkiVec[i].getMiejsca()<<" miejsc"<<std::endl;
    }
std::cout<<std::endl;
}

//void Interfejs::WyswietlPrzedmiot()
//{
//system ("CLS");
//for (size_t i=0;i<PrzedmiotyVec.size();i++)
//    {
//    std::cout<<"["<<i+1<<"] - "<<PrzedmiotyVec.at(i).getNazwa()<<std::endl;
//    }
//}

int Interfejs::WybierzOpcje()
{
    int wybor;
    std::cin>>wybor;
    return wybor;
}
void Interfejs::DodajKierunek()
{
    system("CLS");
    std::string name;
    int slots;
    std::cout<<"Nazwa kierunku: "; std::cin>>name;
    std::cout<<"Ilosc miejsc: "; std::cin>>slots;
    KierunkiVec.push_back(Kierunek(name,slots));
    system("CLS");
}
student Interfejs::DodajStudenta()
{
    std::string name;
    std::string secondName;
    system("CLS");
    std::cout<<"Podaj imie studenta: "; std::cin>>name;
    std::cout<<"Podaj nazwisko studenta: "; std::cin>>secondName;
    WyswietlKierunki();
    std::cout<<"Ktory kierunek: ";
    return student(name, secondName);
}

void Interfejs::WyswietlStudentow()
{
    system("CLS");
    int a = 1;
    std::cout<<"STUDENCI: "<<std::endl;
    for(int i=0;i<KierunkiVec.size();i++)
    {
        for (int j=0; j<KierunkiVec[i].StudenciKierunku.size();j++)
        {
std::cout<<"["<<a<<"] "<<KierunkiVec[i].StudenciKierunku[j].getImie()<<" "<<KierunkiVec[i].StudenciKierunku[j].getNazwisko()<<std::endl;
        a++;
        }
    }
}

void Interfejs::WyswietlMenuStudenta()
{
system("CLS");
std::cout<<"   MENU STUDENTA  "<<std::endl;
std::cout<<"[1] - Dodaj studenta"<<std::endl;
std::cout<<"[2] - Zapisz studenta na zajecia"<<std::endl;
std::cout<<"[3] - Przedmioty studenta"<<std::endl;
std::cout<<"[4] - Oceny studenta"<<std::endl;
}

