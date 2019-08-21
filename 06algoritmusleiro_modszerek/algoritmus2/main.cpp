#include <iostream>

using namespace std;

int main()

{
    setlocale(LC_ALL,"hun");
    cout << "Program:kör" << endl;
    int r;
    cin >> r;
    double t=r*r*3.14;
    double k=2*r*3.14;
    cout << "a kör kerülete: " <<k<< ", területe pedig:"<<t;
    return 0;
}
