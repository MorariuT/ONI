#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("Robot.in");
ofstream fout("Robot.out");
int main()
{
    int n = 0;
    fin >> n;
    int i = 1;
    int num_1 = 0;
    int suma_1 = 0;
    int suma_2 = 0;
    int suma_3 = 0;
    int num_2 = 0;
    int num_3 = 0;
    int nr_citit = 0;
    while(i <= n)
    {
        fin >> nr_citit;
        int nr_citit_3 = nr_citit;
        int nr_citit_2 = nr_citit;
        int cifre_nr_2 = 0;
        int prima_cif = 0;
        int n_cif = 0;
        while(nr_citit_2 > 0)
        {
            cifre_nr_2 = nr_citit_2%10;
            nr_citit_2 = nr_citit_2/10;
            n_cif++;

        }
        while(nr_citit > 10)
        {
            prima_cif = nr_citit/10;
            nr_citit = nr_citit/10;
        }
        if(prima_cif == 1) num_1++;
        else if(prima_cif == 2) num_2++;
        else if(prima_cif == 3) num_3++;
        int scazator = prima_cif;
        int j = 1;
        while(j <= n_cif-1)
        {
            scazator = scazator*10;
            j++;
        }
        if(prima_cif == 1) suma_1 += nr_citit_3-scazator;
        else if(prima_cif == 2) suma_2 += nr_citit_3-scazator;
        else if(prima_cif == 3) suma_3 += nr_citit_3-scazator;
        i++;
    }
    fout << num_1 << " " << suma_1 << endl << num_2 << " " << suma_2 << endl << num_3 << " " << suma_3 << endl;
    return 0;
}
