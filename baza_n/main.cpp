#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("can.in");
ofstream fout("can.out");
int main()
{
    int n = 0;
    int m = 0;
    int c = 0;
    int i = 1;
    int s = 0;
    fin >> n;
    fin >> m;
    while(m > 0)
    {
        c = m%10;
        m = m/10;
        s = s+c*n;
    }
    cout << s << endl;
    return 0;
}
