#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("atent.in");
ofstream fout("atent.out");
int main()
{
    int n = 0;
    int nr_citit = 0;
    int num = 0;
    int i = 1;
    int am_gasit = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> nr_citit;
        int j = 2;
        int d = nr_citit-1;
        while(j <= d)
        {
            if(nr_citit % j != 0) am_gasit = 1;
            else am_gasit = 0; break;
            j++;
        }
        if(am_gasit == 1) num++;
        i++;
    }
    fout << num << endl;
    return 0;
}
