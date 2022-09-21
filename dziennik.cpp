#include <iostream>
#include <string>
#include <cstdlib>
//#include <stdio.h>

using namespace std;

class Subject
{
public:
    void przedmoioty()
    {
        // wypisywanie przedmiotów
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

        for (int i = 0; i < 10; i++)
        {
            cout << tab_przedmiotow[i] << endl;
        }
    }

    void wyborprzedmiotu();

    void sredniazprzedmiotow();

private:
    int sredniaMat = 0;
    int sredniaPol = 0;
    int sredniaAng = 0;
    int sredniaBiol = 0;
    int sredniaGeogr = 0;
    int sredniaWF = 0;
    int sredniaFiz = 0;
    int sredniaProg_Obiekt = 0;
    int sredniaHis = 0;
    int sredniaWos = 0;
};

class OpcjeMenu
{
public:
    // poszcegulne opcje wyboru z menu
    Subject p;

    void wyborOpcji_1()
    {
        system("cls");

        p.przedmoioty();
        p.wyborprzedmiotu();
    }

    void wyborOpcji_2()
    {
        system("cls");

        p.przedmoioty();
        p.sredniazprzedmiotow();
    }

    void wyborOpcji_3()
    {
        // opecja druga
        cout << "3";
    }

    void wyborOpcji_4()
    {
        // opecja druga
        cout << "4";
    }
};

class GradeBoook
{
public:
    void menu()
    {
        // wypianie mednu
        cout << "1. Dodaj ocene" << endl;
        cout << "2. Wypisz srednia z wybranego przedmiotu" << endl;
        cout << "3. Srednia ze wszystkeigo" << endl;
        cout << "4. Wypisz oceny z danego przedmiotu" << endl;
        cout << "5. Zakoncz program" << endl;
    }

    OpcjeMenu opcja;

    void wyborZmenu()
    {
        int wybor_opcji_z_menu;
        cout << "Twoj wybor: ";
        cin >> wybor_opcji_z_menu;

        // sprawdzenie któr to opcja
        if (wybor_opcji_z_menu == 1)
        {
            opcja.wyborOpcji_1();
        }
        else if (wybor_opcji_z_menu == 2)
        {
            opcja.wyborOpcji_2();
        }
        else if (wybor_opcji_z_menu == 3)
        {
            opcja.wyborOpcji_3();
        }
        else if (wybor_opcji_z_menu == 4)
        {
            opcja.wyborOpcji_4();
        }
        else if (wybor_opcji_z_menu == 5)
        {
            exit(0);
        }
    }
};

int main()
{
    GradeBoook wstep;
    while(true)
    {
        wstep.menu();
        wstep.wyborZmenu();
    }

    getchar();
    return 0;
}

