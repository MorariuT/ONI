#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vistiernic.in");
ofstream fout("vistiernic.out");
int main()
{
    int n = 0;
    fin >> n;
    long long int nr_citit = 0;
    int num_2 = 0;
    int num_5 = 0;
    long long int i = 1;
    int cifre = 0;
    long long int num = 0;
    unsigned long long int produs = 1;
    while(i <= n)
    {
        fin >> nr_citit;
        while(true)
        {
            if(nr_citit%5 == 0)
            {
                num_5++;
                nr_citit = nr_citit/5;
            }
            else if(nr_citit % 2 == 0)
            {
                num_2++;
                nr_citit = nr_citit/2;
            }
            if(nr_citit%2 != 0 && nr_citit%5 != 0)
            {
                break;
            }
        }
       // cout << "num_2 = " << num_2 << " num5 = " << num_5 << endl;
        i++;
    }
    if(num_2 < num_5) fout << num_2;
    else if(num_2 > num_5) fout << num_5;
    return 0;
}
