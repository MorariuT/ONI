#include <iostream>

using namespace std;

int main()
{
    int n,m1,m2,s;
    cout << "Ce valori sunt:";
    cin >> n >> m1 >> m2;
    s = m1+m2;
    if (n%s==0)
    {
        cout << n/s << " zile";
    }
    else
    {
        cout << (n/s)+1 << " zile";
    }
    return 0;
}
