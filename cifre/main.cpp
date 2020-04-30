#include <iostream>

using namespace std;

int main()
{
    int a,c1,c2,c3,s,p;
    cout << "Care este numarul:";
    cin >> a;
    c1 = a%10;
    c2 = (a/10)%10;
    c3 = (a/100)%10;
    s = c1+c2+c3;
    p = c1*c2*c3;
    cout << "Suma este " << s << " produsul este " << p << endl;
    return 0;
}
