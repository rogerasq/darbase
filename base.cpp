/* base.cpp : Darbase

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
#include "base.h"
void Human::pobierz_dane()
{
    cout << "Podaj imie: ";             cin >> imie;
    cout << "Podaj nazwisko: ";         cin >> nazwisko;
    cout << "Podaj numer telefonu: ";   cin >> nr_tel;

}
void Human::wypisz_dane()
{
    cout << imie << " " << nazwisko << " " << nr_tel << endl;
}

    //konstruktor
Human::Human(string i, string naz, string nr)
{
    imie = i;
    nazwisko = naz;
    nr_tel = nr;
}
    //destruktor
Human::~Human()
{

}
