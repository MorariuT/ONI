#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("joc8.in");
ofstream fout("joc8.out");
int main()
{
    int n = 0;
    long long int nr_citit = 0;
    int i = 1;
    int num = 0;
    fin >> n;
    while(i <= n)
    {
        fin >> nr_citit;
        //int cifre_nr = 0;
        long long int nr_citit_2 = nr_citit;
        int num_cif = 0;
        //int num_nou = 0;
        if(nr_citit < 10) num++;
        while(nr_citit)
        {
            num_cif++;
            nr_citit = nr_citit/10;
        }
        if(num_cif%2 == 1)
        {
            if(num_cif == 3)
            {
                int c1 = nr_citit_2%10;
                int c2 = (nr_citit_2/10)%10;
                int c3 = (nr_citit_2/100)%10;
                if((c2 > c1 && c2 > c3) || (c2 < c1 && c2 < c3)) num++;
            }
            if(num_cif == 5)
            {
                int c1 = nr_citit_2%10;
                int c2 = (nr_citit_2/10)%10;
                int c3 = (nr_citit_2/100)%10;
                int c4 = (nr_citit_2/1000)%10;
                int c5 = (nr_citit_2/10000)%10;
                if(((c2 > c1 && c2 > c3) || (c2 < c1 && c2 < c3)) &&
                   ((c3 > c2 && c3 > c4) || (c3 < c2 && c3 < c4)) &&
                   ((c4 > c5 && c4 > c3) || (c4 < c5 && c4 < c3))) num++;
            }
            if(num_cif == 7)
            {
                int c1 = nr_citit_2%10;
                int c2 = (nr_citit_2/10)%10;
                int c3 = (nr_citit_2/100)%10;
                int c4 = (nr_citit_2/1000)%10;
                int c5 = (nr_citit_2/10000)%10;
                int c6 = (nr_citit_2/100000)%10;
                int c7 = (nr_citit_2/1000000)%10;
                if(((c2 > c1 && c2 > c3) || (c2 < c1 && c2 < c3)) &&
                   ((c3 > c2 && c3 > c4) || (c3 < c2 && c3 < c4)) &&
                   ((c4 > c5 && c4 > c3) || (c4 < c5 && c4 < c3)) &&
                   ((c5 > c6 && c5 > c4) || (c5 < c6 && c5 < c4)) &&
                   ((c6 > c7 && c6 > c5) || (c6 < c7 && c6 < c5))) num++;
            }
            if(num_cif == 9)
            {
                int c1 = nr_citit_2%10;
                int c2 = (nr_citit_2/10)%10;
                int c3 = (nr_citit_2/100)%10;
                int c4 = (nr_citit_2/1000)%10;
                int c5 = (nr_citit_2/10000)%10;
                int c6 = (nr_citit_2/100000)%10;
                int c7 = (nr_citit_2/1000000)%10;
                int c8 = (nr_citit_2/10000000)%10;
                int c9 = (nr_citit_2/100000000)%10;
                if(((c2 > c1 && c2 > c3) || (c2 < c1 && c2 < c3)) &&
                   ((c3 > c2 && c3 > c4) || (c3 < c2 && c3 < c4)) &&
                   ((c4 > c5 && c4 > c3) || (c4 < c5 && c4 < c3)) &&
                   ((c5 > c6 && c5 > c4) || (c5 < c6 && c5 < c4)) &&
                   ((c6 > c7 && c6 > c5) || (c6 < c7 && c6 < c5)) &&
                   ((c7 > c8 && c7 > c6) || (c7 < c8 && c7 < c6)) &&
                   ((c8 > c9 && c8 > c7) || (c8 < c9 && c8 < c7))) num++;
            }
        }
        i++;
    }
    fout << num;
    return 0;
}
