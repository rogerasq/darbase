#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

class Menu {

private:
    int opcja;
public:
    void menu_glowne();
    void wybierz_menu(int);
    void czysc_ekran();

     //konstruktor
     Menu(int = 0);

    //destruktor
    ~Menu();
};


#endif // MENU_H_INCLUDED
