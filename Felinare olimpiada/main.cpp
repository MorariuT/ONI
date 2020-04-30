#include <iostream>

using namespace std;

int main()
{
    int n,p,k,d;
    int num = 0;
    int a = 0;
    int b = 0;
    cin >> n >> p;
    int s = p+a;
    while (s != n)
    {
        if (s > n)
        {
            d = s - n;
            b = s - n;
        }
        else
        {
            b = s;
        }
        s = p+a;
        num = num + 1;
    }
    return 0;
}
