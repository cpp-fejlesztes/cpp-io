#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"hun");
    cout << "Adja meg a sz�let�si �v�t:" << endl;
    int ev;
    cin >> ev;
    cout << "Adja meg az els� f�l�ves �tlag�t:";
    double atlag;
    cin >> atlag;
    cout << "Szeretne kil�pni? (k-kil�p�s)";
    char valasz;
    cin >> valasz;


    return 0;
}
