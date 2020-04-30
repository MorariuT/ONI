#include <iostream>
#include <fstream>
#include <math.h>
#include <limits.h>
using namespace std;
ifstream fin("extraprime.in");
ofstream fout("extraprime.out");
int main()
{
    long long int a,b; fin >> a >> b;
    long long int num_extreme = 0;
    long long int max = 0;
    long long int min = INT_MAX;
    bool* v = new bool[b];
    for(int i = 0;i < b;i++)
    {
        v[i] = 0;
    }
    v[0] = 1;
    v[1] = 1;
    for(int i = 2;i < sqrt(b);i++)
    {
        if(v[i] == 0)
        {
            for(int j = 2;j <= b/i;j++)
            {
                v[j*i] = 1;
            }
        }
    }


    for(int i = a;i <= b;i++)
    {
        int num_cif = 0;
        int poz = 0;
        int n = i;
        int put10 = 1;
        int n2 = n;
        int am_gasit = 0;
        if(v[i] == 0)
        {
            //cout << v[i] << endl;
            while(n2)
            {
                num_cif++;
                n2 /= 10;
            }
            int am_iesit = 0;
            for(int y = 0;y < num_cif;y++)
            {
                int nr_1 = n/(int)pow(10,num_cif-y);
                int nr_2 = n%(int)pow(10,num_cif-1-y);
                int nr_nou = nr_1*(int)pow(10,num_cif-y-1)+nr_2;
             //   cout << "nr_1 = " << nr_1 << " nr_2 = " << nr_2 << " nr_nou = " << nr_nou << " i = "  << i << endl;
                if(v[nr_nou] == 0) {}
                else
                {
                    am_iesit = 1;
                    break;
                }

            }
            if(am_iesit == 0)
            {
                num_extreme++;
                if(i < min) min = i;
                if(i > max) max = i;
            }
            //cout << endl << endl << endl;
        }
    }
    fout << num_extreme << endl << min << endl << max;
    return 0;
}
