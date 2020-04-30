#include <iostream>
#include <math.h>
#include <fstream>
using namespace std;
ifstream fin("amuleta.in");
ofstream fout("amuleta.out");
int main()
{
    bool v[1000];
    for(int i = 0;i < 1000;i++)
    {
        v[i] = 0;
    }
    v[0] = 1;
    v[1] = 1;
    for(int i = 2;i < (int)sqrt(1000);i++)
    {
        if(v[i] == 0)
        {
            for(int j = 2;j <= 1000/i;j++)
            {
                v[i*j] = 1;
            }
        }
    }
    for(int i = 0;i < 1000;i++)
    {
        cout << v[i] << " " << i << endl;
    }
    int p = 0;
    int n = 0; fin >> n >> p;
    int nr_citit = 0;
    int maxi = 0;
    int cifre_distincte = 0;
    int precedent = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> nr_citit;
        if(v[nr_citit] == 0)
        {
            if(nr_citit > maxi) maxi = nr_citit;
            int ultima_cif = nr_citit%10;
            cout << ultima_cif << " " << precedent << endl;
            if(ultima_cif != precedent && precedent > 0) cifre_distincte++;
            precedent = ultima_cif;

        }
    }
    for(int i = 0;i < n;i++)
    {
        fin >> nr_citit;
        if(v[nr_citit] == 0)
        {
            int ultima_cif = nr_citit%10;
            cout << ultima_cif << " " << precedent << endl;
            if(ultima_cif != precedent && precedent > 0) cifre_distincte++;
            if(nr_citit == maxi)
            {
                break;
            }
            precedent = ultima_cif;
        }
    }
    cifre_distincte--;
    if(p == 1) fout << maxi;
    if(p == 2) fout << cifre_distincte;
    return 0;
}
