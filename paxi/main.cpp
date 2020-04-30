#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("paxi.in");
ofstream fout("paxi.out");
int main()
{
    int c = 0;
    fin >> c;
    if(c == 1)
    {
        int n = 0; fin >> n;
        int cifre  = 0;
        int c1 = n%10;
        int c2 = (n/10)%10;
        int c3 = (n/100)%10;
        if(c2-c3 == c1-c2)
        {
            fout << "1";
        }
        else
        {
            fout << "0";
        }
       // cout << "Hello world!" << endl;

    }
    if(c == 2)
    {
        int m = 1; fin >> m;
        int n = 0;
        int num_n = 0;
        int i = 1;
        while(i <= m)
        {
            fin >> n;
            int n2 = n;
            int c1,c2,c3,c4,c5,c6,c7,c8,c9;
            int num_cif = 0;
            while(n)
            {
                num_cif++;
                n = n/10;
            }
            n = n2;
            if(num_cif == 3)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                if(c2-c3 == c1-c2)
                {
                    num_n++;
                }

            }
            if(num_cif == 4)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4)
                {
                    num_n++;
                }

            }
            if(num_cif == 5)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5)
                {
                    num_n++;
                }

            }
            if(num_cif == 6)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6)
                {
                    num_n++;
                }

            }
            if(num_cif == 7)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7)
                {
                    num_n++;
                }

            }
            if(num_cif == 8)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                c8 = (n/10000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7 && c6-c7 == c7-c8)
                {
                    num_n++;
                }

            }
            if(num_cif == 9)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                c8 = (n/10000000)%10;
                c9 = (n/100000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7 && c6-c7 == c7-c8 && c7-c8 == c8-c9)
                {
                    num_n++;
                }

            }
            i++;
        }
        fout << num_n << endl;
    }
    if(c == 3)
    {
        int m = 1; fin >> m;
        int n = 0;
        int num_n = 0;
        int i = 1;
        while(i <= m)
        {
            fin >> n;
            int n2 = n;
            int cif_m3,cif_m4,cif_m5,cif_m6,cif_m7,cif_m8,cif_m9;
            int c1,c2,c3,c4,c5,c6,c7,c8,c9;
            int num_cif = 0;
            while(n)
            {
                num_cif++;
                n = n/10;
            }
            n = n2;
            if(num_cif == 3)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                if(c2-c3 == c1-c2)
                {
                    cif_m3 = (n/10)%10;
                    fout << cif_m3;
                }

            }
            if(num_cif == 4)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4)
                {
                    cif_m4 = c3;
                    fout << cif_m4;
                }

            }
            if(num_cif == 5)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5)
                {
                    cif_m5 = c3;
                    fout << cif_m5;
                }

            }
            if(num_cif == 6)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6)
                {
                    cif_m6 = c4;
                    fout << cif_m6;
                }

            }
            if(num_cif == 7)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7)
                {
                    cif_m7 = c4;
                    fout << cif_m7;
                }

            }
            if(num_cif == 8)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                c8 = (n/10000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7 && c6-c7 == c7-c8)
                {
                    cif_m8 = c5;
                    fout << cif_m8;
                }

            }
            if(num_cif == 9)
            {
                c1 = n%10;
                c2 = (n/10)%10;
                c3 = (n/100)%10;
                c4 = (n/1000)%10;
                c5 = (n/10000)%10;
                c6 = (n/100000)%10;
                c7 = (n/1000000)%10;
                c8 = (n/10000000)%10;
                c9 = (n/100000000)%10;
                if(c1-c2 == c2-c3 && c2-c3 == c3-c4 && c3-c4 == c4-c5 && c4-c5 == c5-c6 && c5-c6 == c6-c7 && c6-c7 == c7-c8 && c7-c8 == c8-c9)
                {
                    cif_m9 = c5;
                    fout << cif_m9;
                }

            }
            i++;
        }
    }
    return 0;
}
