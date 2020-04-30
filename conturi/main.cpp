#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("conturi.in");
ofstream fout("conturi.out");
int main()
{
    int n,x;
    fin >> n >> x;
    int max = 0;
    int i = 1;
    int cont_citit = 0;
    while(i <= n)
    {
        fin >> cont_citit;
        int cont_citit_3 = cont_citit;
        int prima_cif = 0;
        int cont_citit_2  = cont_citit;
        prima_cif = (cont_citit/100000)%10;
        //cout << "prima_cif = " << prima_cif << endl;
        int gen = (cont_citit/10000)%10;
        //cout << "gen = " << gen << endl;
        int suma = cont_citit%10000;
        //cout << "suma = " << suma << endl;
        if(prima_cif == x && gen == 1)
        {
            if(max < suma) max = suma;
        }
        i++;
    }
    fout << max;
    return 0;
}
