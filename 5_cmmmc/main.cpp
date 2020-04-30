#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("5.in");
ofstream fout("5.out");
int main()
{
    int n = 0;
    int m = 0;
    int i = 2;
    int d1 = 0;
    fin >> n >> m;
    int d = n-1;
    while(i <= d)
    {
        d1 = n*i;
        if(d1 % m == 0)
        {
            fout << d1;
            break;
        }
        i = i+1;
    }
    return 0;
}
