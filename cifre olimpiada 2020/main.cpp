#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre.in");
ofstream fout("cifre.out");
int main()
{
    int n = 0;
    long p = 1;
    int i = 1;
    int c = 0;
    int c1 = 0;
    int c2 = 0;
    fin >> n;
    while(i <= n)
    {
        p = 2*p;
        i = i+1;
    }
    c = p%10;
    c1 = (p/10)%10;
    c2 = (p/100)%10;
    fout << c2 << " " << c1 << " " << c;
    return 0;
}
