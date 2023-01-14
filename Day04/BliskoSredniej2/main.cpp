#include <iostream>
#include <math.h>

using namespace std;

int ile;
float liczba;
float srednia;

float zapis();
float policzsrednia(float s);
float porownaj(float *tablica, float srednia);

int main()
{

    cout << "podaj ile liczb chcemy ogarnac: ";
    cin >> ile;

    float *tablica;
    tablica = new float[ile];
    float *wskaznik = tablica;
    for (int i = 0; i<ile; i++)
    {
        cout << "podaj " << i + 1 <<" liczbe z przecinkiem: " << endl;
        cin >> liczba;
        *wskaznik = liczba;
        wskaznik++;
        srednia = policzsrednia(liczba);
    }
    cout << "Srednia: " << srednia;

    cout << "\n najblizsza sredniej jest liczba: " << porownaj(tablica, srednia);

    return 0;
}

float suma=0;
float policzsrednia(float newS)
{
    suma+=newS;

    return suma/ile;
}

float porownaj (float *tabl, float srednia)
{
    float m = *tabl;
    for (int i = 0; i < ile; i++)
    {
        if (fabs((srednia - *(tabl+i))) < fabs(srednia - m))
            m=*(tabl+i);
    }
    return m;
}
