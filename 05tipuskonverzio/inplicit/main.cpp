#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    float gy=sqrt(a*b);
    cout.precision(2);
    cout<<fixed<<gy;
    return 0;
}
