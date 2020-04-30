#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("taxi.in");
ofstream fout("taxi.out");
int main()
{
    int a,b,c,d;
    int suma_a = 0;
    int diferenta_b = 0;
    fin >> a >> b >> c >> d;
    while(a < c)
    {
        a = a+b;
        c = c-d;
    }
    if(a > c)
    {
        fout << a;
    }
    if(a == c)
    {
        fout << c;
    }
    return 0;
}
