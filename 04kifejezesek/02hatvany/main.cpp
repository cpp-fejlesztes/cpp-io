#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Egyenletes gyorsuló mozgás" << endl;
    cout << "Kezdõ sebesség:" << endl;

    double a;
    cin >> a;
    double t;
    cin >> t;

    double S = a*pow(t,2)/2;
    cout <<"A kiszámolt út" << S << "km";
    return 0;
}
