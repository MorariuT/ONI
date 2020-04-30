#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("prime.in");
ofstream fout("prime.out");
int main()
{
    int a,m;
    int i = 1;
    fin >> a;
    while(i <= a)
    { // Pentru fiecare rand
        fin >> m;
        int d = m-1;
        int j = 2;
        int num = 0;
        cout << m << " ";
        while(j <= d)
            {       //Pentru fiecare nr
                if(m % j == 0)
                {
                    num = num+1;

                }
                else
                {
                    num = num;
                }
                j = j+1;

            }
            i = i+1;
        if(num > 0)
            {
                fout << "NU" << endl;
            }
        else
            {
                fout << "DA" << endl;
            }

    }

   // cout << "Hello world!" << endl;
    return 0;
}
