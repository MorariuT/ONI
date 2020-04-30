#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("copii.in");
ofstream fout("copii.out");
int main()
{
    int c = 0; fin >> c;
    if(c == 1)
    {
        long long int n = 0; fin >> n;
        long long int k = 0; fin >> k;
        unsigned long long int put_k = 1;
        long long int i = 1;
        while(i <= k)
        {
            put_k = put_k*10;
            i++;
        }
        cout << put_k << endl;


        i = 1;
        unsigned long long int produs = 1;
        unsigned long long int produs2 = 1;
        unsigned long long int PK = 10000000000000;


        int num_b = 0;
        int num_cif = 0;
        while(i <= n)
        {

            produs = produs*i;


            if (produs %10==0 ) produs=  produs/10;
            produs = produs%PK;

            //cout << "produs = " << produs << " si i = " << i << endl;

            //if (i>30) break;
            i++;
        }

        cout << "produs final=" << produs << endl;

        produs = produs%(put_k);
        produs2 = produs;
        while(produs2)
        {
            num_cif++;
            produs2 = produs2/10;
        }


        if(num_cif < k)
        {
            int b = k-num_cif;
            while(b)
            {
                fout << "0";
                b--;
            }
        }
        fout << produs;
    }
    return 0;
}
