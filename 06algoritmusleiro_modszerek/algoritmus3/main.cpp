#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "hun");
    cout << "T�glalap" << endl;
    int a,b;
    cin >> a;
    cin >> b;
    double t=a*b;
    double k=2*(a+b);
    cout<< "A t�glalap ter�lete " <<t<< " egys�g."<<endl;
    cout << "A t�glalap ker�lete " <<k<< " egys�g.";
    return 0;
}
