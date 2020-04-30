#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cin >> a >> b;
    int i = 1;
    int cmmdc = 0;
    int p = a*b;
    while(i <= p)
    {
        if(a % i == 0 && b % i == 0 )
            cmmdc = i;
            i = i+1;
    }
    cout << cmmdc;
    return 0;
}
