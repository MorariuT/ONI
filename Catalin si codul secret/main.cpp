#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("codsecret.in");
ofstream fout("codsecret.out");
int main()
{
    int n = 0; fin >> n;
    int v[n];
    int vf[n];
    //cout << n << endl;
    for(int i = 0;i < n;i++)
    {
        fin >> v[i];
        vf[i] = 0;
     //   cout << v[i] << " ";
    }
    int primul_termen_dif_de__1 = 0;
    int index = 0;
    int trebuie_sa_iesim = 0;
    for(int i = 0;i <= n-2;i++)
    {
        if(i >= 1)
        {
            int j = i-1;
            while(j >= 0)
            {
                if(vf[j] > -1)
                {
                    primul_termen_dif_de__1 = v[j];
                    index = j;
                    break;
                }
                j--;
            }
            if(((primul_termen_dif_de__1 % v[i] == 0) || (v[i] % primul_termen_dif_de__1 == 0)) && ((v[i+1] % v[i] == 0) || (v[i] % v[i+1] == 0)) && vf[i-1] > -1 && vf[i] > -1 && vf[i+1] > -1)
            {
                vf[index] = -1;
                vf[i] = -1;
                vf[i+1] = -1;
            }
            for(int k = 0;k < n;k++)
            {
                cout << v[k] << " ";
            }
            cout << endl;
            for(int k = 0;k < n;k++)
            {
                cout << vf[k] << " ";
            }
            cout << endl;
            cout << primul_termen_dif_de__1 << " " << v[i] << " " << v[i+1] << endl;
            trebuie_sa_iesim = 1;
        }
        else trebuie_sa_iesim = 0;
    }
    int avem__1 = 1;
    //int avem_0 = 1;
    for(int i = 0;i < n;i++)
    {
        cout << vf[i] << " ";
        //if(vf[i] != 0) avem_0 = 0;
        if(v[i] > -1) avem__1 = 0;
    }
    cout << avem__1 << endl;
    if(avem__1 == 0)
    {
        for(int i = 0;i < n;i++)
        {
            if(vf[i] > -1) fout << v[i] << " ";
        }
    }
    else if(avem__1 == 1)
    {
        cout << "Merry Christmas";
    }
    return 0;
}
