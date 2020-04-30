#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("ani.in");
ofstream fout("ani.out");
int main()
{
    int c = 0; fin >> c;
    if(c == 1)
    {
        int p = 0; fin >> p;
        cout << p << endl;
        int prima_cif = 0;
        int a_doua_cif = 0;
        int p2 = p;
        int num = 0;
        int puterea_lui_10 = 1;
        while(p)
        {
            num++;
            p = p/10;
        }
        cout << num << endl;
        int i = 1;
        while(i <= num-2)
        {
            puterea_lui_10 = puterea_lui_10*10;
            i++;
        }
        cout << "putere 10 = " << puterea_lui_10 << endl;
        int restul_nr = 0;
        restul_nr = p2/puterea_lui_10;
        cout << restul_nr << endl;
        int c1 = restul_nr%10;
        int c2 = (restul_nr/10)%10;
        if(c1 >= c2)
        {
            fout << c1 << c2 << c1;
        }
        else if(c2 >= c1)
        {
            fout << c2 << c1 << c2;
        }
    }


    if(c == 2)
    {
        int k,n; fin >> n >> k;
        int i = 1;
        int num = 0;
        while(i <= n)
        {
            int j = 2;
            int d = i-1;
            int num_div = 0;
            while(j <= d)
            {
                if(i % j == 0) num_div++;
                j++;
            }
            if(num_div == k) num++;
            i++;
        }
        fout << num;
    }




    if(c == 3)
    {
        int n,k; fin >> n >> k;
        int am_iesit = 0;
        while(true)
        {
            int primul_pa_3_cif = 101;
            int primul_pa_3_cif2 = 101;
            int num_div = 0;
            n = n+1;
            while(true)
            {
                int num = 0;
                while(primul_pa_3_cif2 > 0)
                {
                    num++;
                    primul_pa_3_cif2 = primul_pa_3_cif2/10;
                }
                if(n % primul_pa_3_cif == 0)
                {
                    num_div++;
                    cout << "div = " << primul_pa_3_cif << " n = " << n << endl;
                }
                //cout << "primul pal de 3 cif = " << primul_pa_3_cif << endl;
                primul_pa_3_cif = primul_pa_3_cif+10;
                primul_pa_3_cif2 = primul_pa_3_cif;
                if(primul_pa_3_cif == 201 || primul_pa_3_cif == 302 || primul_pa_3_cif == 403 || primul_pa_3_cif == 504 || primul_pa_3_cif == 605 || primul_pa_3_cif == 706 || primul_pa_3_cif == 807 || primul_pa_3_cif == 908)
                {
                    primul_pa_3_cif++;
                }
                if(num > 3) break;
                if(num_div == k)
                {
                    fout << n;
                    am_iesit = 1;
                    break;
                }
                //cout << "##################################################### num = " << num << endl;

            }
            //cout << "num_div = " << num_div << " n = " << n << endl;
            if(am_iesit == 1)
            {
                break;
            }
        }
    }
    //cout << "Hello world!" << endl;
    return 0;
}
