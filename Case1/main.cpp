#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("case1.in");
ofstream fout("case1.out");
int main()
{
    int n = 0; fin >> n;
    int nr_casa = 0;
    int i = 1;
    int rudenie_1 = 0;
    int rudenie_2 = 0;
    int rudenie_3 = 0;
    int rudenie = 0;
    int numar_b = 0;
    int numar_c = 0;
    int numar_f = 0;
    int num_cif = 0;
    while(i <= n)
    {
        fin >> nr_casa;
        int nr_casa3 = nr_casa;
        int nr_casa4 = nr_casa;
        int a_patra_cif = 0;
        int puterea_10 = 1;
        int prima_cif = 0;
        int a_treia_cif = 0;
        int a_doua_cif = 0;
        int nr_casa2 = nr_casa;
        prima_cif  = (nr_casa2/1000)%10;
       // prima_cif = nr_casa/puterea_10;
        if(prima_cif == 1) rudenie_1++;
        else if(prima_cif == 2) rudenie_2++;
        else if(prima_cif == 3) rudenie_3++;
        while(nr_casa3 > 100)
        {
            a_doua_cif =  nr_casa3/10;
            nr_casa3 = nr_casa3/10;
        }
        a_doua_cif = nr_casa3%10;
        numar_b += a_doua_cif;
        a_treia_cif = (nr_casa4/10)%10;
        numar_f += a_treia_cif;
        a_patra_cif = nr_casa4%10;
        numar_c += a_patra_cif;
        i++;
    }
    fout << rudenie_1 << endl << rudenie_2 << endl << rudenie_3 << endl << numar_b << endl << numar_f << endl << numar_c;
    return 0;
}
