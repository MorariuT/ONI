#include <iostream>

using namespace std;

int main()
{
    int x = 0;  //x = dreata
    int y = 0;
    int d = 0;            //y = stanga
    cin >> x >> y;
    d = y - x;
    if (d > 1 && d < 1000000000000000000000000000000000000000000000000)
    {
        cout << "Poate";

    }
    else
    {
        if (x % 2 == 0 && y % 2 == 1)
    {
        cout << "Poate";
    }
    else
    {
        cout << "Nu poate";
    }
    }

   // cout << "Hello world!" << endl;
    return 0;
}
