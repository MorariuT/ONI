#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("tehno.in");
ofstream fout("tehno.out");
int main()
{
    int n = 0;
    fin >> n;
    if (n == 1)
    {
        int numar_nivel = 0;
        int prima_cifra = 0;
        fin >> numar_nivel;
        while(numar_nivel > 10)
        { // Cat timp numar_nivel e mai mare de cat 10.
            prima_cifra = numar_nivel/10;
            numar_nivel = numar_nivel/10;
        }
        if(prima_cifra % 2 == 0)
        {
            fout << "0";
        }
        else
        {
            fout << "1";
        }
    }
    else if(n == 2)
    {
        int i = 9;
            int numar_nivel = 0;
            int prima_cifra = 0;
            fin >> numar_nivel;
            while(numar_nivel > 10)
            { // Cat timp numar_nivel e mai mare de cat 10.
                prima_cifra = numar_nivel/10;
                numar_nivel = numar_nivel/10;
            }
            int nr = 0;
            while(i >= 0)
            {
                if(prima_cifra % 2 == 0)
                {
                    if(i % 2 == 0)
                    {
                        if(i == prima_cifra)
                        {
                        }
                        else
                        {
                            nr = nr*10+(i-1);
                        }
                    }
                    else{}
                }
                else if(prima_cifra % 2 == 1)
                {
                    if(i % 2 == 1)
                    {
                        if(i == prima_cifra)
                        {
                        }
                        else
                        {
                            nr = nr*10+i;
                        }
                    }
                }
                i = i-1;
            }
            fout << prima_cifra << nr;
        }
    //cout << "Hello world!" << endl;
    return 0;

}
