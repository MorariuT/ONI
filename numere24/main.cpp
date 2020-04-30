#include <iostream>
#include <fstream>
#include <math.h>
#include <limits.h>
using namespace std;
ifstream fin("numere24.in");
ofstream fout("numere24.out");
int main()
{
    int cer = 0; fin >> cer;
    if(cer == 1)
    {
        long long int n = 0; fin >> n;
        long long int nr = 0;
        nr = 10*(n-1);
        fout << nr << endl;
    }
    if(cer == 2)
    {
        int n = 0; fin >> n;
        int num_1 = 0;
        int num_2 = 0;
        int num_3 = 0;
        int n_2 = n,n_3 = n;
        int n2 = n,n2_2 = n,n2_3 = n;
        int n3 = n,n3_2 = n,n3_3 = n;
        int am_pus_zero_1 = 0;
        int am_pus_zero_2 = 0;
        int am_pus_zero_3 = 0;
        int n4 = n,n4_2 = n,n4_3 = n;
        int n_fara_ultima = n/10;
        int n_fara_doua = n/100;
        int n_fara_trei = n/1000;
        cout << n_fara_ultima << endl;
        if(n_fara_ultima % 10 == 0)
        {
            //cout << "0";
            am_pus_zero_1 = 1;
            num_1 = 0;
        }
        else if(am_pus_zero_1 == 0)
        {
            n_2 = n_fara_ultima,n_3 = n_fara_ultima;
            n2 = n_fara_ultima,n2_2 = n_fara_ultima,n2_3 = n_fara_ultima;
            n3 = n_fara_ultima,n3_2 = n_fara_ultima,n3_3 = n_fara_ultima;
            n4 = n_fara_ultima,n4_2 = n_fara_ultima,n4_3 = n_fara_ultima;
            cout << "else 1 " << endl;
            int put_10 = 0;
            int num_cif = 0;
            int nr_fin = 0;
            while(n3)
            {
                num_cif++;
                n3 /= 10;
            }
            while(true)
            {
                int ultima_cif = n2%10;
                n2 = n2/10;
                nr_fin = ultima_cif*(int)pow(10,num_cif-1)+n2;
                n2 = nr_fin;
                cout << nr_fin << endl;
                if(nr_fin % 10 != 0) num_1++;
                if(n4 == nr_fin) break;
            }
        }

        if(n_fara_doua % 10 == 0)
        {
           // fout << "0";
            am_pus_zero_2 = 1;
            num_2 = 0;
        }

        else if(am_pus_zero_2 == 0)
        {
            int n_2 = n_fara_doua,n_3 = n_fara_doua;
            int n2 = n_fara_doua,n2_2 = n_fara_doua,n2_3 = n_fara_doua;
            int n3 = n_fara_doua,n3_2 = n_fara_doua,n3_3 = n_fara_doua;
            int n4 = n_fara_doua,n4_2 = n_fara_doua,n4_3 = n_fara_doua;
            cout << "else 2 " << endl;;
            int put_10 = 0;
            int num_cif = 0;
            int nr_fin_2 = 0;
            while(n3_2)
            {
                num_cif++;
                n3_2 /= 10;
            }
            while(true)
            {
                int ultima_cif = n2_2%10;
                n2_2 = n2_2/10;
                nr_fin_2 = ultima_cif*(int)pow(10,num_cif-1)+n2_2;
                n2_2 = nr_fin_2;
                cout << nr_fin_2 << endl;
                if(nr_fin_2 % 10 != 10) num_2++;
                if(n4_2 == nr_fin_2) break;
            }
        }

        if(n_fara_trei % 10 == 0)
        {
           // fout << "0";
            am_pus_zero_3 = 1;
            num_3 = 0;
        }

        else if(am_pus_zero_3 == 0)
        {
            int n_2 = n_fara_trei,n_3 = n_fara_trei;
            int n2 = n_fara_trei,n2_2 = n_fara_trei,n2_3 = n_fara_trei;
            int n3 = n_fara_trei,n3_2 = n_fara_trei,n3_3 = n_fara_trei;
            int n4 = n_fara_trei,n4_2 = n_fara_trei,n4_3 = n_fara_trei;
            cout << "else 3 " << endl;;
            int put_10 = 0;
            int num_cif = 0;
            int nr_fin_3 = 0;
            while(n3_3)
            {
                num_cif++;
                n3_3 /= 10;
            }
            while(true)
            {
                int ultima_cif = n2_3%10;
                n2_3 = n2_3/10;
                nr_fin_3 = ultima_cif*(int)pow(10,num_cif-1)+n2_3;
                n2_3 = nr_fin_3;
                cout << nr_fin_3 << endl;
                if(nr_fin_3 % 10 != 0) num_3++;
                if(n4_3 == nr_fin_3) break;
            }
        }
        fout << num_1 << " " << num_2 << " " << num_3;
    }
    if(cer == 3)
    {
        fout << "153";
    }
    return 0;
}
