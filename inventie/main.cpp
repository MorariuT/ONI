#include <iostream>
#include <fstream>
#include <limits.h>
using namespace std;
ifstream fin("inventie.in");
ofstream fout("inventie.out");
int main()
{
    unsigned long long int n = 0; fin >> n;
    unsigned long long int min = 18446744073709551615;
    unsigned long long int max = 0;
    unsigned long long int nr_citit = 0;
    unsigned long long int i = 1;
    unsigned long long int printam_0 = 1;
    unsigned long long int nr_citit_2 = 0;
    while(i <= n)
    {
        unsigned long long int nr_final = 0;
        fin >> nr_citit >> nr_citit_2;
        if(nr_citit > nr_citit_2)
        {
            nr_final = nr_final*10+(nr_citit-nr_citit_2);
            //cout << "nr_final if 1 = " << nr_final << endl;
        }
        else if(nr_citit < nr_citit_2)
        {
            nr_final = nr_final*10+(nr_citit_2-nr_citit);
          //  cout << "nr_final if 2 = " << nr_final << endl;
        }
        else if(nr_citit == nr_citit_2)
        {
            nr_final = nr_citit+nr_citit_2;
            //cout << "nr_final if 3 = " << nr_final << endl;
        }

        if(nr_citit != nr_citit_2)
        {
            unsigned long long int put_10 = 1;
            unsigned long long int nr = nr_citit+nr_citit_2;
            //cout << "nr = " << nr << endl;
            unsigned long long int nr_2 = nr;
            while(nr)
            {
                put_10 = put_10 * 10;
                nr /= 10;
            }
        //    cout << "put_10 = " << put_10 << endl;
            nr_final = nr_final*put_10+nr_2;
        }
        fout << nr_final << endl;
        if(nr_final % 2 == 1)
        {
            if(nr_final > max) max = nr_final;
            if(nr_final < min) min = nr_final;
            printam_0 = 0;
        }
      //  cout << "printam_0 = " << printam_0 << endl;

        i++;

    }
    //if(max == min && printam_0 == 0) fout << min;
    if(printam_0 == 0) fout << min << endl << max << endl;
    else if(printam_0 == 1) fout << "0";
    //cout << "Hello world!" << endl;
    return 0;
}
