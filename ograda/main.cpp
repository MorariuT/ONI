#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ograda.in");
ofstream fout("ograda.out");
int main()
{
   long long int c,p,x;
    fin >> x;
    fin >> c >> p;
    if(x==1)
    {
       long long int num_v = 0,num_g = 0;
        num_v = (p-2*c)/2;
        num_g = c - num_v;
        fout << num_g << " " << num_v;
    }
    if(x == 2)
    {
        long long int i = 1;
       long long  int j = 2;
        long long int num_div_i = 0;
        long long int num_div_p = 0;
        while(i <= c)
        {
            if(c % i == 0)
            {
                num_div_i++;
            }
            i = i+2;
        }
        while(j <= p)
        {
            if(p % j == 0)
            {
                num_div_p++;
            }
            j = j+2;
        }
        fout << num_div_i << " " << num_div_p;
    }
    return 0;
}
