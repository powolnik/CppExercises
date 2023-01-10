#include <iostream>

using namespace std;

int wiek;

int main()
{
    cout << "Ile masz lat?: ";
    cin >> wiek;
    if (wiek>=18 && wiek>=35)
    {
        cout << "Spoko, jestes pelnoletni i mozesz zostac prezydentem\n";
        main();
    }
    else if (wiek>=18)
    {
        cout << "Jestes pelnoletni ale prezydentem jeszcze nie zostaniesz\n";
        main();
    }
    else
    {
        cout << "Nie jestes pelnoletni wiec prezydentem narazie nie zostaniesz\n";
        main();
    }
    return 0;
}
