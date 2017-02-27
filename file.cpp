/* file.cpp : Darbase

   Copyright (C) 2016 Krzysztof Olszewski

   Ten program jest darmowy; można go rozprowadzać i modyfikować zgodnie z
   warunkami określonymi lub wersjach późniejszych licencji GNU
   General Public License opublikowanej przez Free Software Fondation.

   Program ten jest rozprowadzany po to, aby jak najlepiej slużył
   użytkownikom, ale nie jest on objęty żadną gwarancją, nawet gwarancją
   wynikajacą z obowiazków sprzedawcy czy też odnoszącą się do przydatności
   programu do określonych zastosowań. Szczegółowe informacje znajdują sie
   w licencji GNU General Public License.
*/


#include <iostream>
#include <cstdio>
#include <cstdlib> // exit(0);
#include <fstream>
#include "base.h"

void zapisz_dane_do_pliku(Human &osoba)
{
	fstream baza;
	baza.open("base.b", ios::out | ios::app);
        if(baza.good() == false)
        {
            cout << "Nie można zapisać pliku" << endl;
            getchar(); getchar();
        }
        else
        {
            cout << "zapisuje baze" << endl;
            baza << osoba.imie << " " << osoba.nazwisko << " " << osoba.nr_tel << endl;
            getchar(); getchar();
        }

	baza.close();
}
void odczytaj_dane_z_pliku(Human &osoba)
{
    string tekst;
    fstream baza;
    baza.open("base.b", ios::in);
        if(baza.good() == false)
        {
            cout << "Plik nie istnieje!!!" << endl;
            getchar(); getchar();
            return;
        }
        else
        {
            cout << "wczytuje baze" << endl;
        }
    while(getline(baza, tekst))
    {
        cout << tekst << endl;
    }
    getchar(); getchar();
    baza.close();

}
void usun_dane_z_pliku(Human &osoba)
{
   /* fstream baza;
    baza.open("base.b", ios::out | ios::app);

    baza.close(); */
    cout << "funkcja w budowie !!" << endl;
    getchar(); getchar();
}
