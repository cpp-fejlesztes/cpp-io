#include <iostream>

using namespace std;

int main()
{
    setlocale (LC_ALL,"hun");
    cout << "Adja meg a születési évét:" << endl;
    int ev;
    cin >> ev;
    cout << "Adja meg az elsö féléves átlagát:";
    double atlag;
    cin >> atlag;
    cout << "Szeretne kilépni? (k-kilépés)";
    char valasz;
    cin >> valasz;


    return 0;
}
