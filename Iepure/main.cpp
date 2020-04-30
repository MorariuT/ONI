#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("iepuras.in");
ofstream fout("iepuras.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int k = 0;
        int n = 0; fin >> n >> k;
        int num = 0;
        int v[n+1];
        int i = 1;
        while(i <= n)
        {
            fin >> v[i];
            i++;
        }
        int prime[25] = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
      //  cout << v[k] << endl;
        int poz = k;
        //cout << "v[poz] = " << v[poz] << " si poz = " << poz << endl;
        while(true)
        {
            /*
            cout << "termenul nou = " << t_nou << " si poz = " << poz << endl;
            cout << "num = " << num << endl;
            */
            //cout << "v[poz] = " << v[poz] << " si poz = " << poz << endl;
            num++;
            int j = 0;
            int e_prim = 0;
            while(j < 25)
            {
                if(v[poz] == prime[j])
                {
                    //t_nou *= 2;
                    poz = poz+v[poz]*2;
                    e_prim = 1;
                    //cout << "e prim deci adaugam pozitita cu " << v[poz]*2 << " si poz = " << poz << endl;
                    break;
                }
                j++;
            }
            if(e_prim == 0) {poz = poz+v[poz];}
            if(poz > n)
            {
                fout << "DA" << endl << num;
                break;
            }
            else if(v[poz] == 0)
            {
                fout << "NU" << endl << num;
                break;
            }
        }

    }
    return 0;
}
