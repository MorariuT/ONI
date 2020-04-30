#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifre.in");
ofstream fout("cifre.out");
int main()
{
    int n,k;
    int ultima_cif_n = 0;
    int num = 0;
    int numar_transformat = 0;
    int numar_transformat_de_k = 0;
    fin >> n >> k;
    while(n > 0)
    {
        ultima_cif_n = n%10;
        n = n/10;
        if(ultima_cif_n == k)
        {
            num = num+1;
            numar_transformat_de_k = numar_transformat_de_k*10+k;
        }
        else  if (ultima_cif_n != k)
        {
            numar_transformat = numar_transformat*10+ultima_cif_n;
        }
    }
    int numar_transformat_inv = 0;
    int cif_numar_transformat = 0;
    while(numar_transformat > 0)
    {
        cif_numar_transformat = numar_transformat%10;
        numar_transformat = numar_transformat/10;
        numar_transformat_inv = numar_transformat_inv*10+cif_numar_transformat;
    }
    fout << num << endl;
    fout << numar_transformat_de_k << numar_transformat_inv;
    return 0;

}
