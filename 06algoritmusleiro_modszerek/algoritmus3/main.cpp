#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "hun");
    cout << "Téglalap" << endl;
    int a,b;
    cin >> a;
    cin >> b;
    double t=a*b;
    double k=2*(a+b);
    cout<< "A téglalap területe " <<t<< " egység."<<endl;
    cout << "A téglalap kerülete " <<k<< " egység.";
    return 0;
}
