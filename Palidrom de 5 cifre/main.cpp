#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int c1 = 0;
    int c2 = 0;
    int c3 = 0;
    int c4 = 0;
    int c5 = 0;
    int o = 0;
    cout << "Numarul:";
    cin >> a;
    c1 = a%10;
    c2 = (a/10)%10;
    c3 = (a/100)%10;
    c4 = (a/1000)%10;
    c5 = (a/10000)%10;
    o = c1*10000+c2*1000+c3*100+c4*10+c5;
    if (a==o)
    {
        cout << "Este palindrom";
    }
    else
    {
        cout << "Nu este palindrom";
    }
    return 0;
}
