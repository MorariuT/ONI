#include <iostream>

using namespace std;

int main()
{
    int a,b,c,d,e,s1,s2,s3,s4,s5,s6,macs;
    cout << "Numerele sunt:";
    cin >> a >> b >> c >> d >> e;
    s1 = a+b+c;
    s2 = a+b+d;
    s3 = a+b+e;
    s4 = b+c+d;
    s5 = b+c+e;
    s6 = c+d+e;
    macs = 0;
    if (s1 > macs)
    {
        macs = s1;
    }
    if (s2 > macs)
    {
        macs = s2;
    }
    if (s3 > macs)
    {
        macs = s3;
    }
    if (s4 > macs)
    {
        macs = s4;
    }
    if (s5 > macs)
    {
        macs = s5;
    }
    if (s6 > macs)
    {
        macs = s6;
    }
    cout << "Suma mexima este " << macs;
    return 0;
}
