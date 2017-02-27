#include <iostream>
#include <cstdlib>
#include <string>
#include "base.h"
#include "menu.h"

Human osoba;

//void wybierz_menu(int , Human &);
//void wybierz_menu(int);

void Menu::czysc_ekran()
{
    system("clear");
}
void Menu::menu_glowne()
{
    //int opcja = 0;
    while(opcja != 4)
    {   czysc_ekran();
        cout << " * * * D A R B A S E * * * " << endl;
        cout << " Menu główne " << endl
             << "1 - Odczytaj baze " << endl
             << "2 - Wprowadz dane " << endl
             << "3 - Usuń dane" << endl
             << "4 - Koniec" << endl;
        cout << "Wybierz opcje: ";
        cin >> opcja;
        wybierz_menu(opcja);
    }
}
void Menu::wybierz_menu(int opcja)
{
    switch(opcja)
    {
        case 1: odczytaj_dane_z_pliku(osoba);
                break;
        case 2: osoba.pobierz_dane();
                zapisz_dane_do_pliku(osoba);
                break;
        case 3: usun_dane_z_pliku(osoba);
                break;
        case 4: cout << "Do widzenia" <<endl; exit(0);
                break;
        default: cout << "Nie ma takiej opcji" << endl;
                break;
    }
}
//konstruktor
Menu::Menu(int o)
{
    opcja=o;
}
//destruktor
Menu::~Menu()
{

}
