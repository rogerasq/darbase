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
#include <cstdio>
#include <cstring>
#include "base.h"

void utworz_baze(void){
    char imie[20];
    char nazwisko[20];
    char nr_tel[9];
    cout << "IMIĘ: ";
    cin.sync();
    cin >> imie;
    cout << "NAZWISKO: ";
    cin.sync();
    cin >> nazwisko;
    cout << "NR TELEFONU: ";
    cin.sync();
    cin >> nr_tel;
    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;
    getchar(); getchar();
 }

void pokaz_baze(){
	cout << "pokazuje baze" << endl;
	}
