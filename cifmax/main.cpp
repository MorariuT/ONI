#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifmax.in");
ofstream fout("cifmax.out");
int main()
{
    int n = 0;
    int i = 1;
    int m = 0;
    int m1 = 0;
    int j = 1;
    int maxi = 0;
    int c = 0;
    int n2 = 0;
    int n3 = 0;
    fin >> n;
    while (i <= n)
    {   //Penru fiecare rand.
        fin >> m;
        fin >> m1;
        c = 0;
        maxi = 0;


        cout << m1 << " ";
            while (m1 > 0)
            { //Pentru fiecare cif a numarului.
                c = 0;
                c = m1%10;
                m1 = m1/10;
                if (c > maxi)
                {
                    maxi = c;
                }
                else
                {
                    maxi = maxi;
                }
                if (c == m)
                {
                    n2 = n2;
                }
                else
                {
                    n2 = n2*10+c;
                }
            }

        i = i+1;
        n3 = 0;
            while (n2 > 0)
            {
                j = 0;
                j = n2%10;
                n2 = n2/10;
                n3 = n3*10+j;
            }
        fout << maxi << " " << n3 << endl;
    }

    return 0;
}
