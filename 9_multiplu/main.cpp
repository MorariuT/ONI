#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("9.in");
ofstream fout("9.out");
int main()
{
    int n,k,m;
    fin >> n >> k;
    m = n - (n%k);
    fout << m;
    return 0;
}
