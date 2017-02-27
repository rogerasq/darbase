#ifndef BASE_H
#define BASE_H
using namespace std;

class Human
{
    private:
        string imie;
        string nazwisko;
        string nr_tel;
    public:
        void pobierz_dane();
        void wypisz_dane();

    friend void zapisz_dane_do_pliku(Human &) ;
    friend void odczytaj_dane_z_pliku(Human &);
    friend void usun_dane_z_pliku(Human &);

 /* Przypisanie domyślnych wartości dla konstruktora */
        Human(string="Gal", string="Anonim", string="0000000");

       ~Human();
};

#endif

