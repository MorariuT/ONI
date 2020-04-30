#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("PA.in");
ofstream fout("PA.out");
int main()
{
    //1.
    int a = 0;
    int i = 0;
    int c1 = 0;
    int p = 1;
    //2.
    fin >> a;
    //3.
    while(a > 0)
    {
        c1 = a%10;
       // fout << c1 << " ";
        a = a/10;
        p = c1*p;
    }

fout << p;

    return 0;
}
