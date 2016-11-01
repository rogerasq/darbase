/* Projekt: Darbase
 * Copyright @ 2016 Kszysztof Olszewski
 */
#include <iostream>
#include "base.h"

main(){	
	menu();

}
void menu(){
	cout << " * * * D A R B A S E * * * " << endl;
	cout << "1. Pokaż baze " << endl 
	     << "2. Utworz baze " << endl 
	     << "3. Wczytaj baze " << endl 
	     << "4. Zapisz baze " << endl 
	     << "5. Koniec" << endl;
}     
int wybierz_menu() {
	int wybierz;
	switch(wybierz){
		case 1: pokaz_baze();
			break;
		case 2: utworz_baze();
			break;	
		case 3: wczytaj_baze();
			break;
		case 4: zapisz_baze();
			break;
		case 5: cout << "Do widzenia" << endl;
			return 0;
			break;
		default: cout << "Nie ma takiej opcji !!!" << endl;
			break;
	}
}
