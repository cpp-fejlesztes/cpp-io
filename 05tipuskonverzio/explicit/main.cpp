#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int a,b;
    cin>>a;
    cin>>b;
    float o=( (float) a+b)/2;
    //float o=( (float(a)+b)/2;
    cout.precision(2);
    cout<<fixed<<o;
    return 0;
}
