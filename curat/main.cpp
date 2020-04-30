#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cuart.in");
ifstream fin_gina("cuart.in");
ofstream fout("cuart.out");
ifstream fin_mihai("cuart.in");
int main()
{
    int c = 0;
     int j = 1;
    fin >> c;
    if(c == 1)
    {
        int numere_gina = 0;
        int numere_mihai = 0;
        int i = 1;
        int maxi = 0;
        int n = 0;
        fin >> n;
        while(i <= n)
        {
            fin >> numere_gina;
            int numere_gina_temp = numere_gina;
            //cout << numere_gina << " ";
            int cifre_gina = 0;
            int numar_gina = 0;
            while(numere_gina > 0)
            {
                cifre_gina = numere_gina%10;
                numere_gina  = numere_gina/10;
                if(cifre_gina % 2 == 0)
                {
                }
                else if(cifre_gina % 2  == 1)
                {
                    numar_gina = numar_gina*10+cifre_gina;
                }
            }
            //cout << "Numar original = " << numere_gina_temp << " " << "numar nou = " << numar_gina << endl;
            if(numar_gina == 0)
            {
                if(numere_gina_temp > maxi)
                {
                    maxi = numere_gina_temp;
                }
            }
            int cifre_gina_inv = 0;
            int numar_gina_inv = 0;
            while(numar_gina > 0)
            {
                cifre_gina = numar_gina%10;
                numar_gina = numar_gina/10;
                numar_gina_inv = numar_gina_inv*10+cifre_gina;
            }
            int numar_gina_inv_2 = numar_gina_inv;
            i++;
        }
       // cout << "maxim = " << maxi << " ";










        while(j <= n)
        {
            fin >> numere_mihai;
            int numere_mihai_temp = numere_mihai;
            //cout << numere_mihai << " ";
            int cifre_mihai = 0;
            int maxi = 0;
            int numar_mihai = 0;
            while(numere_mihai > 0)
            {
                cifre_mihai = numere_mihai%10;
                numere_mihai = numere_mihai/10;
                if(cifre_mihai % 2 == 1)
                {
                }
                else if(cifre_mihai % 2  == 0)
                {
                    numar_mihai = numar_mihai*10+cifre_mihai;
                }
            }
            if(numar_mihai == 0)
            {
                if(numere_mihai_temp > maxi)
                {
                    maxi = numere_mihai_temp;
                }
            }
            int cifre_mihai_inv = 0;
            int numar_mihai_inv = 0;
            while(numar_mihai > 0)
            {
                cifre_mihai = numar_mihai%10;
                numar_mihai = numar_mihai/10;
                numar_mihai_inv = numar_mihai_inv*10+cifre_mihai;
            }
            int numar_mihai_inv_2 = numar_mihai_inv;
            j++;
        }
        cout << maxi;
    }

    else if(c == 2)
    {

    }
    return 0;
}
