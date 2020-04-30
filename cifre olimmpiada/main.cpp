#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("cifra.in");
ofstream fout("cifra.out");
int main()
{
    //a
    int n = 0;
    int i = 1;
    int cmin = 1000;
    fin >> n;
    int n1 = n;
    while(n > 0)
    {
        int c1 = 0;
        c1 = n%10+c1;
        n = n/10;
        if (cmin > c1)
        {
            cmin  = c1;
        }
        else
        {
            cmin = cmin;
        }

    }
    fout << cmin << endl;



    //b
        int cmin2 = 0;
        int n2 = 0;
        int n3 = 0;
        int c3 = 0;
        int n4 = 0;

        while(n1 > 0)
        {   //Pentru fiecare cifra a lui n1
            int c2 = 0;     //definim pe c2
            //n2 = 0;
            c2 = n1%10;
            n1 = n1/10;
            cout << n1 << " ";
            cout << c2 << " " << endl;
            if (c2 == cmin)
            {
                n2 = n2;
            }
            else
            {
                n2 = n2*10+c2-cmin;

            }
        }
        while(n2 > 0)
        {   //Pentru fiecare cifra a lui n2.
            c3 = n2%10;
            n2 = n2/10;
            n4 = n4*10+c3;

        }


        fout << n4;
    return 0;
}
