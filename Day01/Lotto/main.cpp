#include <iostream>
#include <windows.h>
#include <time.h>
using namespace std;

int liczba;

int main()
{

    Sleep(1000);
    srand(time(NULL));


    for (int i=1; i<=6; i++)
    {
        liczba = rand()%49+1;
        cout << liczba << endl;
        Sleep(1000);
    }


    return 0;
}
