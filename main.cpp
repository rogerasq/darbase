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

int main(int argc, char * argv[])
{
	cout << "wydruk..." << endl;
	for(int i = 1 ; i < argc ; i++){
		if(!strcmp(argv[i], "-h")){
			cout << "\t* D A R B A S E * \n"
				<< "Help: \n";
			return 0;
		}
		if(!strcmp(argv[i], "-t")){
			cout << "Program skompilowano: " << __TIME__ << " " << __DATE__ << endl;
			return 0;
		}
	cout << "Parametr nr " << i << " to C-string: " << argv[i] << endl;
	//if(i==argc) {return 0;}
}
	menu();
}
int menu(){
	int opcja=0;
		while(opcja!=5){
		czysc_ekran();
		cout << " * * * D A R B A S E * * * " << endl;
		cout << "1. Pokaż baze " << endl
		     << "2. Utworz baze " << endl
		     << "3. Wczytaj baze " << endl
		     << "4. Zapisz baze " << endl
		     << "5. Koniec" << endl;
		cout << "Wybierz opcje: ";
		//cin.clear();
        cin >> opcja;
		wybierz_menu(opcja);
		}
}
int wybierz_menu(int &opcja) {
	switch(opcja){
		case 1: pokaz_baze();
			getchar(); getchar();
			break;
		case 2: utworz_baze();
			//getchar(); getchar();
			break;
		case 3: wczytaj_baze_z_pliku();
			getchar(); getchar();
			break;
		case 4: zapisz_baze_do_pliku();
			getchar(); getchar();
			break;
		case 5: cout << "Do widzenia" << endl;
			return 0;
			break;
		default: cout << "Nie ma takiej opcji !!!" << endl;
			//getchar(); getchar();
			break;
	}
}
void czysc_ekran(){
    system("clear");
}
