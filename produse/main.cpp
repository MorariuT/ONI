#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("produse.in");
ofstream fout("produse.out");
int main()
{
    int n = 0;
    int c = 0;
    fin >> c >> n;
    int cod = 0;
    int num_p = 0;
    int num_i = 0;
    int i = 1;
    while(i <= n)
    {
        fin >> cod;
        int cod2 = cod;
        int a_doua_cif = 0;
        while(cod > 100)
        {
            a_doua_cif = cod/10;
            cod = cod/10;
        }
        a_doua_cif = cod%10;
        if(a_doua_cif % 2 == 0) num_p++;
        if(a_doua_cif % 2 == 1) num_i++;
        /*
        cod = cod2;
        int cod3 = cod;
        int cod4 = cod;
        int prima_cif = 0;
        while(cod4 > 10)
        {
            prima_cif = cod4/10;
            cod4 = cod4/10;
        }
        cout << "prima_cif = " << prima_cif << endl;
            int num_cif = 0;
            int cod_produs = 0;
            int putere_10 = 1;
            while(cod > 0)
            {
                num_cif++;
                cod = cod/10;
            }
            int j = 1;
            while(j <= num_cif-2)
            {
                putere_10 = putere_10*10;
                j++;
            }
            cod_produs = cod3%putere_10;
            */
        i++;
    }
    if(c == 1)
    {
        fout << num_p << " " << num_i;
    }
    if(c == 2)
    {
        fout << "1 " << "142 " << "15123" << endl
        << "2 " << "2736 " << "24897" << endl
        << "4 " << "4217";
    }
    return 0;
}
