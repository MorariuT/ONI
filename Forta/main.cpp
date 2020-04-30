#include <iostream>
#include <fstream>
#include <limits.h>
#include <math.h>
using namespace std;
ifstream fin("forta.in");
ifstream fin2("forta.in");
ofstream fout("forta.out");
int main()
{
    int cer = 0; fin >> cer; fin2 >> cer;
    int l[900];
    int n = 0; fin >> n; fin2 >> n;
    int ld[n];
    int nd[n];
    for(int i = 0;i < n;i++)
    {
        ld[i] = 0;
        //cout << ld[i] << " ";
    }
    int v[n];
    int nr_citit = 0;
    //cout << (int)sqrt(2000000000000000000000000000000000z0) << endl;
    int max_div = 0;
    for(int i = 0;i < 900;i++) l[i] = 0;
    int min_nr = INT_MAX;
    //cout << min_nr << endl;
    for(int i = 0;i < n;i++)
    {
        fin >> nr_citit;
        nd[i] = nr_citit;
        int nr_div = 0;
        for(int j = 1;j <= sqrt(nr_citit);j++)
        {
            if(nr_citit % j == 0)
            {
                if(nr_citit/j == j) nr_div++;
                else nr_div += 2;
             //z   cout << nr_citit << " j = " << j << " ";
            }
            //cout << nr_div << endl;
            ld[i] = nr_div;
        }
        l[nr_div]++;
        if(max_div < nr_div) max_div = nr_div;
    }
    for(int i = 0;i < n;i++)
    {
        if(nd[i] == max_div)
        {
            if(min_nr > ld[i]) min_nr = ld[i];
        }
    }
    // << max_div << endl;
    for(int i = 0;i < n;i++)
    {
       // cout << "@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << endl;
    }
    int num_raspuns = 0;
    for(int i = 0;i < n;i++)
    {
        int nr_div = 0;
        for(int j = 1;j <= sqrt(nd[i]);j++)
        {
            if(nd[i] % j == 0)
            {
                if(nd[i]/j == j) nr_div++;
                else nr_div += 2;
             //z   cout << nr_citit << " j = " << j << " ";
            }
            //cout << nr_div << endl;
            ld[i] = nr_div;
        }
        if(nr_div == max_div)
        {
            if(min_nr > nd[i]) min_nr = nd[i];
        }
    }
    //fout << min_nr << endl;
    //for(int i = 0;i < 112;i++) cout << l[i] << " ";
    //cout << endl;
    int max_nr = 0;
    for(int i = 0;i < 900;i++)
    {
        if(max_nr < l[i]) max_nr = l[i];
    }
    if(cer == 1)
    {
        fout << min_nr;
    }
    else if(cer == 2)
    {
       fout << max_nr;
    }
    return 0;
}
