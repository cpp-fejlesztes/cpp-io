#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    cout << "Egyenlõ oldalú háromszög területe"<< endl;

    double a;
    cout << "Adja meg az a-t";
    cin>> a;

    double T;
    T = (pow(a,2)* sqrt(3))/4;
    cout << " Az egyenlõ oldalú háromszög területe " << T << " lett.";

    return 0;
}
