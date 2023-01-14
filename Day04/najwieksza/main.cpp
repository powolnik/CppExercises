#include <iostream>

using namespace std;

int x, y, z;

int najwieksza(int a, int b, int c);

int main()
{
    cout << "podaj 3 liczby do porownania: " << endl;
    cin >> x >> y >> z;
    cout << najwieksza(x, y, z);

    return 0;
}

int najwieksza(int a, int b, int c)
{
    int m=a;
    if (b>m) m=b;
    if (c>m) m=c;
    return m;
}
