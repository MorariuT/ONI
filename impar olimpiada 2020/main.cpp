#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("impar.in");
ofstream fout("impar.out");
int main()
{
    int n = 0;
    int c1,c2,c3,c4;
    fin >> n;
    c1 = n%10;
    c2 = 0;
    c3 = (n/100)%10;
    c4 = (n/1000)%10;
    int c5 = 0;
    int nrr = 0;
    int amgasit = 0;
    while(n > 0)
    {
        c5 = n%10;
        n = n/10;
        if (c5 % 2 == 0)
        {
            if(amgasit == 0)
            {
                c5 = c5+1;
                amgasit = 1;
            }
        }
         nrr = nrr*10 + c5;
    }
    while (nrr > 0)
    {
        c1 = nrr%10;
        nrr = nrr/10;
        c2 = c2*10+c1;
    }
    fout << c2;

    return 0;
}
