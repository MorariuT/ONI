#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    int y = 0;
    int z = 0;
    //int s = 0;
    cout << "Numarul ales este egal cu:";
    cin >> x;
    a = x%10;
    b = (x/10)%10;
    c = (x/100)%10;
    d = (x/1000)%10;
    cout << "Numarul fara sute este: " << d << b << a << endl;
    cout << "Numarul fara zeci este:" << d << c << a;
    return 0;
}
