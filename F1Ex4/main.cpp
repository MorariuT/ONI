#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int s = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Numarul ales este de:";
    cin >> x;
    a = x%10;
    b = (x/10)%10;
    c = (x/100)%10;
    s = a + b + c;
    cout << "Suma cifrelor este de:" << s << endl;
    return 0;
}
