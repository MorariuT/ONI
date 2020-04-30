#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numerus.in");
ofstream fout("numerus.out");
int main()
{
    int i = 1;
    int n = 0;
    int k = 0;
    int am_gasit = 0;
    fin >> n >> k;
    int nr_sir = 0;
    int num = 0;
    while(i <= n*6-n)
    {
        nr_sir++;
        //cout << i << endl;
        if(k == i) am_gasit = 1;
        if(i % 6 == 0) num++;
        i++;
    }
    if(n % 2 == 1)
    {
            fout << nr_sir - 4 << " " << nr_sir - 3 << " " << nr_sir - 2 << " " << nr_sir - 1 << " " << nr_sir << " " << nr_sir << endl;
    }
    else if(n % 2 == 0)
    {
            fout << nr_sir << " " << nr_sir << " " << nr_sir - 1 << " " << nr_sir - 2 << " " << nr_sir - 3 << " " << nr_sir - 4<< endl;
    }
    int j = 1;
    while(j <= k)
    {
        int prim_ter = j*5;
        if(prim_ter >= k && prim_ter-4 <= k)
        {
            fout << prim_ter/5 << endl;
        }
        j++;
    }
    if(k%10 == 0 || k%10 == 1)
    {
        fout << "A ";
    }
    if(k%10 == 0 || k%10 == 0)
    {
        fout << "B ";
    }
    if(k%10 == 3 || k%10 == 9)
    {
        fout << "C";
    }
    if(k%10 == 8 || k%10 == 4)
    {
        fout << "D";
    }
    if(k%10 == 5 || k%10 == 7)
    {
        fout << "E ";
    }
    if(k%10 == 5 || k%10 == 6)
    {
        fout << "F ";
    }
    return 0;
}
