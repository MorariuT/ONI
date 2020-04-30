#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("secventa.in");
ofstream fout("secventa.out");
int main()
{
    int n = 0; fin >> n;
    int i = 2;
    int secventa = 0;
    int num = 1;
    int num_cuvinte = 0;
    int precedent = 0;
    int max = 0;
    fin >> precedent;
    while(i <= n)
    {
        fin >> secventa;
        if(precedent == 1 && secventa == 0) num++;
        num_cuvinte++;
        cout << num_cuvinte << endl;
        if(precedent == 1 && secventa == 0)
        {
            if(num_cuvinte > max) max = num_cuvinte;
            num_cuvinte = 0;
        }
        if(num_cuvinte > max) max = num_cuvinte;
        precedent = secventa;
        i++;
    }
    fout << num << endl << max;
    return 0;
}
