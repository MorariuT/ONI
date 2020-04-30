#include <iostream>
#include <limits.h>
#include <fstream>
using namespace std;
ifstream fin("munti.in");
ofstream fout("munti.out");
int main()
{
    int n = 0; fin >> n;
    int* v = new int[n];
    int num_egale = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> v[i];
    }
    while(true)
    {
        int index_max = 0;
        int index_min = 0;
        int maxi = 0;
        int mini = INT_MAX;
        for(int i = 0;i < n;i++)
        {
            if(v[i] > maxi)
            {
                maxi = v[i];
                index_max = i;
            }
            if(v[i] < mini)
            {
                mini = v[i];
                index_min = i;
            }
        }
        v[index_max]--;
        v[index_min]++;
       // cout << maxi << " " << mini << endl;
        if(maxi - mini == 0 || maxi - mini == 1) break;
    }
    int num = 0;
    int max_num = 0;
    for(int i = 0;i < n;i++)
    {
        int trebuie_sa_numaram = 0;
        num = 0;
        for(int j = 0;j < n;j++)
        {
            if(v[i] == v[j]) num++;
        }
        if(max_num < num) max_num = num;
        //if(trebuie_sa_numaram == 1) num++;
    }
    fout << max_num;
    delete v;
    return 0;
}
