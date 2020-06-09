#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("plata.in");
ofstream fout("plata.out");
int main()
{
    int n = 0,s = 0;
    fin >> n >> s;
    int nr_n,nr_s;
    int x[n];
    int y[n];
    int nu_e_bun = 0;
    int r[n];
    int s_min = 0,s_max = 0;
    int suma = 0;
    for(int i = 0;i < n;i++)
    {
        fin >> nr_n >> nr_s;
        s_min += nr_n;
        s_max += nr_s;
        x[i] = nr_n;
        y[i] = nr_s;
    }
    if(s_max < s || s_min > s) fout << "imposibil";
    else
    {
        int suma_n = 0;
        for(int i = 0;i < n;i++)
        {
            suma_n = 0;
            for(int j = i+1;j < n;j++)
            {
                suma_n += x[j];
            //    cout << vn[j] << " " << j << " " << suma_n << " " << s << endl;;
            }
            int dif = s-suma_n; //cati nasturi putem da}
            if(dif > y[i])
            {
                s = s-y[i];
               // fout << y[i] << " ";
               r[i] = y[i];
            }
            else
            {
                s = s-dif;
                //fout << dif << " ";
                r[i] = dif;
            }

           // cout << s << endl;
        }
        for(int i = 0;i < n;i++) fout << r[i] << " ";
    }
   // cout << "Hello world!" << endl;
    return 0;
}
