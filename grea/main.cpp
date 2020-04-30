#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("grea.in");
ofstream fout("grea.out");
int main()
{
    long long int n = 0;
    fin >> n;
    long long int nr_citit = 0;
    long long int i = 1;
    while(i <= n)
    {
        fin >> nr_citit;
        long long int num = 0;
        int am_gasit = 0;
        int fp_initial = 2;
        while(nr_citit > 1)
        {
            long long int fp = fp_initial;
            long long int num_fp = 0;

            while(fp <= nr_citit/2+1)
            {
        //        cout << "nr_citit = " << nr_citit << endl;
                if(nr_citit % fp == 0)
                {
                    num++;
                    fp_initial = fp;
                    num_fp++;
            //        cout << "num_fp = " << num_fp << endl;
                    nr_citit = nr_citit/fp;
              //      cout << num << endl;
                    break;
                }
                if(nr_citit>1 && fp * fp > nr_citit)
                {
                    fp = nr_citit; // trecem direct la n, urmatorul factor din descompunere
                }
                if(fp < 3) fp++;
                else fp += 2;
            }


            if(num_fp == 0) break;


           // nr_citit = nr_citit/2;
        }
        fout << num+1 << endl;
        i++;
    }
    return 0;
}
