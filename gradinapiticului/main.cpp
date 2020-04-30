#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("gp.in");
ofstream fout("gp.out");
int main()
{
    int m = 0;

    fin >> m;
    int i = 2;
    int numar = 0;
    while(i <= m)
    {  // Pentru fecare nr de la 1 la m
        numar = i;
        int j = 2;
        int am_gasit = 0;
       // cout << am_gasit;
        int d = numar - 1;
        int n = 0;
        while(j <= d)
        {  //Pentru fiecare j
            if (numar % j == 0)
            {
                am_gasit = 1;
            }
            else if (numar % j != 0)
            {
                am_gasit = am_gasit;
            }

            j = j+1;
        }
        if(am_gasit > 0)
        {


            int suma_div_primi = 0;

            if (numar%2==0){ suma_div_primi=suma_div_primi+2; }
            if (numar%3==0){ suma_div_primi=suma_div_primi+3; }
            if (numar%5==0){ suma_div_primi=suma_div_primi+5; }
            if (numar%7==0){ suma_div_primi=suma_div_primi+7; }
            if (numar%11==0){ suma_div_primi=suma_div_primi+11; }
            if (numar%13==0){ suma_div_primi=suma_div_primi+13; }
            if (numar%17==0){ suma_div_primi=suma_div_primi+17; }
            if (numar%23==0){ suma_div_primi=suma_div_primi+23; }


            fout << suma_div_primi << " ";
        }
        else if (am_gasit == 0)
        {
            fout << numar << " ";
        }
        i = i+1;
    }

    //cout << "Hello world!" << endl;
    return 0;
}
