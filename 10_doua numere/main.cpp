#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("10.in");
ofstream fout("10.out");    // a1 = unitati
                            // a2 = zeci
                            // b1 = unitati
                            // b2 = zeci
int main()
{
    int a,b,a1,a2,b1,b2,nrp,nri;
    fin >> a >> b;
    a1 = a%10;
    a2 = (a/10)%10;
    b1 = b%10;
    b2 = (b/10)%10;
    nrp = 0;
    nri = 0;
    if(a1 % 2 == 0)
    {
        nrp  = nrp+1;
    }
    else
    {
        nri = nri+1;
    }
    if (a2 % 2 == 0)
    {
        nrp = nrp+1;
    }
    else
    {
        nri = nri+1;
    }
    if (b1 % 2 == 0)
    {
      nrp = nrp+1;
    }
    else
    {
        nri = nri+1;
    }
    if (b2 % 2 == 0)
    {
        nrp = nrp+1;
    }
    else
    {
        nri = nri+1;
    }
    if(a1 % 2 == 0 && b1 % 2 == 0 || a1 % 2 == 1 && b1 % 2 == 1)
    {
        fout << nrp;
    }
    if (a1 % 2 == 1 && b1 % 2 == 0 || a1 % 2 == 0 && b1 % 2 == 1)
    {
        fout << nri;
    }
    return 0;
}
