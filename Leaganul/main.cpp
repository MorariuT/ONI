#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lea.in");
ofstream fout("lea.out");
int main()
{
    int n = 0;
    int m = 0;
    int x = 0;
    fin >> n;
    fin >> m;
    x = n + m;
    fout << "Suma greutatilor este de " << x << " kilograme" << endl;
    if (x >= 100)
    {
        fout << "Nu pot sa se dea impreuna.";
    }else
    {
        fout << "Pot sa se dea impreuna.";
    }
    return 0;
}
