#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("4.in");
ofstream fout("4.out");

int main()
{
    int n = 0;
    int s = 0
    int c1 = 0;
    fin >> n;
    while (n > 0)
    {
        c1 = n%10;
        n = n/10;
        s = c1+s;
        p = c1*p;
    }
    fout << s <<" " << p << endl;
    return 0;
}
