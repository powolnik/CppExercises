#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int rndLG[3];
int wartosc;
int rnd=0;
int LifeGoal[4];
int rozmiar= sizeof(LifeGoal)/sizeof(LifeGoal[0]);
int prevRnd1 = -1;
int prevRnd2 = -1;

int los()
{

    LifeGoal[0] = 1;
    LifeGoal[1] = 2;
    LifeGoal[2] = 3;
    LifeGoal[3] = 4;

    for (int i = 0; i<3; i++)
    {
        do
        {
            rnd = rand()% rozmiar;

        }
        while (prevRnd1 == rnd || prevRnd2 == rnd);
        {

            prevRnd2 = prevRnd1;
            prevRnd1 = rnd;
            wartosc=LifeGoal[rnd];
            rndLG[i]=wartosc;
            cout << i <<endl;
        }
        //prevRnd1 = -1;
        //prevRnd2 = -1;
    }

    //cout << rnd <<"-"<< prevRnd1 <<"-"<< prevRnd2 <<endl;
    //cout << wartosc << endl;
    return;
}



int main()
{
    srand(time(0));

        los();
        cout << rndLG[0] << rndLG[1] << rndLG[2] << endl;


    return 0;
}
