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
    cout << "A h�romsz�g ter�lete " <<T<< " egys�g.";
    return 0;
}
