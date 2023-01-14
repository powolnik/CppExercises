#include <iostream>

using namespace std;

float Metry;
int wybor;

float IleCali(float m);

float IleYardow(float m);

float IleMil(float m);


int main()
{
for (;;)
    {
        cout << "MENU GLOWNE\n";
        cout << "-----------\n";
        cout << "1. Zmien na cale\n";
        cout << "2. Zmien na yardy\n";
        cout << "3. Zmien na mile\n";
        cin >> wybor;
        cout << "Podaj ilosc metrow: ";
        cin >> Metry;
        switch (wybor)
        {
        case 1:
            {
                cout << Metry << " tyle metrow to: " << IleCali(Metry) << " tyle cali.";
            }
            break;
        case 2:
            {
                cout << Metry << " tyle metrow to: " << IleYardow(Metry) << " tyle yardow.";
            }
            break;
        case 3:
            {
                cout << Metry << " tyle metrow to: " << IleMil(Metry) << " tyle mil.";
            }
            break;
        default:
            {
                cout << "wybrales nieistniejace dzialanie, enter by kontynuowac\n";
            }
            break;
        }
        getchar();getchar();
        cout << "by dokonac nowego dzialania kliknij enter\n";
    }


    return 0;
}
float IleCali(float m)
{
    return m * 39.37;
}
float IleYardow(float m)
{
    return m * 10.936;
}
float IleMil(float m)
{
    return m * 0.00621;
}
