#include <iostream>

using namespace std;

int uczniowie;
int cukierki;
int x, y;

int main()
{
    cout << "Ilu uczniow jest w Twojej klasie?: " ;
    cin >> uczniowie;
    cout << "Ile mama kupila cukierkow?: " ;
    cin >> cukierki;
    x = cukierki/(uczniowie-1);
    cout << "Kazdy uczen powinien dostac " << x << " cukierki.\n";
    y = cukierki-x*(uczniowie-1);
    cout << "Dla Jasia na wieczor zostanie "<< y << " cukierkow.";


    return 0;
}
