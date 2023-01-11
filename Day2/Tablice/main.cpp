#include <iostream>

using namespace std;

float Oceny[5];
float Suma = 0;
float Srednia;

int main()
{
    cout << "Podaj swoje oceny, aby wyliczyc srednia\n";
    for (int i=0; i<=4; i++)
    {
        cout << "Podaj ocene numer " << i+1 <<endl;
        cin >> Oceny[i];
        Suma+=Oceny[i];
    }
    Srednia = Suma/5;
    cout << "twoja srednia to: " << Srednia;


    return 0;
}
