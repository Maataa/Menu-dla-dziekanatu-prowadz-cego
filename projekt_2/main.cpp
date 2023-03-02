#include <iostream>
#include "interfejs.h"
#include "kierunek.h"
#include "przedmiot.h"
#include "student.h"
#include "pracownik.h"
//Program od obslugi dziekanatu – mozliwosc definiowania kierunków, przedmiotów, zapisywanie
//studentów na zajecia, wpisywanie ocen, skreslenie z listy.

using namespace std;
           //********DEKLARACJE*********//
Interfejs menu;
void WprowadzDane();
void Wybor(int a);
           //*********KIERUNKI**********//
Kierunek CBE("Cyberbezpieczenstwo", 180);
Kierunek AiR("Automatyka i robotyka", 400);
           //********PRZEDMIOTY*********//
Przedmiot Programowanie("Programowanie", "Kowalski");
Przedmiot Analiza("Analiza matematyczna", "Nowak");

           //***********MAIN************//
int main()
{
WprowadzDane();
while(true){
menu.WyswietlMenu();
int Pick = menu.WybierzOpcje();
Wybor(Pick);
}
}
           //************************************************************************************//

           //*********WPROWADZENIE PODSTAWOWYCH DANYCH***********//
void WprowadzDane()
{
menu.KierunkiVec.push_back(CBE);
menu.KierunkiVec.push_back(AiR);
menu.KierunkiVec[0].PrzedmiotyKierunku.push_back(Programowanie);
menu.KierunkiVec[0].PrzedmiotyKierunku.push_back(Analiza);
Przedmiot KopiaProgramowania(Programowanie);
Przedmiot KopiaAnalizy(Analiza);
menu.KierunkiVec[1].PrzedmiotyKierunku.push_back(KopiaProgramowania);   //****PRZYKLAD KOPII****
menu.KierunkiVec[1].PrzedmiotyKierunku.push_back(KopiaAnalizy);         //****PRZYKLAD KOPII****
student s1("Marcel","Duszynski");
student s2("Jan","Wozniak");
student s3("Karolina","Bak");
student s4("Wojciech","Cegla");
menu.StudenciVec.push_back(s1);
menu.KierunkiVec[0].StudenciKierunku.push_back(s1);
menu.KierunkiVec[0].StudenciKierunku[0].ZapisanyNaPrzedmiotyVec.push_back(Programowanie);
menu.StudenciVec.push_back(s2);
menu.KierunkiVec[0].StudenciKierunku.push_back(s2);
menu.KierunkiVec[0].StudenciKierunku[1].ZapisanyNaPrzedmiotyVec.push_back(Programowanie);
menu.StudenciVec.push_back(s3);
menu.KierunkiVec[1].StudenciKierunku.push_back(s3);
menu.KierunkiVec[1].StudenciKierunku[0].ZapisanyNaPrzedmiotyVec.push_back(Programowanie);
menu.StudenciVec.push_back(s4);
menu.KierunkiVec[1].StudenciKierunku.push_back(s4);
menu.KierunkiVec[1].StudenciKierunku[1].ZapisanyNaPrzedmiotyVec.push_back(Programowanie);
}
// SWITCH CASE (MENU)
void Wybor(int a)
{
student studentEx;
switch (a)
{
case 1: system ("CLS");              //******WYSWIETLANIE KIERUNKOW******
    menu.WyswietlKierunki();
    break;
case 2: menu.DodajKierunek();        //*****DODAWANIE KIERUNKU*******
    menu.KierunkiVec[menu.KierunkiVec.size()-1].PrzedmiotyKierunku.push_back(Programowanie);
    menu.KierunkiVec[menu.KierunkiVec.size()-1].PrzedmiotyKierunku.push_back(Analiza);
    break;
case 3:system ("CLS");              //*****WYSWIETALNIE PRZEDMIOTOW*******
    menu.WyswietlKierunki();
    int j;
    cout<<"Ktorego kierunku? \n"; cin>>j;
    system("CLS");
    menu.KierunkiVec[j-1].WyswietlPrzedmioty();
    break;
case 4:                             //*****DODAWANIE PRZEDMIOTOW******
    system ("CLS");
    menu.WyswietlKierunki();
    int i;
    cout<<"Do ktorego kierunku? \n"; cin>>i;
    menu.KierunkiVec[i-1].DodajPrzedmiot();
    break;
case 5:                         //********** MENU STUDENTA ***********//
    menu.WyswietlMenuStudenta();
    int x;
    cin>>x;
    if (x==1){              //************DODAJ STUDENTA**********//
    menu.StudenciVec.push_back(menu.DodajStudenta());
    int ktory1; cin>>ktory1;
    menu.KierunkiVec[ktory1-1].StudenciKierunku.push_back(menu.StudenciVec[menu.StudenciVec.size()-1]);
    break;}
    if (x==2){              //***********ZAPISZ NA ZAJECIA*******//
    menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku();
    int ktKier, ktStu, ktPrze;
        cin>>ktKier;
        menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
        studentEx.coutKtoryStudent(); cin>>ktStu;
        menu.KierunkiVec[ktKier-1].WyswietlPrzedmioty();
        studentEx.coutKtoryPrzedmiot(); cin>>ktPrze;
        menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].ZapisanyNaPrzedmiotyVec.push_back(menu.KierunkiVec[ktKier-1].PrzedmiotyKierunku[ktPrze-1]);
        break;}
            if (x==3){              //*****WYSWIETL PRZEDMIOTY STUDENTA*******//
        menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku();
        int ktKier, ktStu;
        cin>>ktKier;
        menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
        studentEx.coutKtoryStudent(); cin>>ktStu;
        menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].WyswietlPrzedmioty();break;}
            if (x==4){              //******WYSWIETL OCENY STUDENTA******//
        menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku();
        int ktKier, ktStu;
        cin>>ktKier;
        menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
        studentEx.coutKtoryStudent(); cin>>ktStu;
        menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].WyswietlOceny();
        break;}
            if (x==5){              //******CZY STUDENT MA ZALICZENIE******//
        menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku();
        int ktKier, ktStu;
        cin>>ktKier;
        menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
        studentEx.coutKtoryStudent(); cin>>ktStu;
        menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].CzyMaZaliczenieInfo();
        break;}
    case 6:
    pracownik prac;
    osoba *wskaznik;
    wskaznik = &prac;         //**********WSKAZNIK NA FUNKCJE WIRTUALNA******//
    wskaznik -> WyswietlanieMenu();  // ***********MENU PRACOWNIKA************//
        int y;
        cin>>y;
        if (y==1)                   //************WYSWIETL STUDENTOW*********
        {
            menu.WyswietlStudentow();
            break;
        }
        if (y==2)                  //***************WPISZ OCENY**************
        {
          system("CLS");
          int ktKier, ktStu, ktPrze;
          float ocena;
          menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku();; cin>>ktKier;
          menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
          studentEx.coutKtoryStudent(); cin>>ktStu;
          system("CLS");
          menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].WyswietlPrzedmioty();
          studentEx.coutKtoryPrzedmiot(); cin>>ktPrze;
          cout<<"Ocena: "; cin>>ocena;
          menu.KierunkiVec[ktKier-1].StudenciKierunku[ktStu-1].oceny.push_back(ocena);
            break;
        }
        if (y==3)                  //************SKRESLENIE Z LISTY***********
        {
          system("CLS");
          int ktKier, ktStu;
          menu.WyswietlKierunki(); studentEx.coutStudentKtKierunku(); cin>>ktKier;
          menu.KierunkiVec[ktKier-1].WyswietlStudentowKierunku();
          studentEx.coutKtoryStudent(); cin>>ktStu;
          menu.KierunkiVec[ktKier-1].SkreslZListy(ktStu-1);
            break;
        }
}
}

//***************************************************************************************************//







