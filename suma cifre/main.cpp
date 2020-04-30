#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("sc.in");
ofstream fout("sc.out");
int main()
{
    int m,n,s;
    fin >> m >> n >> s;

    int numar = 0;

    while(m <= n)
    {
        int c = 0;
        int suma_m = 0;
        numar = m;
       int numar_2 = numar;
        while(numar > 0)
        {
        c = numar % 10;
        numar = numar / 10;
        suma_m = c + suma_m;
        }
        if(suma_m == s)
        {
            fout << numar_2 << endl;
        }
        m = m+1;
    }

  return 0;
}
