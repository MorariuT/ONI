#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("mesaj.in");
ofstream fout("mesaj.out");
int main()
{
    int p = 0; fin >> p;
    if(p == 1)
    {
        int n = 0;
        fin >> n;
        char v[n];
        int i = 0;
        int j = 0;
        int num_cuvinte = 0;
        int num_terminator = 0;
        int precedent = 0;
        while(i < n)
        {
            fin >> v[i];
            cout << v[i] << " ";
            i++;
        }
        cout << endl;
        i = 0;
        int num_litere_repetitive = 0;
        int num_cuvinte_ascunse = 0;
        char litera_terminator;
        int deci_nr_de_cuvinte_care_nu_ascund_cuvinte_ascunse = 0;
        while(i < n)
        {
            //cout << "#####################################" << endl;
            int poz_sf = 0;
            int poz_inceput_urmator_sec = 0;
            if(v[i-1] == v[i])
            {
                num_terminator++;
            }
            if(v[i-1] == v[i] && v[i] != v[i+1])
            {
                int precedent2 = 0;
                poz_sf = i;
                poz_inceput_urmator_sec = poz_sf+1;
                num_terminator++;
                cout << poz_sf << " si poz inceput = " << poz_inceput_urmator_sec << endl;
                cout << " si terminator = " << num_terminator << endl;
                if(precedent2 == 0) {}
                else
                {
                    while(precedent2 <= poz_sf)
                    {
                        cout << v[precedent2] << " #########################################";
                        precedent2++;
                    }
                }
                precedent2 = poz_inceput_urmator_sec;
                num_terminator = 0;
            }
            i++;
        }
        cout << num_cuvinte_ascunse << endl;
        cout << "num_cuvinte = " << num_cuvinte << endl;
    }
    return 0;
}
