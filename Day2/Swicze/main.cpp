#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;

float x, y;
char wybor;

int main()
{
    for(;;)
    {
    cout << "podaj pierwsza liczbe: " << endl;
    cin >> x;
    cout << "podaj druga liczbe: " << endl;
    cin >> y;

    cout<<endl;
    cout << "MENU GLOWNE" << endl;
    cout << "--------------" << endl;
    cout << "1. dodawanie" << endl;
    cout << "2. odejmowanie" << endl;
    cout << "3. mnozenie" << endl;
    cout << "4. dzielenie" << endl;
    cout << "9. wyjscie" << endl;


    wybor=getch();

    switch (wybor)
    {
    case '1':
        {
            cout << x+y << endl;
        }
    break;
    case '2':
        {
            cout << x-y << endl;
        }
    break;
    case '3':
        {
            cout << x*y << endl;
        }
    break;
    case '4':
        {
            if (y==0)
            {
                cout << "nie da sie dzielic przez 0" << endl;
            }
            else
            {
                cout << x/y << endl;
            }
        }
    break;
    case '9':
        {
            exit(0);
        }
    default:
        {
            cout << "Menu nie obsluguje tej opcji" << endl;
        }
    break;
    }
    cout<<"nacisnij enter by liczyc dalej";
    getchar();getchar();
    system("cls");
    }



    return 0;
}
