#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    int c = 0;
    int i = 1;
    int m = 0;
    int s = 0;
    int c1 = 0;
    int mini = 28;
    // c = nr de case
    cin >> c;
    while (i <= c)
    {
        m = 0;
        cin >> m;
        while (m > 0)
        {
            c1 = m%10;
            m = m/10;
            s = s+c1;

        }
        if (s < mini)
        {
                mini = s;
        }
        i = i+1;
    }
    cout << s << endl;
    cout << mini;

    return 0;
}


