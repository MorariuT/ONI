#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zile.in");
ofstream fout("zile.out");
int main()
{
    int l = 1;
    int m = 2;
    int mi = 3;
    int j = 4;
    int v = 5;
    int s = 6;
    int q = 0;
    int x,y,z;
    fin >> x >> y >> z;
    if (x == y || x == z)
    {
        q = x;
    }
    else if (y == z)
    {
        q = y;
    }
    else
    {
        if (x < y && x < z)
        {
            q = x;
        }
        if (y < x && y < z)
        {
            q = y;
        }
        if (z < y && z < x)
        {
            q = z;
        }
    }
    if (q == l)
    {
        fout << "Luni";
    }
    if (q == m)
    {
        fout << "Marti";
    }
    if (q == mi)
    {
        fout << "Miercuri";
    }
    if (q == j)
    {
        fout << "Joi";
    }
    if (q == v)
    {
        fout << "Vineri";
    }
    if (q == s)
    {
        fout << "Sambata";
    }




        return 0;
}