void Subject::wyborprzedmiotu()
{
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

    int numer_przedmiotu;
    int ilosc_ocen;

    cout << "Wybierz numer przedmiotu:  ";
    cin >> numer_przedmiotu;
    cout << "Ile ocen chcesz wpisac? " << endl;
    cin >> ilosc_ocen;
    system("cls");

    if (numer_przedmiotu == 1)
    {
        int* oceny_matematyka = new int [ilosc_ocen];
        int j = 0;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_matematyka;
            oceny_matematyka[j] = ocena_czastkowa_matematyka;
        }
        system("cls");/////
        // int ilosc_matma = ilosc_ocen;

        cout << "Oceny matematyka: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_matematyka[k] << endl;
        }
        cout<<endl;


        // srednia
        int suma = 0;
        sredniaMat = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_matematyka[l];
            sredniaMat = suma / ilosc_ocen;
        }

        // srednia_mat = srednia;
        //cout << srednia << endl;
    }
    else if (numer_przedmiotu == 2)
    {
        int* oceny_polski = new int [ilosc_ocen];
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_polski;
            oceny_polski[j] = ocena_czastkowa_polski;
        }
        system("cls");
        cout << "Oceny polski: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_polski[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaPol = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_polski[l];
            sredniaPol = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 3)
    {
        int* oceny_ang = new int [ilosc_ocen];
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_ang;
            oceny_ang[j] = ocena_czastkowa_ang;
        }
        system("cls");
        cout << "Oceny angielski: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_ang[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaAng = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_ang[l];
            sredniaAng = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 4)
    {
        int* oceny_biologia = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_biologia;
            oceny_biologia[j] = ocena_czastkowa_biologia;
        }
        system("cls");
        cout << "Oceny biologia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_biologia[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaBiol = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_biologia[l];
            sredniaBiol = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 5)
    {
        int* oceny_geografia = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_geografia;
            oceny_geografia[j] = ocena_czastkowa_geografia;
        }
        system("cls");
        cout << "Oceny geografia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_geografia[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaGeogr = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_geografia[l];
            sredniaGeogr = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 6)
    {
        int* oceny_wf = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_wf;
            oceny_wf[j] = ocena_czastkowa_wf;
        }
         system("cls");
        cout << "Oceny wf: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_wf[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaWF = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_wf[l];
            sredniaWF = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 7)
    {
        int* oceny_fizyka = new int [ilosc_ocen];
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_fizyka;
            oceny_fizyka[j] = ocena_czastkowa_fizyka;
        }
        system("cls");
        cout << "Oceny fizyka: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_fizyka[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaFiz = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_fizyka[l];
            sredniaFiz= suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 8)
    {
        int* oceny_prog_obiekt = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_prog_obiekt;
            oceny_prog_obiekt[j] = ocena_czastkowa_prog_obiekt;
        }
        system("cls");
        cout << "Oceny prog_obiekt: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_prog_obiekt[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaProg_Obiekt = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_prog_obiekt[l];
            sredniaProg_Obiekt= suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 9)
    {
        int* oceny_historia = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_historia;
            oceny_historia[j] = ocena_czastkowa_historia;
        }
         system("cls");
        cout << "Oceny historia: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_historia[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaHis = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_historia[l];
            sredniaHis = suma / ilosc_ocen;
        }
    }
    else if (numer_przedmiotu == 10)
    {
        int* oceny_wos = new int [ilosc_ocen];;
        for (int j = 1; j <= ilosc_ocen; j++)
        {
            cin >> ocena_czastkowa_wos;
            oceny_wos[j] = ocena_czastkowa_wos;
        }
         system("cls");
        cout << "Oceny wos: " << endl;
        for (int k = 1; k <= ilosc_ocen; k++)
        {
            cout << oceny_wos[k] << endl;
        }
        cout<<endl;
        // srednia
        int suma = 0;
        sredniaWos = 0;
        for (int l = 1; l <= ilosc_ocen; l++)
        {
            suma += oceny_wos[l];
            sredniaWos = suma / ilosc_ocen;
        }
    }
}

void Subject::sredniazprzedmiotow()
{
    //system("cls");
    int wybor_uzyt;
    cout << "Twoj wybor: ";
    cin >> wybor_uzyt;
    system("cls");

    switch(wybor_uzyt) {
        case 1:
            cout << "Srednia: "<< sredniaMat << endl;
            break;
        case 2:
            cout<< "Srednia: " << sredniaPol << endl;
            break;
        case 3:
            cout<< "Srednia: " << sredniaAng << endl;
            break;
        case 4:
            cout<< "Srednia: "<< sredniaBiol << endl;
            break;
        case 5:
            cout<< "Srednia: "<< sredniaGeogr << endl;
            break;
        case 6:
            cout<< "Srednia: "<< sredniaWF << endl;
            break;
        case 7:
            cout<< "Srednia: "<< sredniaFiz << endl;
            break;
        case 8:
            cout<< "Srednia: "<< sredniaProg_Obiekt << endl;
            break;
        case 9:
            cout<< "Srednia: "<< sredniaHis << endl;
            break;
        case 10:
            cout<< "Srednia: "<< sredniaWos << endl;
            break;
    }
    cout<<endl;
}