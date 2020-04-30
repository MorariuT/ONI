#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("concurs2.in");
ofstream fout("concurs2.out");
ifstream fin2("concurs2.in");
int main()
{
    int c = 0;
    fin >> c;
    fin2 >> c;
    if(c == 1)
    {
        int n = 0; fin >> n;
        int sec,pct_1,pct_2;
        int pct_0 = 0;
        int i = 1;
        while(i <= n)
        {
            fin >> sec >> pct_1 >> pct_2;
            if(pct_1 == 0 || pct_2 == 0)
            {
                pct_0 = 1;
            }
            i++;
        }
        if(pct_0 == 0) fout << "DA";
        else fout << "NU";
    }
    if(c == 2)
    {
        int n = 0; fin >> n;
        int sec,pct_1,pct_2;
        int num_1 = 0,num_2 = 0;
        int pct_0 = 0;
        int i = 1;
        while(i <= n)
        {
            fin >> sec >> pct_1 >> pct_2;
            if(sec == 1) num_1++;
            else if(sec == 2) num_2++;
            i++;
        }
        fout << "1 " << num_1 << endl << "2 " << num_2;
    }
    if(c == 3)
    {
        int n = 0; fin >> n;
        int max_1 = 0,max_2 = 0;
        int num_1 = 0,num_2 = 0;
        int sec,pct_1,pct_2;
        int i = 1;
        while(i <= n)
        {
            fin >> sec >> pct_1 >> pct_2;
            int suma = pct_1+pct_2;
            if(suma > max_1 && sec == 1) max_1 = suma;
            if(suma > max_2 && sec == 2) max_2 = suma;
            i++;
        }
       // cout << "max1 = " << max_1 << " max2 = " << max_2 << endl;
        i = 1;
        fin2 >> n;
   //     cout << "fin2 n = " << n << endl;
        while(i <= n)
        {
            fin2 >> sec >> pct_1 >> pct_2;
//            cout << "fin2 = " << sec << " " << pct_1 << " " << pct_2 << endl;
            int suma = pct_1+pct_2;
  //          cout << "suma = " << suma << endl;
            if(suma == max_1 && sec == 1) num_1++;
            if(suma == max_2 && sec == 2) num_2++;
            i++;
        }
        fout << "1 " << max_1 << " " << num_1 << endl
        << "2 " << max_2 << " " << num_2 << endl
        << (num_1+num_2);
    }
   // cout << "Hello world!" << endl;
    return 0;
}
