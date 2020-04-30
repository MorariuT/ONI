#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("cifmaxmin.in");
ofstream fout("cifmaxmin.out");
int main()
{
    int n = 0;
    int min_final = INT_MAX;
    int max_final = 0;
    int i = 1;
   long long int nr_citit = 0;
    int num_p = 0;
    int num_i = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> nr_citit;
        int max = 0;
        int min = 100;
        int num_max = 0;
        int max_i = 0;

        if(nr_citit % 2 == 0)
        {
            num_p++;
           // cout << nr_citit << endl;
            int cif_p = 0;
            while(nr_citit  > 0)
            {
                cif_p = nr_citit%10;
                nr_citit = nr_citit/10;
                if(cif_p > max) max = cif_p;
                if(cif_p < min) min = cif_p;
            }
            num_max = 10*max+min;
            if(num_max > max_final) max_final = num_max;
           // cout << max << min << endl;;
        }
        int num_i_min = 0;

        if(nr_citit % 2 == 1)
        {
            num_i++;
           // cout << nr_citit << endl;
            int cif_i = 0;
            int cif_p = 0;
            while(nr_citit  > 0)
            {
                cif_i = nr_citit%10;
                nr_citit = nr_citit/10;
                if(cif_i > max) max = cif_i;
                if(cif_p < min) min = cif_i;
            }
            num_i_min = 10*min+max;
            if(min_final >= num_i_min) min_final = num_i_min;
        }
        i++;

    }
    fout << max_final << " " << num_p << " " << min_final << " " << num_i;
    return 0;
}
