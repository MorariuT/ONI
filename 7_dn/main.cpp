#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("7.in");
ofstream fout("7.out");
int main()
{
    int n,m,n1,n2,m1,m2;
    fin >> n >> m;
    n1 = n%10;
    n2 = (n/10)%10;
    m1 = m%10;
    m2 = (m/10)%10;
    if(n1 == m1 || n1 == m2 || n2 == m1 || n2 == m2)
    {
        fout << "DA";
    }
    else
    {
        fout << "NU";
    }
    return 0;
}
