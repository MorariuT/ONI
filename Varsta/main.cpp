#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("varsta.in");
ofstream fout("varsta.out");
int main()
{
    //1.
    int i = 0;
    int m = 0;
    int s = 0;
    int d = 0;
    //2.
    fin >> i >> m;
    //3.
    if (i > m)
    {
        fout << "Ionel e mai mare decat Mihai cu " << i-m << " ani.";
    }
    if (m > i)
    {
        fout << "Mihai e mai mare decat Ionel cu " << m-i << " ani.";
    }
    if (i == m)
    {
        fout << "Mihai are varsta egala cu Ionel.";
    }
    return 0;
}
