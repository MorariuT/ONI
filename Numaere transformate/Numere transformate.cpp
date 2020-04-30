#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("transformate.in");
ofstream fout("transformate.out");
int main()
{
    int n = 0;
    int i = 1;
    int numar_citit = 0;
    int num_max = 0;
    int num_min = 0;
    int maxi = 0;
    int num = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> numar_citit;
        int numar_citit_3 = numar_citit;
        int primele_2_cifre = 0;
        int numar_citit_2 = numar_citit;
        int cifre_nr_citit = 0;
        int rest_numar_citit = 0;
        int rest_numar_citit_inv = 0;
        int cifre_nr_rest = 0;
        int rest = 0;
        while(numar_citit_2 > 100)
        {
            primele_2_cifre = numar_citit_2/10;
            numar_citit_2  = numar_citit_2/10;
        }
         while(numar_citit > 0)
        {
            cifre_nr_citit = numar_citit%10;
            numar_citit = numar_citit/10;
            rest_numar_citit = rest_numar_citit*10+cifre_nr_citit;
        }
        rest_numar_citit = rest_numar_citit/100;
        while(rest_numar_citit > 0)
        {
            cifre_nr_rest = rest_numar_citit%10;
            rest_numar_citit = rest_numar_citit/10;
            rest_numar_citit_inv = rest_numar_citit_inv*10+cifre_nr_rest;
        }

        rest_numar_citit_inv = rest_numar_citit_inv*100 + primele_2_cifre;
        if(rest_numar_citit_inv > maxi)
        {
            maxi = rest_numar_citit_inv;
        }
        if(numar_citit_3 == rest_numar_citit_inv)
        {
            num = num+1;
        }
        if(rest_numar_citit_inv > numar_citit_3)
        {
            num_max = num_max+1;
        }
        if(rest_numar_citit_inv < numar_citit_3)
        {
            num_min = num_min + 1;
        }
        i = i+1;
    }

    fout << maxi << " " << num_max << " " << num_min << " " << num << endl;
    return 0;
}

