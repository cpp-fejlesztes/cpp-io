#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Egyenletes gyorsul� mozg�s" << endl;
    cout << "Kezd� sebess�g:" << endl;

    double a;
    cin >> a;
    double t;
    cin >> t;

    double S = a*pow(t,2)/2;
    cout <<"A kisz�molt �t" << S << "km";
    return 0;
}
