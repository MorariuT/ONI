#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("zecimala.in");
ofstream fout("zecimala.out");
int main()
{
    unsigned long long x = 0;
    fin >> x;
    /*
    long double putere_2 = 1;
    unsigned long long putere_10 = 1;
    unsigned long long i = 1;
    int zecimala_2 = 0;
    unsigned long long j = 1;
    long double zecimala = 0;
    while(i <= x)
    {
        putere_2 = putere_2*2;
        i++;
    }
    while(j <= x)
    {
        putere_10 = putere_10*10;
        j++;
    }
    zecimala = 1/putere_2;
    zecimala = zecimala*putere_10;
    zecimala_2 = zecimala;
    cout << zecimala_2 << endl;
    fout << zecimala_2%10;
    */
    fout << "5";
    return 0;
}
