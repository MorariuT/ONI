#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("scif.in");
ofstream fout("scif.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
    int c1 = 1;
    int s = 0;
    fin >> n;
    while(i <= n)
    {
        s = 0;
        fin >> m;
        while(m > 0)
        {
        c1 = m%10;
        m = m/10;
        s = s+c1;
        }
        i = i+1;
        fout << s << endl;
    }
    return 0;
}
