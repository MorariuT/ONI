#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("lis_1.in");
ofstream fout("lis_1.out");
int main()
{
    int n=0;
    fin >> n;
    int j = 1;
    int max = 0;
    int l[n]; for(int i=0;i<n;i++) l[i]=0;
    while(j <= n)
    {
        fin >> l[j];
        if (l[j] > max)
        {
            max = l[j];
        }
        j = j+1;
    }
    fout << max;
    return 0;
}
