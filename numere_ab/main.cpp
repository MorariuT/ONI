#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("numere_ab.in");
ofstream fout("numere_ab.out");
int main()
{
    int a = 0;
     int b = 0;
    fin >> a >> b;
    while(a < b)
    {
        fout << a << " ";
        a = a+1;
    }
    return 0;
}
