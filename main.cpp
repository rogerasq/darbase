/* Projekt: Darbase
 * Copyright @ 2016 Kszysztof Olszewski
 */
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "base.h"

main(){
	menu();
}
void menu(){
	int opcja;
		while(opcja!=5){
		system("clear");	
		cout << " * * * D A R B A S E * * * " << endl;
		cout << "1. Pokaż baze " << endl 
		     << "2. Utworz baze " << endl 
		     << "3. Wczytaj baze " << endl 
		     << "4. Zapisz baze " << endl 
		     << "5. Koniec" << endl;
		cout << "Wybierz opcje: "; 
		cin.sync(); cin >> opcja;
		wybierz_menu(opcja);
		} 
}     
int wybierz_menu(int &opcja) {
//	int wybierz;
	switch(opcja){
		case 1: pokaz_baze();
			getchar(); getchar();
			break;
		case 2: utworz_baze();
			getchar(); getchar();
			break;	
		case 3: wczytaj_baze();
			getchar(); getchar();
			break;
		case 4: zapisz_baze();
			getchar(); getchar();
			break;
		case 5: cout << "Do widzenia" << endl;
			return 0;
			break;
		default: cout << "Nie ma takiej opcji !!!" << endl;
			getchar(); getchar();
			break;
	}
}
