#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pestera.in");
ofstream fout("pestera.out");
int main()
{
    int n = 0,m = 0; fin >> n >> m;
    int nr_citit = 0;
    int nr_citit2 = 0;
    int v_f[n+1];
    for(int i = 0;i < n+1;i++)
    {
        v_f[i] = 0;
    }
    for(int i = 0;i < m;i++)
    {
        fin >> nr_citit >> nr_citit2;
        v_f[nr_citit]++;
        v_f[nr_citit2]++;
    }
    int max = 0;
    int max_index = 0;
    for(int i = 1;i <= n;i++)
    {
       // cout << "i = " << i << " v_f[" << i << "] = " << v_f[i] << endl;
        if(max <= v_f[i])
        {
            max = v_f[i];
            max_index = i;
        }
    }
    //cout << max_index << " ";
    for(int i = 1;i <= n;i++)
    {
        //cout << "i = " << i << " v_f[" << i << "] = " << v_f[i] << " " << max << endl;
        if(v_f[i] == max)
        {
            fout << i << " ";
        }
    }
    fout << endl;
    int a_pus = 0;
    for(int i = 1;i <= n;i++)
    {
        //cout << "i = " << i << " v_f[" << i << "] = " << v_f[i] << " " << max << endl;
        if(v_f[i] == 0)
        {
            fout << i << " ";
            a_pus = 1;
        }
    }
    if(a_pus == 0) fout << "NU";
    //cout << "Hello world!" << endl;
    return 0;
}
