#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "H�ron k�plet" << endl;

    double a;
    cin >> a;
    double b;
    cin>> b;
    double c;
    cin>> c;
    double S;
    S= (a+b+c)/2;
    cin >> S;
    double T= sqrt(S*(S-a)*(S-b)*(S-c));
    cout << "A kisz�molt k�plet eredm�nye " <<T<< " lett";
    return 0;
}
