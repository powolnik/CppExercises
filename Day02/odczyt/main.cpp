#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

string imie, nazwisko;
int NrTel;
//string numer;

int main()
{

    fstream plik;
    plik.open("wizytowka.txt", ios::in);
    if(plik.good()==false)
    {
        cout<<"Plik nie istnieje";
        exit(0);
    }

    string linia;
    int NrLinii=1;
    while(getline(plik, linia))
    {
        switch(NrLinii)
        {
        case 1:

            {
                imie = linia;
            }
        break;
        case 2:

            {
                nazwisko = linia;
            }
        break;
        case 3:

            {
                NrTel = atoi(linia.c_str());
            }
        break;
        default:
            {
                cout << "done\n";
            }
        }

        NrLinii++;
    }
    plik.close();
    cout<<imie<<endl<<nazwisko<<endl<<NrTel;



    return 0;
}
