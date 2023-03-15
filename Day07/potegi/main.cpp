#include <iostream>

using namespace std;

int a, b, c;

int main()
{
    cout << "wprowadz liczbe ktora chcesz spotegowac: " << endl;
    cin >> a;
    cout << "wprowadz do jakiej potegi ma zostac podniesiona liczba:" << endl;
    cin >> b;

    for (int i = 0; i < b; i++)
    {
        c= a*a;
    }
    cout << c << endl;
    return 0;
}
