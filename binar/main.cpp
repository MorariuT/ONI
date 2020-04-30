#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("binar.in");
ofstream fout("binar.out");

long long putere(int baza, int exponent)
{
    long long p = 1;
    for(int i = 0;i < exponent;i++) p = p*baza;
    return p;
}

int main()
{
    int n = 0; fin >> n;
    int nr_de_nr_pe_care_trebuie_sa_le_afisam = 0; fin >> nr_de_nr_pe_care_trebuie_sa_le_afisam;
    int nr_citit = 0;
    short vdf[10000];
    for(int i = 0;i < 10000;i++) vdf[i] = 0;
    int num = 0;
   // int t = 0; cin >> t;
    short* v = new short[n];
    for(int i = 0;i < n;i++)
    {
        fin >> v[i];
    }
    long long int nr = 0;
    int y = 0;
    for(int i = n-1;i >= 0;i--)
    {
       // cout << v[i] << " ";
        if(v[i] > 0)nr = nr+putere(2, y) * v[i];
        if(v[i] == -1 || i == 0)
        {
            nr = nr/2;
            //cout << "nr = " << nr << endl;
            vdf[nr]++;
            y = 0;
            nr = 0;
        }
        y++;
    }
    //cout << "vdf = ";

    for(int i = 0;i < nr_de_nr_pe_care_trebuie_sa_le_afisam;i++)
    {
        //cout << vdf[i] << " ";
        int nr_max = 0;
        int max_nr_de_printat = 0;
        //cout << vdf[i] << " ";
        for(int j = 0;j < 10000;j++)
        {
            if(nr_max < vdf[j])
            {
                nr_max = vdf[j];
            }
        }
        for(int j = 0;j < 10000;j++)
        {
            if(max_nr_de_printat < j && vdf[j] == nr_max)
            {
                max_nr_de_printat = j;
            }
        }
        fout << max_nr_de_printat << " " << nr_max << endl;
        nr_max = 0;
        vdf[max_nr_de_printat] = -9;
    }
    return 0;
}
