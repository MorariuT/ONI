#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("vale.in");
ofstream fout("vale.out");
int main()
{
    int n = 0;
    int i = 1;
    int numar = 0;
    fin >> n;
    int cc = 0;
    int num = 0;


    while(i <= n)
    { //pt fiecarer
        fin >> numar;
        int cp = 10;

        int bun = 1;
        int vale = 0;
        int numar_temp = numar;
        cout << numar <<  endl;
        if (numar<100) bun=0;
        while(numar_temp > 0)
        { //pt fiecare cif
            cc = numar_temp%10;
            numar_temp = numar_temp/10;
            cout << "cc=" <<cc  << " cp=" << cp << " vale=" << vale << endl;



            if((cc < cp) && (vale == 0))
            {
            }
            else if((cc >= cp) && (vale == 0))
            {
                vale = 1;
            }
            else if((cc > cp) && (vale == 1))
            {
            }
            else if((cc > cp) && (vale = 0))
            {
                bun = 0;
                cout << "break" << endl;
                break;
            }
            else if((cc < cp) && (vale == 1))
            {
               bun  = 0;
               cout << "break" << endl;
               break;
            }

            cp = cc;
        }
        if(bun == 1)
        {
            fout << numar << " ";
            num = num+1;
        }

        i = i+1;
    }
    fout << endl << num;
    return 0;
}
