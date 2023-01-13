#include <iostream>


using namespace std;

string wyraz;

int main()
{
    cout << "podaj wyraz ktory mam odwrocic: " << endl;
    cin >> wyraz;

    int dlugosc;
    dlugosc = wyraz.length();

    for (int i = dlugosc-1; i>=0; i--)
    {
        cout<<wyraz[i];
    }





    return 0;
}
