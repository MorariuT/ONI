#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int r = 0;
    int al = 0;
    int s = 0;
    cout << "Cate globuri albe sunt:";
    cin >> a;
    r = a+3;
    al = r+a-2;
    s = a+r+al;
    cout << "Globuri albastre sunt:" << al << endl;
    cout << "Globuri rosii sunt:" << r << endl;
    cout << "Sunt in total " << s << " globuri";
    return 0;
}
