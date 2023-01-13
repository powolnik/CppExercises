#include <iostream>

using namespace std;

string imie;

int main()
{
    cout << "Podaj imie: " << endl;
    cin >> imie;

    int dlugosc;
    dlugosc = imie.length();


    if (imie[dlugosc-1] == 'a')
    {
        cout << "prawdopodobnie dziewczyna";
    }
    else
    {
        cout << "prawdopodobnie chlopak";
    }





    return 0;
}
