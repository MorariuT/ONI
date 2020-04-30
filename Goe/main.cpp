#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("goe.in");
ofstream fout("goe.out");
int main()
{
    int k,p,n; fin >> k >> p >> n;
    int nr_numere = k*10;
    int num = 0;
    int am_in = 0;
    int nr_b = 0;
    for(int i = 0;i < nr_numere;i++)
    {
        int cifre = 0;
        int e_bun = 0;
        int i2 = i;
        while(i2)
        {
            cifre = i2 % 10;
            i2 /= 10;
            if(cifre != 2 && cifre != 4 && cifre != 5 && cifre != 7) {}
            else e_bun = 1;
        }
        if(i % 10 != 0 && e_bun == 0)
        {
         //   cout << i << " ";
            int i3 = i;
            int cifre = 0;
            int nr_nou = 0;


            num++;
        }
        //if(i % 10 == 9) cout << endl;
    }

    nr_b = 0;
    am_in = 0;
    int raspuns_b  = 0;
    for(int i = 0;i < 2147483333;i++)
    {
        int cifre = 0;
        int am_int = 0;
        int e_bun = 0;
        int i2 = i;
        while(i2)
        {
            cifre = i2 % 10;
            i2 /= 10;
            if(cifre != 2 && cifre != 4 && cifre != 5 && cifre != 7) {}
            else e_bun = 1;
            if(cifre == 6 || cifre == 9) am_int = 1;
        }
        if(i % 10 != 0 && e_bun == 0)
        {
         //   cout << i << " ";
            int i3 = i;
            int cifre = 0;
            int nr_nou = 0;
            while(i3)
            {
                cifre = i3%10;
                i3 /= 10;
                nr_nou = nr_nou*10+cifre;
            }
            //cout << "i = " << i << " nr_nou = " << nr_nou << endl;
            //cout << "nr_b = " << nr_b << endl;
            if(i == 6 || i == 9 ||
            i == 66 || i == 99 ||
            i == 666 || i == 999 ||
            i == 6666 || i == 9999 ||
            i == 66666 || i == 99999 ||
            i == 666666 || i == 999999 ||
            i == 6666666 || i == 9999999 ||
            i == 66666666 || i == 99999999 ||
            i == 666666666 || i == 999999999 || am_int == 1) {}
            else if(i == nr_nou)
            {
                nr_b++;
                raspuns_b = i;
            }
            if(nr_b == p)
            {
                am_in = 1;
                break;
            }
        }
    }
    fout << num << endl;
    if(am_in == 1)
    {
        fout << raspuns_b << endl;
    }
    //fout <<  << endl << "91";

    return 0;
}
