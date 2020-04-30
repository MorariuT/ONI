#include <iostream>
#include <fstream>
#include <math.h>
using namespace std;
ifstream fin("turnuri1.in");
ofstream fout("turnuri1.out");

long long putere(int baza,int exp)
{
    int p = 1;
    for(int i = 0;i < exp;i++) p = p*baza;
    return p;
}

int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        int n = 0; fin >> n;
        int inaltime = 0;
        char culoare = 0;
        int t = 0; cin >> t;
        int num_max = 0;
        char culoare_precent = 0;
        int inaltime_precedent = 0;
        int inaltime_max = 0;
        int inaltime_max_raspuns = 0;
        int num_adunare = 0;
        fin >> inaltime_precedent >> culoare_precent;
        int am_adunat = 0;
        //cout << inaltime_precedent << " " << culoare_precent << endl;
        int num = 0;
        for(int i = 1;i < n;i++)
        {
            fin >> inaltime >> culoare;
            cout << "inaltime = "<< inaltime << " culoare = " << culoare << "  inaltime_precdent = " << inaltime_precedent << "  culoare_precedent = " << culoare_precent << " inaltime_max = " << inaltime_max << " inaltime_max_raspuns = " << inaltime_max_raspuns << " ";
            if(inaltime_precedent > inaltime && culoare_precent != culoare)
            {
                num++;
                cout << "am_adunat = " << am_adunat << endl;
                if(am_adunat == 0)
                {
                    inaltime_max = inaltime_max+inaltime_precedent;
                    cout << "am_adunat " << inaltime_max << endl;
                    am_adunat = 1;
                }
                inaltime_max = inaltime_max+inaltime;
                cout << inaltime_max << endl;
                num_adunare++;
                if(inaltime_max > inaltime_max_raspuns) inaltime_max_raspuns = inaltime_max;
                cout << "intram if " << inaltime << endl;
                if(num_max < num) num_max = num;
            }
            else
            {
                if(num_max < num) num_max = num;
                if(inaltime_max > inaltime_max_raspuns) inaltime_max_raspuns = inaltime_max;
                cout << "intram else " << inaltime << endl;
                inaltime_max = 0;
                am_adunat = 0;
                num = 0;
            }
            culoare_precent = culoare;
            inaltime_precedent = inaltime;

        }
        num_max++; //primul cub e corect mereu
        fout << num_max << " " << inaltime_max_raspuns;
    }
    return 0;
}
