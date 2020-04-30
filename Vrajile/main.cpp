#include <iostream>

using namespace std;

int main()
{
    int n = 0;
    int p = 0;
    int v = 0;
    int i = 1;
    int j = 1;
    int t = 0;
    int maxi = 0;
    cin >> n;
    while (i <= n)
    {
        t = 0;
        cin >> p >> v;
        i = i+1;
        while (j <= i)
        {
            t = p*v;
            j = j+1;
        }
        if (maxi <= t)
        {
            maxi = t;
        }
        if (t%2==0)
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "3" << endl;
        }
    }
   // cout << maxi;
    return 0;
}
