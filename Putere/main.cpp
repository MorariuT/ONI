#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("putere.in");
ofstream fout("putere.out");
int main()
{
    int p = 1;
    int m,n;
    fin >> m >> n;
    int m2 = m;
    int n2 = n;
    int cm = 0,cn = 0;
    cm = m%10;
    int suma = 0;
    cn = n%10;
    int i = 1;
    int num = 0;
    int j = 1;
    while(i <= cn)
    {
        p = p*cm;
        i++;
    }
    fout << p << endl;
    while(m > 0)
    {
        num++;
        m = m/10;
    }
    int y = 1;
    while(y <= num)
    {
        int cif_m = 0;
        int cif_n = 0;
        while(m2 > 0)
        {
            cif_m = m2%10;
            m2 = m2/10;
            break;
        }
        cout << "m2 = " << cif_m << endl;
        while(n2 > 0)
        {
            cif_n = n2%10;
            cout << "cif_n =  " << cif_n << endl;
            n2 = n2/10;
            break;
        }
        int q = 1;
        int p2 = 1;

        while(q <= cif_n)
        {
            p2 = p2*cif_m;
            q++;
        }
        suma = suma+p2;
        cout << "p2 = " << p2 << endl;
        y++;
    }
    fout << suma;
    return 0;
}
