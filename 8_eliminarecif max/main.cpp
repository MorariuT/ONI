#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("8.in");
ofstream fout("8.out");
int main()
{
    int n = 0;
    int c = 0;
    int c1 = 0;
    int maxi = 0;
    long int c3 = 0;
    int c2 = 0;
    fin >> n;
    while(n > 0)
    {
        c = n%10;
        n = n/10;
        if(c > maxi)
        {
            maxi = c;

        }
        c1 = c1*10+c;
    }
    cout << c1 << " ";
    while(c1 > 0)
    {
        c2 = c1%10;
        c1 = c1/10;
        if (c2 == maxi)
        {
            // nu facem nimic
        }
        else
        {
            c3 = c3*10+c2;
        }

    }
    fout << c3;
    return 0;
}
