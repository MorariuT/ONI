#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("codjoc.in");
ofstream fout("codjoc.out");
int main()
{
    int n = 0;
    int suma = 0;
    int i = 1;
    int num = 0;
    fin >> n;
    int n1 = n;
    while(n > 0)
    {
        num++;
        n = n/10;
    }
    while(i <= num)
    {
        int cifre = 0;
        int nr_nou = 0;
        int pc = 0;
        int nr_nou_temp  = 0;
        while(n1 > 0)
        {
            pc = n1%10;
            int cifre_nr_nou = 0;
            int nr_nou_inv = 0;
           // cout << pc << endl;
            n1 = n1/10;
            nr_nou = nr_nou*10+pc;
            //cout << nr_nou << endl;
            nr_nou_temp = nr_nou;
            while(nr_nou_temp > 0)
            {
                cifre_nr_nou = nr_nou_temp%10;
                nr_nou_temp = nr_nou_temp/10;
                nr_nou_inv = nr_nou_inv*10+cifre_nr_nou;
                //cout << "nr_nou_inv = " << nr_nou_inv << endl;
            }
            suma = suma+nr_nou_inv;

        }

        i++;
    }
    fout << suma << endl;
    return 0;
}
