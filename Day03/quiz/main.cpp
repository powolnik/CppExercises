#include <iostream>
#include <fstream>
#include <cstdlib>

#include <string>

using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
int wynik = 0;

int main()
{
    int NrLinii=1;
    string linia;
    int NrPytania=0;
    string odpowiedz;

    fstream plik;
    plik.open("quiz.txt", ios::in);

    if (plik.good()==false)
    {
        cout << "nie udalo sie wczytac pliku";
        exit(0);
    }

    while (getline(plik, linia))
    {
        switch(NrLinii)
        {
            case 1: temat=linia; break;
            case 2: nick=linia; break;

            case 3: tresc[NrPytania]=linia;      break;
            case 4: odpA[NrPytania]=linia;       break;
            case 5: odpB[NrPytania]=linia;       break;
            case 6: odpC[NrPytania]=linia;       break;
            case 7: odpD[NrPytania]=linia;       break;
            case 8: poprawna[NrPytania]=linia;   break;

        }
        if (NrLinii==8) {NrLinii=2; NrPytania++;}
        NrLinii++;
    }
    plik.close();


    cout << temat << endl << nick << endl;


    for (int i = 0; i<=NrPytania-1; i++)
    {
        cout << tresc[i] << endl << odpA[i] << endl << odpB[i] << endl << odpC[i] << endl << odpD[i] << endl;
        cin >> odpowiedz;
        if (odpowiedz == poprawna [i])
        {
            wynik++;
        }
    }
    cout << wynik;


    return 0;
}
