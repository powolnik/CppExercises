#include <iostream>

using namespace std;

string PIN;
string WlasciwyPin = "1729";



int WprowadzPin()
{
    cout << "Witaj w naszym banku!\nWprowadz pin: ";
    cin >> PIN;
    if (PIN==WlasciwyPin)
    {
        cout << "Poprawny PIN\n";
        return 1;
    }
    else
    {
        cout << "Niepoprawny PIN\n";
        return 0;
    }
}
int main()
{
    while (WprowadzPin()==0)
    {
        WprowadzPin();
    }
    return 0;
}
