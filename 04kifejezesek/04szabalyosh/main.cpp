#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Egyenl� oldal� h�romsz�g ter�lete"<< endl;

    double a;
    cout << "Adja meg az a-t";
    cin>> a;

    double T;
    T = (pow(a,2)* sqrt(3))/4;
    cout << " Az egyenl� oldal� h�romsz�g ter�lete " << T << " lett.";

    return 0;
}
