#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int y = 0;
    int z = 0;
    int suma = 0;
    cout << "Prima ora:";
    cin >> x;
    cout << "A doua ora:";
    cin >> y;
    cout << "A treia ora:";
    cin >> z;
    suma = x+y+z;
    cout << "Numarul de persoane este de " << suma << endl;
    if (x > y && x > z)
    {
        cout << "Cel mai mare nr. de persoane este " << x;
    }
    if (y > x && y > z)
    {
        cout << "Cel mai mare nr. de persoane este " << y;
    }
    if (z > x && z > y)
    {
        cout << "Cel mai mare nr. de persoane este " << z;
    }
    return 0;
}
