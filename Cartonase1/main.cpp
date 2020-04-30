#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("cartonase1.in");
ofstream fout("cartonase1.out");
int main()
{
    long long int n = 0; fin >> n;
    long long int nr_citit = 0;
    long long int cmmdc_min = INT_MAX;
    int trebuie_sa__1 = 0;
    long long int index_raspuuns = 0;
    int cmmdc_precedent = 0;
    long long int precedent = 0; fin >> precedent;
    for(int i = 1;i < n;i++)
    {
        fin >> nr_citit;
        long long int nr_citit2 = nr_citit;
        long long int cmmdc = 0;
        long long int c = 0;
        while(precedent)
        {
            c = nr_citit%precedent;
            nr_citit = precedent;
            precedent = c;
        }
        if(nr_citit % 2 == 0 && trebuie_sa__1 == 0)
        {
            trebuie_sa__1 = 0;
        }
        else
        {
            trebuie_sa__1 = 1;
        }
        if(nr_citit < cmmdc_min)
        {
            cmmdc_min = nr_citit;
            index_raspuuns = i+1;
        }
        precedent = nr_citit2;
        cmmdc_precedent = nr_citit;
    }
    if(trebuie_sa__1 == 1) fout << index_raspuuns;
    else if(trebuie_sa__1 == 0) fout << "-1";
    return 0;
}
