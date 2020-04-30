#include <iostream>

using namespace std;

int main()
{
    int i = 0;
    int m = 0;
    int s = 0;
    int d = 0;
    cout << "Varsta lui Ionel este de:";
    cin >> i;
    cout << "Varsta lui Mihai este de:";
    cin >> m;
    s = i-m;
    d = m-i;
    if (i > m)
    {
        cout << "Ionel e mai mare cu " << s << " ani";
    }else
    {
        cout << "Mihai e mai mare cu " << d << " ani";
    }
    return 0;
}
