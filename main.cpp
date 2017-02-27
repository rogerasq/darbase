/* main.cpp : Darbase

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
#include <cstdlib>
#include <cstring> //strcmp
#include "base.h"
#include "menu.h"

int main(int argc, char * argv[])
{
	for(int i = 1 ; i < argc ; i++){
		if(!strcmp(argv[i], "-h")){
			cout << "\t* D A R B A S E * \n"
				<< "Help: \n";
			return 0;
		}
		if(!strcmp(argv[i], "-t"))
		{
			cout << "Program skompilowano: " << __TIME__ << " " << __DATE__ << endl;
			return 0;
		}
		}
  // Human osoba;
    Menu lista;
    lista.menu_glowne();
   // osoba.pobierz_dane();
   // osoba.wypisz_dane();
    //zapisz_dane_do_pliku(osoba);
    //odczytaj_dane_z_pliku(osoba);
return 0;
}
