#include <iostream>

using namespace std;

int main()
{
    cout << "Ellenállás számítás" << endl;
    cout << "Adja meg az elsõ ellenállást:"<<endl;
    double R1;
    cin>>R1;
    double R2;
    cin>>R2;

    double Rp =R1*R2/(R1+R2);
    cout << Rp;

    return 0;
}
