#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("multipludek.in");
ofstream fout("multipludek.out");
int main()
{
    int n = 0;
    int k = 0;
   // cout << "Care e numarul:";
    fin >> n;
    //cout << "Care e k:";
    fin >> k;
    if (n%k==0)
    {
        fout << "este multiplu de k";
    }else
    {
        fout << "nu este multiplu de k";
    }
    return 0;
}
