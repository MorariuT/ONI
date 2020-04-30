#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("4.in");
ofstream fout("4.out");
int main()
{
    int n,c1,c2,c3;
    fin >> n;
    c1 = n%10;
    c2 = (n/10)%10;
    c3 = (n/100)%10;
    if (c1 > c2 && c1 > c3 && c2 > c3)
    {
        fout << c3 << " " << c2 << " " << c1;
    }
    if (c1 > c2 && c1 > c3 && c2 < c3)
    {
        fout << c2 << " " << c3 << " " << c1;
    }
    if (c1 > c2 && c1 < c3)
    {
        fout << c2 << " " << c1 << " " << c3;
    }
    if (c1 < c2 && c1 < c3)
    {
        fout << c1 << " " << c2 << " " << c3;
    }
    if (c1 == c2 && c1 == c3)
    {
        fout << c3 << " " << c1 << " " << c2 << " sunt egale";
    }
    return 0;
}
