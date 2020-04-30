#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("12.in");
ofstream fout("12.out");
int main()
{
    int n = 0;
    fin >> n;
    if(n % 2 == 0)
    {
        fout << n-1 << " " << n-3;
    }
    if(n % 2 == 1)
    {
        fout << n-2 << " " << n-4;
    }
    return 0;
}
