#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("alo.in");
ofstream fout("alo.out");
int main()
{
    int e = 0,n = 0; fin >> e >> n;
    int nr_persoana = 0,nr_de_minute = 0;
    int i = 1;
    int prima_cif = 0;
    int ultima_cif = 0;
    while(i <= n)
    {
        fin >> nr_persoana >> nr_de_minute;
        prima_cif = (nr_persoana/10000)%10;
        ultima_cif = nr_persoana%10;
        if(prima_cif == 1 && ultima_cif == 9 || prima_cif == 2 && ultima_cif == 9)
        {
            e = e;
        }
        else if(prima_cif == 1 && ultima_cif == 5)
        {
            e = e-nr_de_minute*2;
        }
        else if(prima_cif == 2 && ultima_cif == 5)
        {
            e = e+nr_de_minute;
        }
        i++;
    }
    fout << e << endl;
    return 0;
}
