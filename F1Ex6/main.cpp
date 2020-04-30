#include <iostream>

using namespace std;

int main()
{
    int x = 0;
    int h = 0;
    int s = 0;
    cout << "Minute sunt:";
    cin >> x;
    h = x/60;
    s = x*60;
    cout << "Ore sunt:" << h << endl;
    cout << "Secunde sunt:" << s << endl;
    return 0;
}
