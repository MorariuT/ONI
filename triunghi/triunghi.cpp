#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("triunghi.in");
ofstream fout("triunghi.out");
int main()
{
    int t = 0;
    fin >> t;
    int s = 0;
    int s_while = 1;
    int i2 = 2;
    int lei = 0;
    int i = 1;
    while(s_while <= t)
    {
        s = s+i;
        i = i+i2;
        i2 = i2+1;
        s_while = s_while+1;
    }
    lei = s/15;
    fout << lei;
    return 0;
}
