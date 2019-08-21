#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Trigonometria" << endl;

    double a;
    cin >> a;
    double b;
    cin >> b;
    double k;
    cin >> k;
    double T;
     T = (a*b*sin(k))/2;
    cout << "A háromszög területe " <<T<< " egység.";
    return 0;
}
