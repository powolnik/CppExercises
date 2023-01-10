#include <iostream>

using namespace std;

string Login, Haslo;
string PoprawnyLogin = "Admin", PoprawneHaslo = "Szarlotka";

int main()
{
    cout << "Aby sie zalogowac, podaj login: ";
    cin >> Login;
    cout << endl <<"Teraz podaj haslo: ";
    cin >> Haslo;

    if (Login == PoprawnyLogin && Haslo == PoprawneHaslo)
    {
        cout << "\nBrawo! Zalogwales sie!";
    }
    else
    {
        cout << "\nPodany login lub haslo sa niepoprawne!\n";
        main();
    }

    return 0;
}
