#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int r = 0;
    int v = 0;
    int suma = 0;
    cout << "Globuri albe sunt:";
    cin >> a;
    r = a*2;
    v = r - 3;
    cout << "Globuri rosii sunt:" << r << endl;
    cout << "Globuri albe sunt:" << v << endl;
    suma = a + r + v;
    cout << "globuri sunt " << suma;
    return 0;
}
