#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    cout << "Numarul este:";
    cin >> a;
    if (a<=15)
    {
        cout << a*a;
    }
    if (a >= 16 && a <= 30)
    {
        cout << a%10+(a/10)%10;
    }
    if (a > 30)
    {
        cout << (a%10)*((a/10)%10);
    }
    return 0;
}
