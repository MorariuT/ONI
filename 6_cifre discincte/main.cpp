#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("6.in");
ofstream fout("6.out");
int main()
{
    int a,b,c;
    fin >> a >> b >> c;
    if(a > b && a > c || a > b && a < c || a < b && a < c || a < b && a > c)
    {
        fout << "Toate sunt disincte.";
    }
    if (a > b && a == c || a < b && a == c || a == b && a > c || a == b && a < c)
    {
        fout << "Doua sunt disincte.";
    }
    return 0;
}
