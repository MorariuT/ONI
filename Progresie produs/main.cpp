#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("pp.in");
ofstream fout("pp.out");
int main()
{   //1.
    int n = 0;
    int i = 1;
    int s = 0;
    int m = 0;
    //2.
    fin >> n;
    int q = n-1;
    //3.
    while (i <= q)
    {   //Pentru fiecare termen din sir
        int j = 1;
        int p = 1;
        while(j <= i)
        {   //Pentru fiecare produs il calculam
            p = p*j;
            j = j+1;
        }
        p = p*j;
        cout << "p = " << p;
        s = s+p;
        cout << "s = " << s;

        i = i+1;
    }
    m = s+1;
    fout << m << " ";
    //cout << s << " ";
    return 0;
}
