#include <iostream>
#include <windows.h>
#include <cstdlib>

using namespace std;

int i;



int Odliczanie()
{
    for (i=15; i>=0; i--)
    {
        system("cls");
        cout << i << endl;
        Sleep(1000);

    }
    cout << "jebut";
    return 0;
}

int WypiszNaEkranieXRazy()
{
    string imie;
    int liczba;
    cout << "podaj imie: ";
    cin >> imie;
    cout << "podaj liczbe dodatnia calkowita: ";
    cin >> liczba;
    for (int i=1; i<=liczba; i++)
    {
        cout << i << ". " << imie << endl;
    }
    return 0;
}

int Bakterie()
{
    int liczbaBakterii = 1;
    int maxBakterii;
    int ilePetli = 0;
    cout << "podaj max bakterii; ";
    cin >> maxBakterii;
    while (liczbaBakterii <= maxBakterii)
    {
        liczbaBakterii = liczbaBakterii*2;
        ilePetli++;
        cout<<"minelo godzin: "<<ilePetli<<" liczba bakterii: "<<liczbaBakterii<<endl;
    }
    cout << maxBakterii << " bakterii otrzymamy po " << ilePetli << " godzinach.";
    return 0;
}










int main()
{
    Bakterie();
    cout << endl;
    WypiszNaEkranieXRazy();
    cout << endl;
    Sleep(1000);
    Odliczanie();

    return 0;
}
