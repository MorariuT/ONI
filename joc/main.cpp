#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("joc.in");
ofstream fout("joc.out");

long long putere_10(int nr_citit)
{
    int putere = 1;
    while(nr_citit)
    {
        putere *= 10;
        nr_citit /= 10;
    }
    putere /= 10;
    return putere;
}

int main()
{
    int n = 0; fin >> n;
    int nr_citit = 0;
    int num = 0;
    int nr_nou = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> nr_citit;
        int nr_citit2 = nr_citit;
        int prima_cif = nr_citit/putere_10(nr_citit);
        int ultima_cif = nr_citit%10;
        if(prima_cif < ultima_cif)
        {
            nr_nou = prima_cif*10+ultima_cif;
        }
        if(prima_cif >= ultima_cif)
        {
            nr_nou = ultima_cif*10+prima_cif;
        }
        fout << nr_nou << " ";
        nr_nou = 0;
        nr_citit = nr_citit2;
        int nr_citit_ramas = nr_citit%putere_10(nr_citit);
        nr_citit_ramas /= 10;
        int cif_prec = 0;
        int nr_nou_2 = 0;
        int nr_citit_ramas2 = nr_citit_ramas;
        int nu_e_bine = 0;
        int putere = putere_10(nr_citit_ramas);
        //putere /= 10;
      //  cout << nr_citit_ramas << endl;
        int nr_citit_ramas_inv = 0;
        while(nr_citit_ramas)
        {
            int cif = nr_citit_ramas%10;
            nr_citit_ramas /= 10;
            nr_citit_ramas_inv = nr_citit_ramas_inv * 10 + cif;
        }
      //  cout << nr_citit_ramas_inv << endl;
        nr_citit_ramas = nr_citit_ramas2;
        while(nr_citit_ramas_inv)
        {
            int cif = nr_citit_ramas_inv%10;
            nr_citit_ramas_inv /= 10;
            if(cif > cif_prec && cif_prec > 0)
            {
                nu_e_bine = 1;
      //          cout << "!!!!!!!! " << cif << " " << cif_prec << endl;
                break;
            }


      //      cout << cif << " " << cif_prec << endl;
            cif_prec = cif;
        }
        if(nu_e_bine == 0)
        {
            num++;
     //       cout << "!!!!!!!!!!!!!!!!!!!!" << endl;
        }
    }
    fout << endl << num;
    return 0;
}
