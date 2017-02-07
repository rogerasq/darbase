#ifndef BASE_H
#define BASE_H
using namespace std;

// FUNKCJE W BUDOWIE !!!!!
/*const int IMIE=20;
const int NAZWISKO=20;
const int NR_TEL=9;

struct baza{
    char imie[IMIE];
    char nazwisko[NAZWISKO];
    int numer_tel[NR_TEL];
}; */
// FUNKCJE W BUDOWIE !!!!!


/* main.cpp */
extern int menu(void);
extern int wybierz_menu(int &opcja);
extern void czysc_ekran();
/*base.cpp */
extern void utworz_baze(void);
extern void pokaz_baze(void);

/*file.cpp */
extern void wczytaj_baze_z_pliku(void);
extern void zapisz_baze_do_pliku(void);

#endif

