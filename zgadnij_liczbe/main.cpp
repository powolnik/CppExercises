#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int liczba;
int zgadywanie;
int ileProb = 0;


int main()
{
    cout << "Zgadnij liczbe od 1 do 100" << endl;
    srand(time(NULL));
    liczba = rand()%100;
    liczba++;

    while(zgadywanie!=liczba)
    {
        cout << "wprowadz swoja liczbe: ";
        cin >> zgadywanie;
        ileProb++;
        if (zgadywanie==liczba)
        {
            cout << "Zgadles!\n";
        }
        else if (zgadywanie<liczba)
        {
            cout << "wiecej...\n";
        }
        else if (zgadywanie>liczba)
        {
            cout << "mniej...\n";
        }
    }
    cout << "BRAWO! Udalo Ci sie w "<<ileProb<< " probach";
    system("pause");


    return 0;
}
