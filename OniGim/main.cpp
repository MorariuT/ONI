#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("onigim.in");
ofstream fout("onigim.out");
int main()
{
    int i = 1;
    int n = 0;
    int nr_citit_n = 0;
    int k = 0;
    int j = 1;
    fin >> k >> n;
    int l_num_k[1000];
    int l_num_n[1000];
    int y = 0;
    while(y <= k)
    {
        l_num_k[y] = 0;

        y++;
    }
    while(i <= n)
    {
        fin >> nr_citit_n;
        i++;
    }
    int nr_citit_k = 0;
    while(j <= k)
    {
        fin >> nr_citit_k;
        if(j == nr_citit_k) l_num_k[j]++;
        cout << l_num_k[j] << " ";
        j++;
    }

    return 0;
}
