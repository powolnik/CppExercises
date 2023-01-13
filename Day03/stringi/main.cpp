#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int lepienie()
{
    string jeden = "ala ma ";
    string dwa = "kota";
    string trzy = jeden+dwa;

    cout << trzy << endl;

}
int maleduze()
{
    string napis = "Ala ma kota";
    cout << napis << endl;
    transform(napis.begin(), napis.end(), napis.begin(), ::toupper);
    cout << napis << endl;
    transform(napis.begin(), napis.end(), napis.begin(), ::tolower);
    cout << napis << endl;

}
int szukaj()
{
    string napis = "ala ma kota";
    string szukaj = "kot";

    size_t pozycja = napis.find(szukaj);
    if (pozycja!=string::npos)
        cout<<"znaleziono na pozycji: " << pozycja;
    else
        cout<<"nie znaleziono";
}
int kasuj()
{
    string napis = "ala ma kota";
    napis.erase(3, 3);
    cout << napis;
}
int wstaw()
{
    string napis = "ala ma kota";
    napis.insert(11, " filemona");
    cout << napis;
}
int zastap()
{
    string napis = "ala ma kota";
    napis.replace(4, 2, "nie ma");
    cout << napis;
}
int wyjmijzapisz()
{
    string napis = "ala ma kota";
    string nowynapis = napis.substr(8, 4);
    cout << nowynapis;
}





int main()
{
    wyjmijzapisz();
    return 0;
}
