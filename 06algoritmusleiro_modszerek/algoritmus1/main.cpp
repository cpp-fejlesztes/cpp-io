#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL,"hun");
    cout << "START" << endl;
    int a,b;
    cin >> a;
    cin >> b;
    double o=a+b;
    double k=a-b;
    double sz=a*b;
    double h=(float)a/b;
    cout << " ha o=a+b, akkor o: " <<o<< ", ha k=a-b, akkor k: " <<k<< ", ha a sz=a*b, akkor sz: "<<sz<< ", ha a h=a/b, akkor h:"<<h<<endl;
    return 0;
}
