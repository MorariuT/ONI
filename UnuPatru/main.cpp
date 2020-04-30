#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("unupatru.in");
ofstream fout("unupatru.out");
int main()
{
    int n = 0; fin >> n;
    unsigned long long int nr_citit = 0;
    int i = 1;
    while(i <= n)
    {
        fin >> nr_citit;
        long long int num_repetari = 0;
        while(true)
        {
            long long int cifre = 0;
            unsigned long long int nr_nou = 0;
            while(nr_citit > 0)
            {
                cifre = nr_citit%10;
               // cout << "cifre = " << cifre << endl;
                nr_citit = nr_citit/10;
                nr_nou = nr_nou+cifre*cifre;
            }
            nr_citit = nr_nou;
            cout << nr_nou << endl;
            num_repetari++;
            if(nr_nou == 1 || nr_nou == 4) break;
        }
        i++;
        fout << num_repetari << " ";
    }

    return 0;
}
