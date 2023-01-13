#include <iostream>
#include <cstdlib>

using namespace std;

int NrMiesiaca;

int main()
{
    cout << "podaj numer miesiaca: " << endl;
    if (!(cin>>NrMiesiaca))
    {
        cerr << "To nie jest liczba!";
        exit(0);
    }
    switch(NrMiesiaca)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        {
            cout << "ten miesiac ma 31 dni";
        }
    break;

    case 4:
    case 6:
    case 9:
    case 11:
        {
            cout << "ten miesiac ma 30 dni";
        }
    case 2:
        {
            int rok;
            cout <<"podaj rok: ";
            cin >> rok;
            if (((rok%4 == 0) && (rok%100 != 0 )) || (rok%400 == 0))
            {
                cout << "ten rok to rok przestepny, wiec luty ma 29 dni";
            }
            else
            {
                cout << "ten rok nie jest rokiem przestepnym, wiec luty ma 28 dni";
            }
        }
    break;
    default:
        {
            cout << "nie ma takiego miesiaca";
        }
    break;

    }



    return 0;
}
