#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("multiplu.in");
ofstream fout("multiplu.out");
int main()
{
    int n = 0;
    fin >> n;
    if (n%3==0)
    {
        fout << "DA";
    }else
    {
        fout << "NU";
    }
    return 0;
}
