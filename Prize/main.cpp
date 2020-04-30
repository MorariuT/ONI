#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prize.in");
ofstream fout("prize.out");
int main()
{
    int n = 0;
    fin >> n;
    int nr_citit = 0;
   long long int suma = 0;
    int i = 1;
    while(i <= n)
    {
        fin >> nr_citit;
        suma = suma+nr_citit;
        i++;
    }
    suma = suma-(n-1);
    fout << suma;
    return 0;
}
