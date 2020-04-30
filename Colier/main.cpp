#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("colier.in");
ofstream fout("colier.out");
int main()
{
    int t = 0;
    fin >> t;
    if(t == 1)
    {
        int n = 0;
        int i = 1;
        int cif_z = 0;
        int num_nr = 0;
        int cif_u = 0;
        int nr_citit = 0;
        fin >> n;
        while(i <= n)
        {
            fin >> nr_citit;
            int cifra = 0;
            int max_pos = 0;
            int min_pos= 0;
            int num_1 = 0;
            int num_2 = 0;
            int pos = 0;
            int max = 0;
            int min = 999999999;
            while(nr_citit)
            {
                cifra = nr_citit%10;
                nr_citit = nr_citit/10;
                pos++;
                if(cifra > max)
                {
                    max = cifra;
                    max_pos = pos;

                }
                if(cifra <  min)
                {
                    min = cifra;
                    min_pos = pos;
                }
            }
            if(min_pos > max_pos)
            {
                num_1 = min*10+max;
                cout << num_1 << endl;
                cif_u = num_1%10;
                cif_z = (num_1/10)%10;
                if(cif_z < cif_u) num_nr++;
            }
            int cif_u_2 = 0;
            int cif_z_2 = 0;
            if(max_pos > min_pos)
            {
                num_2 = max*10+min;
                cout << num_2 << endl;
                cif_u_2 = num_2%10;
                cif_z_2 = (num_2/10)%10;
                if(cif_z_2 < cif_u_2) num_nr++;
            }
            i++;
        }
        fout << num_nr << endl;
    }
    if(t == 2)
    {
        int n = 0;
        int i = 1;
        int cif_z = 0;
        int num_nr = 0;
        int cif_u = 0;
        int nr_citit = 0;
        fin >> n;
        while(i <= n)
        {
            fin >> nr_citit;
            int cifra = 0;
            int max_pos = 0;
            int min_pos= 0;
            int num_1 = 0;
            int num_2 = 0;
            int pos = 0;
            int max = 0;
            int min = 999999999;
            while(nr_citit)
            {
                cifra = nr_citit%10;
                nr_citit = nr_citit/10;
                pos++;
                if(cifra > max)
                {
                    max = cifra;
                    max_pos = pos;

                }
                if(cifra <  min)
                {
                    min = cifra;
                    min_pos = pos;
                }
            }
            if(min_pos > max_pos)
            {
                num_1 = min*10+max;
                cout << num_1 << endl;
                cif_u = num_1%10;
                cif_z = (num_1/10)%10;
                if(cif_z < cif_u) num_nr++;
            }
            int cif_u_2 = 0;
            int cif_z_2 = 0;
            if(max_pos > min_pos)
            {
                num_2 = max*10+min;
                cout << num_2 << endl;
                cif_u_2 = num_2%10;
                cif_z_2 = (num_2/10)%10;
                if(cif_z_2 < cif_u_2) num_nr++;
            }
            i++;
        }
        fout << num_nr+1 << endl;
    }
    return 0;
}
