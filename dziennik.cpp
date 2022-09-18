#include <iostream>
#include <string>

using namespace std;

class Subject {
public:
    void przedmoioty(){
        //wypisywanie przedmiotów
        string tab_przedmiotow[10];
        tab_przedmiotow[0] = "1. matematyka";
        tab_przedmiotow[1] = "2. polski";
        tab_przedmiotow[2] = "3. angielski";
        tab_przedmiotow[3] = "4. biologia";
        tab_przedmiotow[4] = "5. geografia";
        tab_przedmiotow[5] = "6. wf";
        tab_przedmiotow[6] = "7. fizyka";
        tab_przedmiotow[7] = "8. programowanie_obektowe";
        tab_przedmiotow[8] = "9. historia";
        tab_przedmiotow[9] = "10. wos";
        

        for (unsigned int i=  0; i < 10; i++) {
            cout << tab_przedmiotow[i]<<endl;
        }
    }

    void wyborprzedmiotu();

};

class OpcjeMenu {
public:
    //poszcegulne opcje wyboru z menu
    void wyborOpcji_1() {
        system("cls");

        Subject p;
        p.przedmoioty();
        p.wyborprzedmiotu();
    }

    void wyborOpcji_2() {
        //opecja druga
        cout << "2";
    }

    void wyborOpcji_3() {
        //opecja druga
        cout << "3";
    }

    void wyborOpcji_4() {
        //opecja druga
        cout << "4";
    }
};

class GradeBoook {
public:
    void menu(){
        //wypianie mednu
        cout << "1. Dodaj ocene" << endl; 
        cout << "2. Wypisz srednia"<<endl;;
        cout << "3. srednia ze wszystkeigo"<<endl;
        cout << "4. Wypisz oceny z danego przedmiotu"<<endl;
        cout << "5. Zakoncz program" << endl;
    }

    void wyborZmenu() {
        int wybor_opcji_z_menu;
        cout << "Twoj wybor:  ";
        cin >> wybor_opcji_z_menu;

            OpcjeMenu opcja;

        //sprawdzenie któr to opcja
        if (wybor_opcji_z_menu == 1) {
            opcja.wyborOpcji_1();
        }
        else if (wybor_opcji_z_menu == 2) {
            opcja.wyborOpcji_2();
        }
        else if (wybor_opcji_z_menu == 3) {
            opcja.wyborOpcji_3();
        }
        else if (wybor_opcji_z_menu == 4) {
            opcja.wyborOpcji_4();
        }
        else if (wybor_opcji_z_menu == 5) {
            getchar();
        }
    }
};


    

int main()
{
    GradeBoook wstep;
    wstep.menu();
    wstep.wyborZmenu();



    getchar();
    return 0;
}

void Subject::wyborprzedmiotu() {
    int numer_przedmiotu;
    int ilosc_ocen;
    int ocena_czastkowa_matematyka;
    int ocena_czastkowa_polski;
    int ocena_czastkowa_ang;
    int ocena_czastkowa_biologia;
    int ocena_czastkowa_geografia;
    int ocena_czastkowa_wf;
    int ocena_czastkowa_fizyka;
    int ocena_czastkowa_prog_obiekt;
    int ocena_czastkowa_historia;
    int ocena_czastkowa_wos;


    cout << "Wybierz numer przedmiotu:  ";
    cin >> numer_przedmiotu;
    cout << "Ile ocen chcesz wpisac? " << endl;
    cin >> ilosc_ocen;
    system("cls");

    if (numer_przedmiotu == 1) {
        int oceny_matematyka[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_matematyka;
            oceny_matematyka[j] = ocena_czastkowa_matematyka;


        }
        cout << "Oceny matematyka: "<<endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_matematyka[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 2) {
        int oceny_polski[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_polski;
            oceny_polski[j] = ocena_czastkowa_polski;


        }
        cout << "Oceny polski: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_polski[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 3) {
        int oceny_ang[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_ang;
            oceny_ang[j] = ocena_czastkowa_ang;


        }
        cout << "Oceny angielski: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_ang[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 4) {
        int oceny_biologia[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_biologia;
            oceny_biologia[j] = ocena_czastkowa_biologia;


        }
        cout << "Oceny biologia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_biologia[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 5) {
        int oceny_geografia[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_geografia;
            oceny_geografia[j] = ocena_czastkowa_geografia;


        }
        cout << "Oceny geografia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_geografia[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 6) {
        int oceny_wf[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_wf;
            oceny_wf[j] = ocena_czastkowa_wf;


        }
        cout << "Oceny wf: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
           cout << oceny_wf[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 7) {
        int oceny_fizyka[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_fizyka;
            oceny_fizyka[j] = ocena_czastkowa_fizyka;


        }
        cout << "Oceny fizyka: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_fizyka[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 8) {
        int oceny_prog_obiekt[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_prog_obiekt;
            oceny_prog_obiekt[j] = ocena_czastkowa_prog_obiekt;


        }
        cout << "Oceny prog_obiekt: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
           cout << oceny_prog_obiekt[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
             GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 9) {
        int oceny_historia[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_historia;
            oceny_historia[j] = ocena_czastkowa_historia;


        }
        cout << "Oceny historia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_historia[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }
    else if (numer_przedmiotu == 10) {
        int oceny_wos[1];
        for (int j = 1; j <= ilosc_ocen; j++) {
            cin >> ocena_czastkowa_wos;
            oceny_wos[j] = ocena_czastkowa_wos;


        }
        cout << "Oceny wos: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++) {
            cout << oceny_wos[k] << endl;
        }

        string doMenu;
        cout << "kliknij 'M' zeby wrocic do menu";
        cin >> doMenu;
        system("cls");

        if (doMenu == "M" || doMenu == "m") {
            GradeBoook a;
            a.menu();
            a.wyborZmenu();
        }
    }

}


