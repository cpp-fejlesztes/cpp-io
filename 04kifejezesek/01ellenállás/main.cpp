#include <iostream>

using namespace std;

int main()
{
    cout << "Ellen�ll�s sz�m�t�s" << endl;
    cout << "Adja meg az els� ellen�ll�st:"<<endl;
    double R1;
    cin>>R1;
    double R2;
    cin>>R2;

    double Rp =R1*R2/(R1+R2);
    cout << Rp;

    return 0;
}
