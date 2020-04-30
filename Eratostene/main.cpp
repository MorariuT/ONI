#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream fin("eratostene.in");
ofstream fout("eratostene.out");
int main()
{
    int i = 0;
    int n = 0; fin >> n;
    int v[1000000];
    while(i < 1000000)
    {
        v[i] = 0;
        //cout << v[i] << " i = " << i << endl;
        i++;
    }
    v[0] = 1;
    v[1] = 1;
    i = 2;
    while(i < sqrt(1000000))
    {
        if(v[i] == 0)
        {
            int j = 2;
            while(j <= 1000000/i)
            {
                v[i*j] = 1;
                j++;
            }
        }
        i++;
    }
    /*
    i = 0;
    while(i < n)
    {
        if(v[i] == 0) cout << i << endl;
        i++;
    }
    */
    i = 1;
    int num = 0;
    int nr_citit = 0;
    while(i <= n)
    {
        fin >> nr_citit;
        int j = 0;
        if(v[nr_citit] == 0)
        {
            num++;
        }
        i++;
    }
    fout << num;
    return 0;
}
