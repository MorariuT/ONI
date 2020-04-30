#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("MN.in");
ofstream fout("MN.out");
int main()
{
    //1
    int m = 0;
    int n = 0;
    //2
    fin >> m >> n;
    //3
    while(m <= n)
    {
        if(m%2==0)
        {
            //4
            fout << m << " ";
        }
        m = m+1;
    }
    return 0;
}
