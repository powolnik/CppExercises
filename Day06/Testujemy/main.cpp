#include <iostream>

using namespace std;

int Year=0;
int One=0, Two=0, Six=0;

void yearsPassed()
{
    Two++;
	Six++;

	if (Two == 2 && Six == 6)
	{
        Two=0;
	}
	else if (Two == 2)
    {
        cout << "Two Value: " << Two << endl;
		Two = 0;
		cout << "Losowanie ZADAN"<<endl;
    }
	if (Six == 6)
	{
	    cout << "Six Value: " << Six << endl;
		Six = 0;
		cout << "Losowanie SENATOROW"<< endl;
		}
	return;
}
void yearPassed()
{
    Year++;
    One++;
    if(One >= 2)
    {
        cout << "Current year:" << Year <<endl;
        yearsPassed();
    }
    else if (One<2)
    {
        cout << "Current year:" << Year <<endl;
        cout << "SENATORZY 1"<<endl;
    }
}


int main()
{
    while (Year != 40)
    {
       yearPassed();
    }

}
