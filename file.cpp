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
#include <vector>
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
//próba nr 2 jakoś działa :)

   vector<string> linie;
   string linia;
   int nr_linii;
   ofstream plik_do_zapisu;
   ifstream plik_do_odczytu;

   plik_do_odczytu.open("base.b");
   while(getline(plik_do_odczytu, linia))
   {
      linie.push_back(linia);
   }
   plik_do_odczytu.close();

   cout << "którą linie usunąć:" << flush;
   cin >> nr_linii;
   cin.ignore();

   if ((nr_linii > 0)&&(nr_linii <= linie.size()))
   {
      plik_do_zapisu.open("base.b");
      for (int i = 0; i < linie.size(); ++i)
      {
         if(i != nr_linii - 1) //linie liczy sie od 1
         {
            plik_do_zapisu << linie[i] << "\n";
         }
      }
      plik_do_zapisu.close();
   }
   else
   {
      cerr << "Zly numer linii";
   }
   cin.get();
    getchar(); getchar();
}

/* funkcje do rozbudowy
    nie wskazuje ilości linii w pliku
    */

void odczytaj_id_z_pliku(Human &osoba)
{
    vector<string> linie;
    string linia;
    ifstream plik;
    plik.open("base.b");
    while(getline(plik,linia)){
            linie.push_back(linia);
    }
    plik.close();
    cout << "Ilość linii: " << linia << endl;
    getchar(); getchar();
}
void wpisz_id_do_pliku()
{

}
