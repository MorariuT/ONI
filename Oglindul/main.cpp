#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    cout << "Nr. de mii este de:";
    cin >> a;
    cout << "Nr. de sute este de:";
    cin >> b;
    cout << "Nr. de zeci este egal cu:";
    cin >> c;
    cout << "Nr. de unitati este egal cu:";
    cin >> d;
    cout << "Numarul este:" << a << b << c << d << endl;
    cout << "Oglindul este:" << d << c << b << a;
    return 0;
}
