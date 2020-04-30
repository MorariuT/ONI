#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cercetasi.in");
ofstream fout("cercetasi.out");
int main()
{
    int inceput,sfarsit;
    int n = 0;
    int i = 1;
    int maxi = 0;
    int mini = 9999999;
    fin >> n;
    while(i <= n)
    {
        fin >> inceput >> sfarsit;
        if(inceput > maxi)
        {
            maxi  = inceput;
        }
        if(sfarsit < mini)
        {
            mini = sfarsit;
        }
        i = i+1;

    }
    while(maxi <= mini)
    {
        fout << maxi << " ";
        maxi = maxi+1;
    }

    return 0;
}
