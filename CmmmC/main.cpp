#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int i = 1;
    int p = 1;
    int a,b;
    cin >> a >> b;
    n = a*b;
    while (i <= n)
    {
        p = a*i;
        if (p % a == 0 && p % b == 0)
        {
            cout << p;
            break;
        }
        i = i+1;
    }
   // cout << "Hello world!" << endl;
    return 0;
}
