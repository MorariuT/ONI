#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ciuperci.in");
ofstream fout("ciuperci.out");
int main()
{
    int n = 0;
    int num_prime = 0;
    int num_divizibile = 0;
    int i = 1;
    int ciuperci = 0;
    fin >> n;
    while(i <= n)
    { //Pentru fiecare ciuperca6
        fin >> ciuperci;
        int d = ciuperci-1;
        int j = 2;
        int num = 0;
        while(j <= d)
        {
            if(ciuperci % j == 0)
            {
                num = num+1;
            }
            j = j+1;
        }
        if(num > 0)
        {
            num_divizibile = num_divizibile+1;
        }
        if(num == 0)
        {
            num_prime = num_prime+1;
        }

        i = i+1;
    }
    fout << num_prime << " " << num_divizibile << endl;
    return 0;
}
