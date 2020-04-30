#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cmmc.in");
ofstream fout("cmmc.out");
int main()
{
    int n = 0;
    int x = 0;
    int y = 0;
    int z = 0;
    fin >> n;
    x = n%10;
    y = (n/10)%10;
    z = (n/100)%10;
    if (x > y && x > z)
    {
        fout << x << " este ce mai mare numar";
    }
    if (y > x && y > z)
    {
        fout << y << " este cel mai mare numar";
    }
    if (z > x && z > y)
    {
        fout << z << " este cel mai mare numar";
    }
    return 0;
}
